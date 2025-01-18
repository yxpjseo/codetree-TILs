#include <stdio.h>

int main() {
    // Please write your code here.
    int n,a,cnt=0;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0) arr[cnt++]=a;
    }
    for(int j=cnt-1;j>=0;j--) printf("%d ",arr[j]);
    return 0;
}