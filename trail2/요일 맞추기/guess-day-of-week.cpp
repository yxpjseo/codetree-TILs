#include <iostream>
using namespace std;

string day[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

int m1, d1, m2, d2;

int count_month_days(int m, int d){
    int count = 0;
    int month_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i=1; i<m; i++){
        count += month_days[i];
    }

    count += d;

    return count;
}

int main() {
    // Please write your code here.
    cin >> m1 >> d1 >> m2 >> d2;

    int result = count_month_days(m2 ,d2) - count_month_days(m1, d1) + 1;
    result %= 7;

    if(result < 0) result+=7;

    cout << day[result];

    return 0;
}