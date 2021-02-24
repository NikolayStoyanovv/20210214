/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int cmpstringp(const void *p1, const void *p2){
        
    return strcmp(*(const char **) p1, *(const char **) p2);
}

int main(int argc, char *argv[]){
           if (argc < 2){
               fprintf(stderr, "Usage: %s <string>...\n", argv[0]);
               exit(EXIT_FAILURE);
           }

           qsort(&argv[1], argc - 1, sizeof(char *), cmpstringp);

           for(int j = 1; j < argc; j++)
               puts(argv[j]);
           exit(EXIT_SUCCESS);
       }