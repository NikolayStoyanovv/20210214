/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).*/
#include<stdio.h>
int main(){
     int*l,k;//one pointer
    int a=34;
    int*p=&a;
    printf("The result from *p**p is :%d\n",(*p**p));
    
    return 0;
}