#include <stdio.h>

int main(){
    // int A = 10, B = 11, C = 12, D = 13, E = 14, F = 15, G = 16, H = 17,
    // I = 34, J = 18, K = 19, L = 20, M = 21, N = 22, O = 35, P = 23,
    // Q = 24, R = 25, S = 26, T = 27, U = 28, V = 29, W = 32, X = 30,
    // Y = 31, Z = 33;
    int Sum;
    char IDNumber[10] ;

    printf("Enter your ID number :");
    scanf("%s",&IDNumber);
    Sum = (IDNumber[0]/10) + (IDNumber[0]%10)*9;
    printf("Sum = %d",Sum);

    return 0;
}