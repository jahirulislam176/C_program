/*#include<stdio.h>
int main(){
    double x,y,x_plus_y,x_minus_y;
    printf("Enter the value of x+y");
    scanf("%1f", &x_plus_y);
    printf("Enter the value of x-y");
    scanf("%1f",&x_minus_y);

    x=(x_plus_y+x_minus_y)/2;
    y=(x_plus_y-x_minus_y)/2;

   printf(" x = %.21f, y = %.21f\n" ,x,y);
   return 0;
}*/
#include<stdio.h>
int main(){
    double x,y,x_plus_y,x_minus_y;
    printf("Enter the value of x+y");
    scanf("%lf",&x_plus_y);
    printf("Enter the value of x-y");
    scanf("%lf",&x_minus_y);

    x=(x_plus_y+x_minus_y)/2;
    y=(x_plus_y-x_minus_y)/2;

    printf("%.lf %.lf\n",x,y);

    return 0;

}


/*#include<stdio.h>
int main(){
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("Enter the value a1");
    scanf("%lf",&a1);
    printf("Enter the value a2");
    scanf("%lf",&a2);
    printf("Enter the value b1");
    scanf("%lf",&b1);
    printf("Enter the value of b2");
    scanf("%lf",&b2);
    printf("Enter the value of c1");
    scanf("%lf",&c1);
    printf("Enter the value of c2");
    scanf("%lf",&c2);


    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-c2*c1)/(a1*b2-a2*b1);

    printf("%0.lf,%0.lf",x,y);

    return 0;


}*/





