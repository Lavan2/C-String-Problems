#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int l;
        printf("Find the length of a string : \n");
        printf("--------------------------------- \n");
        printf("Input of the string :");
        fgets(str, sizeof str, stdin);
        l=strlen(str);
        printf("The characters of the string in reverse order : \n");
        for(str[l]='\0';l>=0;l--){
        printf("%c ", str[l]);
        }
    printf("\n");
    return 0;
}

OUTPUT:
Find the length of a string : 
---------------------------------
Input of the string :coding
The characters of the string in reverse order :
 g n i d o c
