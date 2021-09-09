#include<stdio.h>
int main(){
int n;
printf("Enter any number");
scanf("%d",&n);
while(n<10){
        n++;

    if(n %2==0){
        continue;

    }
    printf("%d The Even number\n",n);


}

return 0;
}
