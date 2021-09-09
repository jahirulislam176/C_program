/*#include<stdio.h>
#include<string.h>
int main(){
char word[80],reverse_word[80];
int i,j,len=0;

scanf("%s",&word);
len=strlen(word);
for(i=0, j=len-1; i<len; i++, j--){
    reverse_word[i]=word[j];
}
reverse_word[i]='\0';
printf("%s\n",reverse_word);

if(0==strcmp(word,reverse_word)){
    printf("%s This is a palindrome\n",word);
}
else{
    printf("%s This Is not a palindrome\n",word);
}

return 0;

}*/
#include<stdio.h>
#include<string.h>
int main(){
char word[100],reverse_word[100];
int i,j,len;
scanf("%s",word);
len=strlen(word);
for(i=0,j=len-1; i<len; j--, i++){
    reverse_word[i]=word[j];

}
reverse_word[i]='\0';
printf("%s\n",reverse_word);

if(0==strcmp(word,reverse_word)){
    printf("%s This is a palindrome\n",word);
}
else{
    printf("%s This word is not a palindrome\n",word);
}

return 0;

}




