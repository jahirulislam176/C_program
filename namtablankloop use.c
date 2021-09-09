#include<stdio.h>
int main()
{
int n,i;
printf("Ënter a any number");
scanf("%d",&n);
printf("Enter a any digit");
scanf("%d",&i);
for(; i<=10; i++){
   printf("%d X %d=%d\n",n,i,n*i);

}
return 0;
}
