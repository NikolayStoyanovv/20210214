/*13.Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/
#include<stdio.h>
int main(){
    int count=0;
    char *p=NULL;
    char arr[]="The string!";
    p=arr;
    for(int i=0;*p!='\0';i++){
        count++;
        p++;
    }
    printf("The length of the string: %s is: %d\n",arr,count);
    return 0;
}