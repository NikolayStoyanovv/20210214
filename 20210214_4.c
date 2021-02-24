/*Задача 4.
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf. */
#include <stdio.h>
int main(int argc, char *argv[]){
        int a=132;
        int*p1=&a;
        printf("The value of p1:%d and the address of p1:%p\n",*p1,p1);

return 0;
}