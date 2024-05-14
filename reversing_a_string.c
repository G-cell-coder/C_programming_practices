#include<stdio.h>
#include<string.h>

int main(){
    char str1[]= "main";
    //printf("Reverse of string main is:%s", strrev(str1));
    char str[] = "string";
    printf("Original String: %s\n", str);
 
    // reversing string
    printf("Reversed String: %s", strrev(str1));
 
    return 0;
}