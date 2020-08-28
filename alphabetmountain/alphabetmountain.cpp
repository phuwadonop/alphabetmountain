#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int frontspace, n;
    char text[100];
    scanf("%[^\n]%n", &text, &n);
    frontspace = n - 1;
    for (int row = 0;row < n;row++) {
        for (int space = 0;space < frontspace - row;space++) {
            printf(" ");
        }
        for (int text1 = row;text1 >= 0;text1--) {
            printf("%c", text[text1]);
        }
        for (int num2 = 1;num2 <= row;num2++) {
            printf("%c", text[num2]);
        }
        if (row != n)printf("\n");
    }
 }
