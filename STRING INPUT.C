#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Accept a string from keyboard : \n");
    printf("--------------------------------- \n");
    printf("Input the string :");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is :%s\n", str);
    return 0;
}

//OUTPUT:
Input the string :Cyber security
The string you entered is :Cyber security
