/**/
#include<stdio.h>
int main(){
int x,y;
char c;
printf("please Enter the initial position:");
scanf(" %d %d",&x,&y);
while(1){
    scanf("%c",&c);
    if(c=='s'){
        break;
    }
    else if(c=='u'){
        x--;
    }
    else if(c=='D'){
        x++;
    }
    else if(c=='L'){
        y--;
    }

}
printf("Final Position of the robot is:%d\n",x,y);
return 0;
}


