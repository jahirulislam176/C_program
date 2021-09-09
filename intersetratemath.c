/*#include<stdio.h>
int main(){
double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount;

printf("Enter the loan_amount");
scanf("%lf",&loan_amount);

printf("Enter the interest_rate");
scanf("%lf",&interest_rate);

printf("Enter the number of years");
scanf("%lf",&number_of_years);

total_amount=loan_amount+loan_amount*interest_rate*number_of_years/100.00;

monthly_amount=total_amount/(number_of_years*12);

printf("Total amount:%0.2lf\n",total_amount);
printf("Monthly amount:%0.2lf\n",monthly_amount);
return 0;


}
*/
/*#include<stdio.h>
int main()
{
    int n,sum;

    printf("Enter the last digit of Math");
    scanf("%d",&n);

    sum=(n*(n+1))/2;

    printf("result is %d",sum);

}
*/

#include<stdio.h>
int main(){
int sum,n,i;

printf("Enter the digit of n");
scanf("%d",&n);

for(i=0, sum=0; i<=n; i++){
    sum=sum+i;
}
printf("The result is %d",sum);
return 0;
}










