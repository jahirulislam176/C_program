#include<stdio.h>
int main(){

int a[]={1,2,3,4,5,6,7,8,9};
int l=0,h=8,m;
int n=4;

while(l<=h){
    m=(l+h)/2;
    if(n==a[m]){
        break;
    }
    else if(n<a[m]){
        h=m-1;
    }
    else{
        l=m+1;
    }
}

if(l>h){
    printf("No",n);
}
else{
    printf("This is a array %d position is %d",a[m],m);
}


}
