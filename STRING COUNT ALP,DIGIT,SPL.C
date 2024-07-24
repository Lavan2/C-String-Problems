#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define str_size 100
int main(){
    char str[str_size];
    int alp,digits,spl,i;
    alp = digits = spl = i = 0;
    printf("Count the total number of alphabets,digits,special characters in a string :\n");
    printf("---------------------------------\n");
    printf("Input of the string:");
    fgets(str, sizeof str, stdin);
    while((str[i]) !='\0'){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            alp++;
        } else if (str[i] >= '0' && str[i] <= '9'){
            digits++;
        } else {
            spl++;
        }
        i++;
    }
    printf("Number of alphabets in a string: %d\n", alp);
    printf("Number of digitss in a string: %d\n", digits);
    printf("Number of special characters in a string:%d\n\n",spl);
    return 0;
}

//OUTPUT:
Count the total number of alphabets,digits,special characters in a string :
---------------------------------
Input of the string:c programming@51
Number of alphabets in a string: 12
Number of digitss in a string: 2
Number of special characters in a string:3
