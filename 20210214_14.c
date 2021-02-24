/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void easylevelpassletters(int n) 
{   int i,d, *p=NULL;
   
    	 
	printf("Easy level password"
		" (only letters): "); 
	for (i = 0; i < n; i) { 
		d = rand() % 123;
        p=&d; 
		if ((*p >= 65 && *p <= 90) 
			|| *p >= 97) { 
			printf("%c", *p); 
			i++;
            p++; 
		} 
	} 


	
	printf("\n"); 
} 


int main(){ 
	int n = 6; 
   
    easylevelpassletters(n); 

    return 0;
} 