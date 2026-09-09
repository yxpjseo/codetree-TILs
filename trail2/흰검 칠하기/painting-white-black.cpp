#include <iostream>
#define MAX 100000

using namespace std;

int n;
int r[2*MAX+1];
int cnt_w[2*MAX+1];
int cnt_b[2*MAX+1];

int w, b, g;

int main() {
    cin >> n;

    int cur = MAX;

    for (int i = 0; i < n; i++) {
        int x;
        char c;
        
        cin >> x >> c;
        if(c=='L'){
            while(x--){
                r[cur]=1;
                cnt_w[cur]++;
                if(x) cur--;
            }
        } else {
            while(x--){
                r[cur]=2;
                cnt_b[cur]++;
                if(x) cur++;
            }
        }
    }

    for (int i=0; i<=2*MAX; i++){
        
        if(cnt_b[i]>=2 && cnt_w[i]>=2) g++;
        else if(r[i]==1) w++; 
        else if(r[i]==2) b++;
    }

    cout << w << ' ' << b << ' ' << g;

    return 0;
}