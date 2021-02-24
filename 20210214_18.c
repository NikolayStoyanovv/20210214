/*Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm*/
#include <stdio.h>
#include <string.h>

int main () {
    char string1[50];
    char string2[50];

    char string3[50];
    char string4[]="";
    

    strcpy(string1,"A string to be copied");
    strcpy(string3,"I am a very good in strings coping");
    //puts(string1);

    int len = strlen(string1);
    int len2 = strlen(string2);

    char*from=&string1[len];

    for(int i=0;i<len;i++){
        char*to=&string2[i];
        *to--=*from--;
        printf("%c",*to);
    }       printf("\n");
    
    

   return(0);
}