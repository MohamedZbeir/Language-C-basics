#include <stdio.h>

int main(){

    // basics data types  : int : %d or %i - float : %f - double : %lf - char : %c - void

    int var1 = 1; // 2 byte - 4 byte -> 1 -1 
    printf("var1 :  %d \n" , var1);
    float var2 = 2.5 ; // 4 byte -> 1 -1  1.5
    printf("var2 : %.2f \n" , var2);
    double var3 = 2.5; // 8 byte -> 1 -1 1.5
    printf("var3 :  %lf \n",var3);
    char var4 = 'd'; // all characters but just 1 
    printf("var4 : %c \n",var4);
    // void // 0 byte

    printf("size of int type : %i byte \n" , sizeof(var1));
    printf("size of float type : %f byte \n" , sizeof(var2));
    printf("size of double type : %lf byte \n" , sizeof(var3));
    printf("size of char type : %i byte \n" , sizeof(var4));

    short int var5 = 1;
    printf("size of short int type : %i byte \n",sizeof(var5)); // 2 byte
    long int var6 = 1;
    printf("size of long type : %i byte \n",sizeof(var6)); // 4 byte
    long long int var7 = 1;
    printf("size of long long type : %i byte \n",sizeof(var7)); // 8 byte
    long double var8 = 1;
    printf("size of long double type : %lf byte",sizeof(var8)); // 8 byte

    return 0;
}