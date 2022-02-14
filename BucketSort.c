#include <stdio.h>

int main(){
    int Bucket[1001],count,PrintNum,InputNum,HowManyNum;

    for(count=0;count<=1001;count++){
        Bucket[count]=0;
    }
    printf("How many numbers would you like to enter : ");
    scanf("%d",&HowManyNum);
    printf("Type the numbers : ");
    for(count=1;count<=HowManyNum;count++){
        scanf("%d",&InputNum);
        Bucket[InputNum]++;
    }
    printf("Sort result from high to low :");
    for(count=1000;count>=0;count--){
        for(PrintNum=1;PrintNum<=Bucket[count];PrintNum++){
            printf("%d ",count);
        }
    }

    return 0;
}