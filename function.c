/*#include<stdio.h>
double add(double num1,double num2){
double sum=num1+num2;
printf("The sum result is %0.1f",sum);
return sum;
}

int main(){
double a,b,c;
a=b=3.2;
c=add(a,b);
}*/
/*
#include<stdio.h>
int test_function(int x){
int y=x;
   x=2*y;
   return (x*y);
}
int main(){
int x=10,y,z;
z=test_function(x);
printf("X=%d y=%d z=%d\n",x,y,z);
}*/

/*#include<stdio.h>
double pi=3.14;

void my_fun(){
 pi=3.9;
}
int main(){
printf("%2f\n",pi);

my_fun();
printf("%0.2f\n",pi);
return 0;
}*/
/*#include<stdio.h>
int find_max(int ara[],int n);
int main(){
int ara[]={-100,0,53,22,83,23,89,-132,201,3,85};
int n=11;
int max=find_max(ara,n);
printf("%d\n",max);
return 0;
}

int find_max(int arr[],int n){

    int max=arr[0];
    for(int i=1; i<n; i++){
     if(arr[i]>max){
        max=arr[i];
    }

    }
return max;
}*/

 #include<stdio.h>
 void test_function(int ara[]){
 ara[0]=100;
 return 0;
 }
 int main(){
     int ara[]={1,2,3,4,5};
     printf("%d\n",ara[0]);
     test_function(ara);
     printf("%d\n",ara[0]);
     return 0;
 }




