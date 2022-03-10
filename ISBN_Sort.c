#include <stdio.h>

// int main(){
//     int ISBN[1001],count,HowManyNum,InputNum,PrintNum,TotalNum[1001];

//     for(count=0;count<=1001;count++){
//         ISBN[count]=0;
//         TotalNum[count]=0;
//     }
//     printf("How many number : ");
//     scanf("%d",&HowManyNum);
//     printf("Type the numbers : ");
//     for(count=1;count<=HowManyNum;count++){
//         scanf("%d",&InputNum);
//         ISBN[InputNum]=1;   //當20出現兩次，ISBN[20]還是等於1，因為沒有做++。
//     }
//     printf("Sort result from low to high : \n");
//     for(count=0;count<=1000;count++){
//         if(ISBN[count]==1){
//             printf("%d ",count);    //把ISBN[count]有等於1的印出來。
//         }
//     }

//     return 0;
// }

int main(){
    int ISBN[1001],count,HowManyNum,Num,temp;
    for(count=1;count<=1001;count++){
        ISBN[count]=0;
    }
    printf("How many number :");
    scanf("%d",&HowManyNum);
    for(count=1;count<=HowManyNum;count++){
        scanf("%d",&ISBN[count]);
    }
    for(count=1;count<=HowManyNum-1;count++){
        for(Num=1;Num<=HowManyNum-1;Num++){
            if(ISBN[Num]>ISBN[Num+1]){
                temp=ISBN[Num];
                ISBN[Num]=ISBN[Num+1];
                ISBN[Num+1]=temp;
            }
        }
    }
    printf("Sort result from high to low : %d ",ISBN[1]);
    for(count=2;count<=HowManyNum;count++){
        if(ISBN[count] != ISBN[count-1]){
            printf("%d ",ISBN[count]);
        }
    }


    return 0;
}