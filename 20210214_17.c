/*Задача 17. Направете същото, както в задача 16., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
*/
#include <stdio.h>
#include <string.h>

int main () {
    char string1[50];
    char string2[]="";

    char string3[50];
    char string4[]="";

    strcpy(string1,"A string to be copied");
    strcpy(string3,"I am a very good in strings coping");
    puts(string1);

    memset(string2,'0',sizeof(string2));
    puts(string2);

    strcpy(string2,string1);
    puts(string2);
   
    memset(string4,'0',sizeof(string3));
    puts(string4);

    strcpy(string4,string3);
    puts(string4);
    
    
   return(0);
}