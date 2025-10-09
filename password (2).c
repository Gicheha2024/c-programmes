/*
Name: Patrick Nyanjui
Reg no:CT101/G/28857/25
Description:Password attempts C program
Date:9/10/2025
*/
#include<stdio.h>
#include<string.h>
int main() {
    char password [20];
    int attempts=0;
    do {
        printf("Enter password:");
        scanf("%s",password);
        attempts ++;
        if(strcmp(password,"1234")!=0)
        {
            printf("Incorrect password.Try again.\n");
        }
    } while(strcmp(password,"1234")!=0);
    printf("Access Granted!\n");
    printf("Total attempts:%d\n",attempts);
    return 0;
}


