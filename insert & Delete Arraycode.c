/*#include<stdio.h>
int main(){
int array[100],c,n,position,value;
printf("Enter the Element Number");
scanf("%d",&n);
printf("Enter All Elements %d\n",n);
for(c=0; c<n; c++)
    scanf("%d",&array[c]);
printf("Enter the position you wish to Insert");
scanf("%d",&position);
printf("Enter the Insert value");
scanf("%d",&value);
for(c=n-1; c>=position-1; c--)
    array[c+1]=array[c];
array[position-1]=value;
printf("Resultant Array is");
for(c=0; c<=n; c++)
    printf("The Result is %d\n",array[c]);
return 0;


#include<stdio.h>
int main(){
int array[100],c,n,value,position;
printf("Enter the Array size");
scanf("%d",&n);
printf("Enter the Array values %d:\n",n);
for(c=0; c<n; c++)
    scanf("%d",&array[c]);
printf("Enter the position which value Delete");
scanf("%d",&position);
if(position>=n+1)
    printf("Deletion Not possible");
else{
    for(c=position-1; c<n-1; c++)
        array[c]=array[c+1];
    printf("Restulatant Array is\n");
    for(c=0; c<n-1; c++)
        printf("%d\n",array[c]);
}

return 0;

}


}*/

