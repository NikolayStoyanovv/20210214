/*Задача 16.
Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm*/
#include<stdio.h>
#include<string.h>
int main(){

    char string1[]="A string to be copied";
    char string2[]="";
    char string3[]="I am a very good in strings coping";
    char string4[]="";

    strcpy(string2,string1);//copy string1 to string 2
    strcpy(string4,string3);//copy string 3 to string 4

    printf("Final copied string : %s\n", string4);
    return 0;
}