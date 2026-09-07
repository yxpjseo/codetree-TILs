#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {

    int R[100]= {0};
    int max=0;

    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    for(int i=0; i<K; i++) {
        for(int j=A[i]; j<=B[i]; j++){
            R[j]+=1;
        }
    }

    for(int i=0; i<N; i++){
        if(max<R[i]){
            max=R[i];
        }
    }

    cout << max;

    return 0;
}