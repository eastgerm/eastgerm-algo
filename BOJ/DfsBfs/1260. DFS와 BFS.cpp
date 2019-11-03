//
// Created by kimdong on 2019-04-08.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N=0;
int M=0;
int V=0;
bool map[1001][1001]={false}; // 노드간 연결된 path 표시용 2차원 배열
bool dfsVisit[1001]={false}; // dfs시 노드 방문이력 체크용 배열
bool bfsVisit[1001]={false}; // bfs시 노드 방문이력 체크용 배열
vector<int> dfsList; // dfs시 방문한 순서대로 저장할 배열
vector<int> bfsList; // bfs시 방문한 순서대로 저장할 배열
queue<int> prior; // bfs시 탐색 순서를 저장할 큐

void input(); // 입력 함수
void dfs(int currentNode); // dfs탐색 함수, currentNode부터 dfs 탐색
void bfs(); // bfs탐색 함수, 이 안에서 아래의 pushQ함수가 쓰일 예정
void pushQ(int currentNode); // 순전히 currentNode만을 살펴본 후 조건 만족 시 queue에 push만 해주는 함수
void output(); // 출력 함수

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    input();
    dfs(V);
    bfs();
    output();
    return 0;
}

void input(){
    cin >> N >> M >> V;
    for(int i=0; i<M; i++){
        int start=0,end=0;
        cin >> start >> end;
        map[start][end]=true; // 길은 양방향으로 통한다고 했으니
        map[end][start]=true; // 이렇게 두번 다 true로 해주셈
    }
}
void dfs(int currentNode){ // currentNode에서 부터 dfs 탐색
    dfsVisit[currentNode]=true; // currentNode는 dfs를 부르는데 쓰였으므로 방문 기록 남겨야함
    dfsList.push_back(currentNode); // 이 함수를 불렀다는거 자체가 방문list에 등록되어야 한다는 소리이므로
    for(int i=1; i<=N; i++){ // 모든 노드를 탐색
        if(map[currentNode][i] && !dfsVisit[i]){ // currentNode와 길이 나있고, 방문 이력이 없다면
            dfs(i); // 그 노드 i에서 부터 dfs 탐색(재귀 시작)
        }
    }
    return; // 재귀 탈출(사실 없어도 무방한데 재귀에는 return을 써주는 습관이 들면 좋음)
}
void bfs(){
    prior.push(V); // 첫 시작 노드를 queue에 push
    while(!prior.empty()){ // queue가 빌 때까지 반복
        int currentNode=prior.front(); // 현재 queue의 맨 앞 노드를 currentNode로 쓸 예정
        if(!bfsVisit[currentNode]){ // 현재 노드에 방문 이력이 없다면
            pushQ(currentNode); // pushQ함수 호출(아래 pushQ함수 설명 있으니 우선 넘어가셈)
            bfsVisit[currentNode]=true; // bfs탐색에선 pushQ를 불렀다는 사실 방문 기록을 남기는 기준
            bfsList.push_back(currentNode); // 같은 이유로 방문list에 등록
        }
        prior.pop(); // 방금 탐색에 쓰인 queue의 맨 앞 노드를 pop
    }
}
void pushQ(int currentNode){
    for(int i=1; i<=N; i++){ // 모든 노드를 탐색
        if(map[currentNode][i] && !bfsVisit[i]){ // currentNode와 길이 나있고, 방문 이력이 없다면
            prior.push(i); // queue에 push(queue에 push만 한거고 탐색은 위 bfs함수의 while문 안에서 이뤄짐)
        }
    }
}
void output(){ // 저장한 list들 출력
    int dfsSize=dfsList.size();
    int bfsSize=bfsList.size();
    for(int i=0; i<dfsSize; i++){
        cout<< dfsList[i]<< " ";
    }
    cout << endl;
    for(int i=0; i<bfsSize; i++){
        cout<< bfsList[i]<< " ";
    }
}