/*
#include<stdio.h>
int main(){
int i,j;
for(i=10; i>=0; i--){
    //printf("c",i);
    for(j=0; j<=i; j++){
printf("c",j);

}

printf("\n");
}
for(i=0; i<10; i++){
    //printf("c",i);
    for(j=0; j<=i; j++){
printf("c",j);

}

printf("\n");
}
#include<stdio.h>
int main(){
    int i,space,rows,k=0;
    for(i=1; i<=10; i++,k=0){
        for(space=1; space<=10-1; space++){
           printf(" ");

        }
        while(k!=2*i-1){
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;

}

#include<stdio.h>
int main(){
int i,space,k=0;
for(i=1; i<=10; i++,k=0){
    for(space=1; space<=10-1; space++){
        printf(" ");
    }
     while(k!=2*i-1){
    printf("* ");
    k++;

}
printf("\n");

}
return 0;
}

solved this problem

12345
1234
123
12
1
1
12
123
1234
12345
Try to understand the code

#include<stdio.h>
int main(){
int i,space,rows,k=0,count=0,count1=0;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=1; i<=rows; i++){
    for(space=1; space<=rows-i; space++){
        printf(" ");
        count++;
    }
    while(k !=2*i-1){
        if(count<=rows-1){
            printf("%d ",i+k);
            count++;
        }
         else{
        count1++;
        printf("%d ",(i+k-2*count1));

    }
    k++;
    }
   count1=count=k=0;
printf("\n");

}
return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    for(i=10; i>=0; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

inverted full pyramid of *

#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows; i>=1; i--)
    {
        for(space=0; space<rows-i; space++)
            printf(" ");
        for(j=i; j<=2*i-1; j++)
            printf("* ");
        for(j=0; j<i-1; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}

pascals Triangle

#include<stdio.h>
int main()
{
    printf("Enter the number of Rows:");
    scanf("%d",&rows);
    for(i=0; i<rows; i++)
    {
        for(space=1; space<=rows-i; space++)
            printf(" ");
        for(j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                coef=1;
            else
                coef=coef*(i-j*1)/j;
            printf("%4d",coef);
        }
        printf("\n");

    }
    return 0;

}

Floyds Triangle

#include<stdio.h>
int main()
{
    int rows,i,j,number=1;
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; i++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;

}
//Matrix adding

#include<stdio.h>
int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of rows(between 1 and 100):");
    scanf("%d",&r);
    printf("Enter the number of columns (between 1 and 100):");
    scanf("%d ",&c);

    printf("\n Enter elements of 1st matrix");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Enter the Elements 2nd matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
//adding two matrices
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
//printing the result
    printf("\n Sum of two matrices: \n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("%d ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }

        }
    return 0;
}

#include<stdio.h>
int main()
{

    char input,alphabet;
    int i,j;
    printf("Enter an uppercase character");
    scanf("%c",&input);
    for(i=1; i<=(input-'A'+1); )
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",alphabet);
        }
        alphabet++;
        printf("\n");
    }
    return 0;

}

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;

    printf("Enter the row of Matrix");
    scanf("%d",&r);
    printf("Enter the number of column of the matrix");
    scanf("%d",&c);

    printf("\n 1st Enter the value",i+1,j+1);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter the 2nd Matrix",i+1,j+1);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
//Adding two Matrix

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

//print this value;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;

}

#include<stdio.h>
int main(){
int i,space,rows,k=0,count=0,count1=0;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=1; i<=rows; i++){
    for(space=1; space<=rows-i; space++){
        printf(" ");
        count++;
    }
    while(k !=2*i-1){
        if(count<=rows-1){
            printf("%d ",i+k);
            count++;
        }
         else{
        count1++;
        printf("%d ",(i+k-2*count1));

    }
    k++;
    }
   count1=count=k=0;
printf("\n");

}
return 0;
}
#include<stdio.h>
int main(){
int i,j;
for(i=10; i>=0; i--){
    //printf("c",i);
    for(j=0; j<=i; j++){
printf("c",j);

}

printf("\n");
}
for(i=0; i<10; i++){
    //printf("c",i);
    for(j=0; j<=i; j++){
printf("c",j);

}

printf("\n");
}

return 0;
}
}*/















