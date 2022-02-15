#include <stdio.h>
int main(){
    int HowManyNumbers,Bubble[100],Change,Count,Number;
    
    printf("How many number want to enter : ");
    scanf("%d",&HowManyNumbers);
    printf("Please type the numbers : ");
    for(Count=1;Count<=HowManyNumbers;Count++){
        scanf("%d",&Bubble[Count]);
    }
    for(Count=1;Count<=HowManyNumbers-1;Count++){
        for(Number=1;Number<=HowManyNumbers-1;Number++){
            if(Bubble[Number]<Bubble[Number+1]){
                Change=Bubble[Number];
                Bubble[Number]=Bubble[Number+1];
                Bubble[Number+1]=Change;
            }
        }
    }
    printf("Sort result from high to low : ");
    for(Count=1;Count<=HowManyNumbers;Count++){
        printf("%d ",Bubble[Count]);
    }

    return 0;
}