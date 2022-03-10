#include <stdio.h>

struct Student  //定義結構
{
    char name[21];
    char Score;
}Bubble[100],Exchange;  //Bubble[] and Exchange為Student的代理變數


int main(){
    int HowManyNumbers,Count,Number;
    
    printf("How many student score do you want to enter : ");
    scanf("%d",&HowManyNumbers);    //輸入n個數
    printf("Please enter the student name and score : \n");
    for(Count=1;Count<=HowManyNumbers;Count++){
        scanf("%s %d",&Bubble[Count].name,&Bubble[Count].Score); //迴圈讀入n個人名與分數
    }
    for(Count=1;Count<=HowManyNumbers-1;Count++){
        for(Number=1;Number<=HowManyNumbers-1;Number++){
            if(Bubble[Number].Score < Bubble[Number+1].Score){  //從陣列第1個開始依序與下一個做比較，若由大到小排序則須把小排右大排左
                                                                //Bubble[1]與Bubble[2]比，Bubble[2]與Bubble[3]比... ...Bubble[9]與Bubble[10]比，總共比n-1次。    
                Exchange=Bubble[Number];
                Bubble[Number]=Bubble[Number+1];
                Bubble[Number+1]=Exchange;
            }
        }
    }
    printf("Sort result from high to low : \n");
    for(Count=1;Count<=HowManyNumbers;Count++){
        printf("%s %d\n",Bubble[Count].name,Bubble[Count].Score);
    }

    return 0;
}