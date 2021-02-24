/*Задача 2. *argv[ ] от горния пример е указател към низове, пренапишете
горния код като работите с указателите. Тъй като argv е указател към началото
на масив от низове, увеличаването му с 1 (++argv) ще го насочи към argv[1].
Всяко следващо увеличаване премества указателя на следващия аргумент. */
#include <stdio.h>
char *month_name(int n){
  
    int  *ip = &n;
    static char* name []={
    "illegal month","January","February","March","April","May","June","Jully",
    "August","September","October","November","December"
};
  if(n<1||n>12){
        return name[0];
    }
 
    return name[n];
}
int main(int argc, char **argv){
    int x=0;
    printf("Please enter a number of month \n");
    scanf("%d",&x);
  char*a=month_name(x);
  printf("%s\n",a);
return 0;
}