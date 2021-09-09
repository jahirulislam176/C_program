/*#include<stdio.h>
int main(){

char ch='g';

ch='A'+(ch-'a');

printf("%c",ch);

return 0;

}*/

/*#include<stdio.h>
int main()
{

    char country[]= {'B','a','n','g','l','a','d','e','s','h'};
    int i,length;
    printf("%s\n",country);
    length=10;
    for(i=0; i<length; i++)
    {
        if(country[i]>=97 && country[i]<=122)
        {
            country[i]='A'+(country[i]-'a');
        }
    }
    printf("%s\n",country);
    return 0;

}*/

/*#include<stdio.h>
int main(){

    char country[]={'b','a','n','g','l','a','d','e','s','h','\0'};

    int i,length=10;
    for(i=0; i<length; i++){

          if(country[i]>=97 && country[i]<=122){
            country[i]='A'+(country[i]-'a');
          }

    }
    printf("%s",country);



}*/

/*#include<stdio.h>
int string_length(char str[]){
int i,length=0;
for(i=0; str[i]!='\0'; i++){
    length++;
}
return length;

}
int main(){
char country[100];
int length;

while(1==scanf("%s",country)){
    length=string_length(country);
    printf("length:%d\n",length);
}
return 0;

}*/



/*#include<stdio.h>
int main(){

char str1[]="bangla",str2[]="desh",str3[12];
int i,j,length1=6,length2=4;

for(i=0,j=0; i<length1; i++,j++){
    str3[j]=str1[i];
}
for(i=0; i<length2; i++,j++){
    str3[j]=str2[i];
}
str3[j]='\0';
printf("%s\n",str3);
return 0;

}*/

/*#include<stdio.h>
int main(){

char s[1002],word[100];

int i,j,length,is_word_started;
gets(s);
length=strlen(s);
is_word_started=0;
for(i=0,j=0;i<length;i++){
    if(s[i]>='a'&& s[i]<='z'){
        if(is_word_started==0){
                is_word_started=1;
        word[j]='A'+s[i]-'a';
        j++;

        }
        else{
            word[j]=s[i];
            j++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(is_word_started==0){
                is_word_started=1;
            }
            word[j]=s[i];
            j++;
        }
        else if(s[i]>='0'&& s[i]<='9'){
            if(is_word_started==0){
                is_word_started=1;
            }
            word[j]=s[i];
            j++;
        }
        else{
            if(is_word_started==1){
                is_word_started=0;
                word[j]='\0';
                printf("%s\n",word);
                j=0;
            }
        }
    }
    return 0;
}
*/

/*#include<stdio.h>
#include<string.h>
int main()
{

    char s[1002],ch;
    int i,length,is_word_started;

    gets(s);
    length=strlen(s);
    is_word_started=0;

    for(i=0; i<length; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
                ch='A'+s[i]-'a';
                printf("%c",ch);
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        else if((s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'))
        {
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            printf("%c",s[i]);
        }
        else
        {
            if(is_word_started==1)
            {
                is_word_started=0;
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;

}*/
//max and minimum value find
/*#include<stdio.h>
int main(){

int arr[]={10000,260,3,67,80000034,9090900890};

int i,large;
for(i=0; i<6; i++){
    if(large>arr[i]){
        large=arr[0];
        large=arr[i];
    }
}

printf("%d",large);


}*/

int arr[6][10];
int marks[0][1];
it means that first row 2nd column










