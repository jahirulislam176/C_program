/*#include<stdio.h>
int main(){
    int a,b,c;
    for(a=1; a<=3; a++){
        for(b=1; b<=3; b++){
            for(c=1; c<=3; c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
}*/
/*#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1; a<=3; a++){
        for(b=1; b<=3&&b!=a; b++){
            for(c=1; c<=3&& c!=b&& c!=a; c++){
                printf("%d %d %d\n",a,b,c);
            }
        }
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the a");
    scanf("%d",&a);
    printf("Enter the b");
    scanf("%d",&b);
    printf("Enter the c");
    scanf("%d",&c);
    for(; a<=3; a++){
        for(; b<=3; b++){
            if(b!=a){
                for(; c<=3; c++){
                        if(c!=b&&c!=a){
                    printf("%d %d %d\n",a,b,c);
                        }
                }
            }
        }
    }

}*/
#include<stdio.h>
int main(){
    int a,b,c;
    for(a=1; a<=3; a++){
        for(b=1; b<=3; b++){
            for(c=1; c<=3; c++){
                if(b!=a && c!=a && c!=b){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
}
