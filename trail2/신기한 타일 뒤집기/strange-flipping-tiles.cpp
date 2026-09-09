#include <iostream>
#define MAX 100000

using namespace std;

int n;
int r[2*MAX+1];
int w, b;

int main() {
    cin >> n;

    int cur=MAX;
    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if(c=='L'){
            while(x--){
                r[cur]=1;
                cur--;
            }
            cur++;
        }
        else{
            while(x--){
                r[cur]=2;
                cur++;
            }
            cur--;
        }
    }

    // Please write your code here.
    for(int i=0; i<=2*MAX; i++){
        if(r[i]==1) w++;
        else if(r[i]==2) b++;
    }

    cout << w << " " << b;

    return 0;
}