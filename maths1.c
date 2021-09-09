/*#include<stdio.h>
int main(){
double a1,a2,b1,b2,c1,c2,d,x,y;

printf("Enter the value");
scanf("%lf",&a1);

printf("Enter the a2");
scanf("%lf",&a2);

printf("Enter the value b1");
scanf("%lf",&b1);

printf("Enter the value b2");
scanf("%lf",&b2);

printf("Enter the value c1");
scanf("%lf",&c1);

printf("Enter the value c2");
scanf("%lf",&c2);

d=a1*b2-a2*b1;

if((int)d==0){
    printf("value x and y can not be detarmined.\n");
}

else{
    x=(b2*c1-b1*c2)/d;
    y=(a1*c2-a2*c1)/d;

    printf("X=%0.21f,y=%0.21f\n",x,y);
}
return 0;


}*/

#include<stdio.h>
int main(){

double a,b,c,d,E,x,y;

printf("Enter the value of a");
scanf("%lf",&a);

printf("Enter the value of b");
scanf("%lf",&b);

printf("Enter the value of c");
scanf("%lf",&c);

printf("Enter the value of d");
scanf("%lf",&d);

E=a*b-c*d;

if((int)d==0){
    printf("Value x and y can not determined\n");
}
else{
    x=b+c-b*d/E;
    y=c+d-a*b/E;

    printf("X=%0.2lf,y=%0.2lf\n",x,y);
}
return 0;
}
