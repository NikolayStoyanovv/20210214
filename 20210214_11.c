/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/
#include<stdio.h>

int main(){
    int a=5;
    double b=11;
    
    int *p1=NULL;
    double *p2=NULL;
    p1=&a;
    p2=&b;
int arr[3] = { 5, 10, 20 };
int *ptr;
ptr = arr ; //Никой не ни прави забележка!
printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]); // Не пипам масива!
printf("%f\n",(*p1**p2) );//The multiplication between a and b;
}