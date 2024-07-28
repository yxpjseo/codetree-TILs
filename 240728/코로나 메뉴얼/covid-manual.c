#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a1,a2,a3;
    int b1,b2,b3;
    scanf("%c %d",&a1,&b1);
    scanf(" %c %d",&a2,&b2);//a2값에 공백이 들어갈 수 있기 때문에 ' %c'
    scanf(" %c %d",&a3,&b3);//a3값에 공백이 들어갈 수 있기 때문에 ' %c'
    if(a1=='Y'&&b1>=37){
        if(a2=='Y'&&b2>=37) //1,2 & 1,2,3
            printf("E");
        else if(a3=='Y'&&b3>=37) //1,3
            printf("E");
        else
            printf("N");
    }
    else if(a2=='Y'&&b2>=37){
        if(a3=='Y'&&b3>=37) //2,3
            printf("E");
        else
            printf("N");
    }
    else  
        printf("N");

    return 0;
}