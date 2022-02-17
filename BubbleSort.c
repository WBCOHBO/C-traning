#include <stdio.h>

struct Student
{
    char name[21];
    char Score;
}Bubble[100],Exchange;


int main(){
    int HowManyNumbers,Count,Number;
    
    printf("How many student score do you want to enter : ");
    scanf("%d",&HowManyNumbers);
    printf("Please enter the student name and score : \n");
    for(Count=1;Count<=HowManyNumbers;Count++){
        scanf("%s %d",&Bubble[Count].name,&Bubble[Count].Score);
    }
    for(Count=1;Count<=HowManyNumbers-1;Count++){
        for(Number=1;Number<=HowManyNumbers-1;Number++){
            if(Bubble[Number].Score < Bubble[Number+1].Score){
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