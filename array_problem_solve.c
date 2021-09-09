#include<stdio.h>
int main(){

int arr1[100],n,ctr=0;
int i,j,k;
printf("Enter All Unique elements of an array:\n");
printf("----------------------------------");
printf("Enter the number of Elements to be stored in the array:");
scanf("%d",&n);
printf("input %d elements in the array:\n",n);
for(i=0; i<n; i++){
        printf("element-%d: ",i);

    scanf("%d",&arr1[i]);

}
printf("\nThe unique elements found in the array are : \n");
 for(i=0; i<n; i++){
    ctr=0;
    for(j=0; j<i-1; j++){
        if(arr1[i]==arr1[j]){
            ctr++;
        }
    }
    for(k=i+1; k<n; k++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }
        }
        if(ctr==0){
                printf("%d ",arr1[i]);

        }

 }

printf("\n\n");

}
