/*
Assending order
#include<stdio.h>
int main(){
int ara1[]={2,3,5,1,7};
int ara2[5],i,minimum,minimum_index,index_2;
for(index_2=0; index_2<5; index_2++){
    minimum=0;
    for(i=0; i<5; i++){
        if(ara1[i]>minimum){
            minimum=ara1[i];
            minimum_index=i;
        }
    }
    ara1[minimum_index]=0;
    ara2[index_2]=minimum;

}
for(i=0; i<5; i++){
    printf("%d\n",ara2[i]);
}
return 0;

Descending order

#include<stdio.h>
int main(){
int ara1[]={1,5,6,7,3};
int ara2[5],minimum,index_2,minimum_index,i;
for(index_2=0; index_2<5; index_2++){
    minimum=0;
    for(i=0; i<5; i++){
        if(ara1[i]>minimum){
            minimum=ara1[i];
            minimum_index=i;
        }
    }
    ara1[minimum_index]=0;
    ara2[index_2]=minimum;
}
for(i=0; i<5; i++){
    printf("%d\n",ara2[i]);
}
return 0;
}

}*/
