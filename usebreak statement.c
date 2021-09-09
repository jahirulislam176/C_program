#include<stdio.h>
int main(){
int n;
printf("Enter any value");
scanf("%d",&n);
while(n<=100){

    if(n==10){
        break;

    }
    printf("%d \n",n);
    n++;
}
return 0;
}
