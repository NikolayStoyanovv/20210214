/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include<stdio.h>
int main(){
    char *ptr,c,d;
    char  string1[]="Kaka,baba,mama";
    printf("The old string is: %s\n",string1);
    ptr=string1;
    for(;*ptr!='\0';ptr++){
        if(*ptr=='a')
        *ptr='o';
    }

    printf("Final string is:\n");
    puts(string1);

    return 0;
}