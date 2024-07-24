#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    int l = 0;
    printf("Seperate a individual characters from a string : \n");
    printf("--------------------------------- \n");
    printf("Input of the string :");
    fgets(str, sizeof str, stdin);
    while( str[l] != '\0'){ //Loop to calculate the length of the string
        printf("%c ",str[l]);
        l++; //Loop incrementation
    }
    printf("\n");
    return 0;
}

//OUTPUT:
Seperate a individual characters from a string : 
---------------------------------
Input of the string :STRING
S T R I N G
