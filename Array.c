/*#include<stdio.h>
int main(){
    int sum=0;
int arr[]={1,2,3,4,5,6,7,8,9};

for(int i=0; i<10; i++){
        sum=sum+arr[i];

    printf("The result is %d\n",sum);
}

}*/

/*#include<stdio.h>
int main(){

 int arr[10]={1,2,3,4,5,6,7,8,9,10};

 int i;
 for(i=9; i>=0; i--){
    printf("The value is %d\n",arr[i]);
 }

return 0;
}*/

//2array change array element

/*#include<stdio.h>
int main(){

int ara[]={10,20,30,40,50,60,70,80,90,100};

int ara2[10],i,j;

for(i=0, j=9; i<10; i++, j--){
    ara2[j]=ara[i];
}
for(i=0; i<10; i++){
    ara[i]=ara2[i];
    printf("The result is %d\n",ara[i]);
}
//for(i=0; i<10; i++){

//}
}
/*swapping */
/*#include<stdio.h>
int main(){
int ara[]={10,20,30,40,50,60,70,80,90,100};

int i,j,temp;

for(i=0, j=9; i<10; i++,j--){
    temp=ara[i];
    ara[i] =ara[j];
    ara[j]=temp;
    printf("%d\n",ara[i]);
}

}*/

/*#include<stdio.h>
int main(){
int ft_marks[]={12,14,25,46,56,78,98,78,56,56,
56,34,14,23,46,67,89,90,100,30};
int st_marks[]={12,35,67,89,89,67,45,23,12,34,56,78,
90,12,34,56,78,90,23,56};
int final_marks[]={34,56,78,98,90,87,23,14,41,
56,76,89,67,12,45,67,67,87,34,67};
double total_marks[20];

for(int i=0; i<20; i++){
    total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
}
for(int i=1; i<=20; i++){
    printf("Roll Number:%d\t Total Marks:%0.01f\n",i,total_marks[i-1]);
}
return 0;
}*/

/*#include<stdio.h>
int main(){
int i,marks,count;
int total_marks[]={1,1,1,1,12,2,3,3,34,4,4,56,6,7,8,8,3,45,3,34};
for(marks=0; marks<=100; marks++){
        count=0;
    for(i=0; i<=20; i++){
        if(total_marks[i]==marks){
            count++;

        }
    }
    printf("The value is %d %d\n",marks,count);
}
return 0;
}*/
/*#include<stdio.h>
int main(){
int i,mark,count;
int arr[]={1,1,2,2,3,3,4,4,5,5,6,6,7,8,9,9,9,9,32,20};
for(mark=0; mark<=33; mark++){
                count=0;
    for(i=0; i<20; i++){
        if(arr[i]==mark){
            count++;
        }
    }
    printf("The number is double %d %d\n",mark,count);
}*/

//}
/*#include<stdio.h>
int main()
{
    int arr[]= {1,1,1,1,1,10,20,30,40,50,60,70,80,80,80,100,100,100,100,100,100,100};
    int i,mark,count;
    for(mark=1; mark<=100; mark++)
    {
        count=0;

        for(i=0; i<=22; i++)
        {
          //count=0;
            if(arr[i]==mark)
            {
                count++;

            }



        }
        printf("The result is %d %d\n",count,mark);


    }


}*/
/*#include<stdio.h>
int main(){
int i,j;
int total_marks[]={6,7,4,6,9,7,6,2,4,3,4,1};
int marks_count[11];

for(i=0; i<11; i++){
        marks_count[i]=0;

}
for(i=0; i<12; i++){
    marks_count[total_marks[i]]++;

    for(j=0; j<=10; j++){
        printf("%d ",marks_count[j]);
    }
    printf("\n");
}
}*/
/*#include<stdio.h>
int main(){
    int i;
    int total_marks[]={12,12,12,12,12,12,12,12,12,12,12,11,13,14,15};
    int marks_count[100];

    for(i=0; i<100; i++){
        marks_count[i]=0;
    }
    for(i=0; i<15; i++){
        marks_count[total_marks[i]]++;
    }
    for(i=10; i<=15; i++){
        printf("Marks: %d count: %d\n",i,marks_count[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int main(){
int i;
int total_marks[]={12,13,14,15,15,15,10,11,20,20};
int marks_count[21];
 for(i=0; i<21; i++){
    marks_count[i]=0;

 }
 for(i=0; i<11; i++){
    marks_count[total_marks[i]]++;
 }
 for(i=10; i<=20; i++){
    printf("Marks:= %d count:= %d\n",i,marks_count[i]);
 }
return 0;
}*/

#include<stdio.h>
int main(){
int i,j;
int total_marks[]={2,2,2,4,6,8,10};
int marks_count[11];

for(i=0; i<11; i++){
    marks_count[i]=0;
}
for(i=0; i<=5; i++){
    marks_count[total_marks[i]]++;
    for(j=0; j<=10; j++){
    printf(" %d",marks_count[j]);
}

printf("\n");
}



}



















