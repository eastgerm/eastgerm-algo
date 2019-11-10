//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

string playlist[25] = {
        "1967 DavidBowie\n",
        "1969 SpaceOddity\n",
        "1970 TheManWhoSoldTheWorld\n",
        "1971 HunkyDory\n",
        "1972 TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars\n",
        "1973 AladdinSane\n",
        "1973 PinUps\n",
        "1974 DiamondDogs\n",
        "1975 YoungAmericans\n",
        "1976 StationToStation\n",
        "1977 Low\n",
        "1977 Heroes\n",
        "1979 Lodger\n",
        "1980 ScaryMonstersAndSuperCreeps\n",
        "1983 LetsDance\n",
        "1984 Tonight\n",
        "1987 NeverLetMeDown\n",
        "1993 BlackTieWhiteNoise\n",
        "1995 1.Outside\n",
        "1997 Earthling\n",
        "1999 Hours\n",
        "2002 Heathen\n",
        "2003 Reality\n",
        "2013 TheNextDay\n",
        "2016 BlackStar\n"
};

int N;
string year1,year2;
int start,finish;

int _stoi(string s) {
    int res = 0;
    int len = s.length();
    for(int i=1; i<=len; i++)
        res += (s[i-1]-'0')*pow(10,len-i);
    return res;
}
void inputN();
void input();
void findIdx();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputN();
    for(int i=0; i<N; i++) {
        input();
        findIdx();
        output();
    }
    return 0;
}

void inputN() {
    cin >> N;
}
void input() {
    cin >> year1 >> year2;
}
void findIdx() {
    int yearN1 = _stoi(year1);
    for(int i=0; i<25; i++) {
        int thisYear = _stoi(playlist[i].substr(0,4));
        if(yearN1 <= thisYear) {
            start = i;
            break;
        }
        if(i == 24) start = 25;
    }

    int yearN2 = _stoi(year2);
    for(int i=24; i>=0; i--) {
        int thisYear = _stoi(playlist[i].substr(0,4));
        if(thisYear <= yearN2) {
            finish = i;
            break;
        }
        if(i == 0) finish = -1;
    }
}
void output() {
    if(start > finish) cout << 0 << '\n';
    else {
        cout << finish-start+1 << '\n';
        for(int i=start; i<=finish; i++) cout << playlist[i];
    }
}