#include <stdio.h>

int main(){
    int Sum,i;
    char IDNumber[10] ;
    char En[26] ={'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};
    char Num[26]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};

    scanf("%s",&IDNumber);
    for(i=0;i<=25;i++){
        if(IDNumber[0]==En[i]){
            IDNumber[0]=Num[i];
            break;
        }
    }
    Sum = (IDNumber[0]/10) + (IDNumber[0]%10)*9;
    for(i=1;i<9;i++){
        Sum=Sum+(IDNumber[i]-'0')*(9-i);
    }
    Sum=Sum+IDNumber[9]-'0';
    if(Sum%10==0){
        printf("real");
    }else{
        printf("fake");
    }

    return 0;
}