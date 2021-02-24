/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/
#include<stdio.h>
int main(){
    int a=5;
    int*p=&a;
    printf("The address of a is:%p\n",p);
    return 0;
}