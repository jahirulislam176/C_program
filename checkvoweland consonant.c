#include<stdio.h>
int main(){
char ch;
printf("Enter any letter");
scanf("%c",&ch);
if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'|| ch=='u'){
    printf("%c The letter is vowel",ch);
}
else if(ch=='A'|| ch=='E' || ch=='I' || ch=='O'|| ch=='U'){
    printf("%c The letter is vowel",ch);
}
else{
    printf(" %c The letter is consonanut",ch);
}
return 0;

}
