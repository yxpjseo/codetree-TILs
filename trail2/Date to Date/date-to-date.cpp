#include <iostream>
using namespace std;

int m1, d1, m2, d2, n;

int days(int m, int d) {
    int day=d;
    int num_of_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=1; i<m; i++){
        day+=num_of_days[i];
    }

    return day;
}

int main() {
    // Please write your code here.
    cin >> m1 >> d1 >> m2 >> d2;

    cout << days(m2,d2) - days(m1,d1) + 1;

    return 0;
}