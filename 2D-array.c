/*#include<stdio.h>
int main(){

    int marks[4][10]={{16,12,3,4,5,6,7,8,9,10},{16,12,13,14,15,16,17,18,
    19,20},{20,22,23,24,25,26,27,28,29,30},{0,0,0,0,0,0,0,0,0,
    0}};
    int col;
    for(col=1; col<10; col++){
        marks[3][col]=marks[0][col]/4.0+marks[1][col]/4.0+marks[2][col]
        /2.0;
        printf("Roll No: %d Total Marks:%d\n",col+1,marks[3][col]);

    }
    return 0;
}
problem code

#include<stdio.h>
int main(){
    int arr[2][2];
    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
         scanf("%d",&arr[i][j]);

        }
    }
    int col;
    for(col=0; col<2; col++){
        arr[2][col]=arr[0][col]/4.0+arr[1][col]/4.0;
        printf("Roll No: %d Total Marks:%d\n",col+1,arr[2][col]);

    }
return 0;
}

namta code

#include<stdio.h>
int main(){

int namta[10][10];
int row,col;
for(row=0; row<10; row++){
    for(col=0; col<10; col++){
        namta[row][col]=(row+1)*(col+1);
    }
}
for(row=0; row<10; row++){
    for(col=0; col<10; col++){
        printf("%d X %d=%d\n",(row+1),(col+1),namta[row][col]);
    }
    printf("%d\n");
}
return 0;
}
sAArc code

#include<stdio.h>
int main(){
//char saarc[7][100];
char saarc[7][100]={"Bangladesh","Nepal","Pakistan","India",
"Afganistan","Bhutan","Maldives"};

int row;
for(row=0; row<7; row++){
    printf("%s\n",saarc[row]);
}
return 0;

}

#include<stdio.h>
#include<string.h>
int main(){
char saarc[7][100]={"Bangladesh","Nepal","Pakistan","India",
"Afganistan","Bhutan","Maldives"};

int row,col,name_length;
for(row=0; row<7; row++){
    name_length=strlen(saarc[row]);
    for(col=0; col<name_length; col++){
        printf("%c  ",saarc[row][col]);
        //printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
    }
    printf("\n");
}
return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char saarc[7][100]={"Bangladesh","India","Pakistan","Sri-Lanka","Nepal","Bhutan","Maldives"};
    int row,col,name_length;
    for(row=0; row<7; row++){
            name_length=strlen(saarc[row]);
    for(col=0; col<name_length; col++){
        printf("%d,%d=%c,",row,col,saarc[row][col],saarc[row][col]);
    }
    printf("\n");

    }
    return 0;

}


#include <stdio.h>

#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col, sum = 0;

    // Input elements in matrix from user
    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    //Calculate sum of elements of each row of matrix
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }

    //Find sum of elements of each columns of matrix
    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += A[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }

    return 0;
}

#include<stdio.h>
int main(){

int arr[5][5]={{6,4,7,8,9}, {3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};

int sum=0, col,row;

for(row=0; row<5; row++){
        sum=0;
       for(col=0; col<5; col++){

        sum=sum+arr[row][col];

       }

printf("The sum of row %d=%d\n",row+1,sum);

}


for(row=0; row<5; row++){
        sum=0;
       for(col=0; col<5; col++){

        sum=sum+arr[col][row];

       }
       printf("The column sum is %d=%d\n",row+1,sum);
}
return 0;
#define size 3;
}

2D Array copy

#include<stdio.h>
int main(){
int arr[2][2]={{1,2},{3,4}};
int arr2[2][2];

int r,c;

for(r=0; r<2; r++){
    for(c=0; c<2; c++){
        printf("%d ",arr[r][c]);
    }
    printf("\n");
}

printf("\n");

for(r=0; r<2; r++){
    for(c=0; c<2; c++){
        arr2[c][r]=arr[r][c];
    }
}

for(r=0; r<2; r++){
    for(c=0; c<2; c++){
        printf("%d ",arr2[r][c]);
    }
    printf("\n");
}
return 0;
}
*/

