/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[10][10][10];
    int sum=0,avg=0;
    int *p=NULL;
    for (int i = 0; i <10; i++) {    
        for (int j = 0; j < 10; j++) {
            for(int k=0;k<10;k++){
                arr[i][j][k] = (rand() % 20) + 50;
                p=&arr[i][j][k];
                sum+=*p;
            }
       
    }
}
avg=sum/100;
printf("The average of the elements is: %d\n",avg);
    return 0;
}