#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str;
    char buf[100];
    printf("Enter the String : ");
    gets(buf);
    str = (char*) malloc(strlen(buf) + 1);
    if (str == NULL){ 
        printf(" Error : out of memory … \n");
        return ;
    }
    strcpy(str,buf);
    printf("\n\n %s\n\n",str);
    free(str);
    free(buf);    
    return 0;
}

