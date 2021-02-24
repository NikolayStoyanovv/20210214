/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"*/
#include<stdio.h>

void copy_string(char*, char*);

int main()
{   char string1[]=" A string to be cpy";
    char string3[]="I am not very good";
    char str1[100], str4[100];    
    printf("Enter String 1:\n");    
    fgets(str1,100,stdin);    
    copy_string(str4, str1);    
    printf("String 4 is: %s\n",str4);    
    return 0;
}

void copy_string(char *str4, char *str1)
{
    while(*str1)
    {
        *str4 = *str1;        
        str1++;        
        str4++;
    }    
    *str4 = '\0';
}