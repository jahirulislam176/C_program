#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=0; i<=10; i++){
                printf("%d X %d=%d\n",n,i,n*i);
    }
    return 0;
}
