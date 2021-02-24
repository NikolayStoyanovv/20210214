/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char*/
#include <stdio.h>
int main(int argc, char **argv){
    int a=1;
    char b='A';
    float c=3.4;
    int*p1=&a;
    char*p2=&b;
    float*p3=&c;
    printf("The value of p1:%d and the address of p1:%p\n",*p1,p1);
    printf("The value of p2:%c and the address of p2:%p\n",*p2,p2);
    printf("The value of p3:%f and the address of p3:%p\n",*p3,p3);
    int i;
    for(i = 1; i < argc; i++)
    printf(" %s ", argv[i]);
    printf("\n");
    return 0;
}