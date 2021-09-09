/*#include<stdio.h>
int main()
{

    double farenhit,celcius;
    printf("Enter the temperature in celcius");
    scanf("%lf",&celcius);
    farenhit=1.8*celcius+32;
    printf("Temperature in farenhit is %lf\n",farenhit);
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int a,b,x,gcd;
    printf("Enter the value of a & b");
    scanf("%d %d",&a,&b);
    if(a<b){
        x=a;
    }else{
    x=b;
    }
    for(; x>=1; x--){
        if(a%x==0 && b%x==0){
            gcd=x;
            break;
        }
    }
    printf("Gcd is %d\n",gcd);
    return 0;


}*/
#include<stdio.h>
int main(){
    int a,b,t,x,gcd;
    scanf("%d %d",&a,&b);
    if(a==0)gcd=a;
    else if(b==0)gcd=b;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("Gcd is %d\n",gcd);
    return 0;

}


