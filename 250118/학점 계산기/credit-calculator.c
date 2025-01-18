#include <stdio.h>

int main() {
    // Please write your code here.
    double arr[5];
    double sum=0,grade;
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    grade=sum/n;
    printf("%.1lf\n",grade);

    if(grade>=4) printf("Perfect");
    else if(grade>=3) printf("Good");
    else printf("Poor");

    return 0;
}