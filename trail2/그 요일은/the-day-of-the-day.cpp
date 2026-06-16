#include <unordered_map>
#include <iostream>
using namespace std;

int m1, d1, m2, d2;
string a;

int month_days[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

unordered_map<string, int> day = {
    {"Mon", 1},
    {"Tue", 2},
    {"Wed", 3},
    {"Thu", 4},
    {"Fri", 5},
    {"Sat", 6},
    {"Sun", 7}
};

int count_month_days(int m, int d){
    int result = d;

    for(int i=1; i<m; i++){
        result += month_days[i];
    }

    return result;
}

int main() {
    // Please write your code here.
    int result=0, gap=0;
    cin >> m1 >> d1 >> m2 >> d2 >> a;

    gap = count_month_days(m2, d2) - count_month_days(m1, d1);
    result = gap/7;

    if((gap%7 + 1) >= day[a]){
        result += 1;
    }

    cout << result;

    return 0;
}