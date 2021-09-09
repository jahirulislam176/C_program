#include<stdio.h>
int main(){
int n;
printf("Enter any number");
scanf("%d",&n);
while(n<10){
    n++;
    if(n%3==0){
        continue;
    }
    printf("%d The number is Even\n",n);

}
}
