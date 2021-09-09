#include<stdio.h>
int main(){
char letter;
printf("Enter any letter");
scanf("%c",&letter);
if(letter>='a' && letter<='z'){
    printf("%c The letter lowercase",letter);
}
else if(letter>='A' && letter<='Z'){
    printf("%c The letter is Uppercase",letter);
}
return 0;
}
