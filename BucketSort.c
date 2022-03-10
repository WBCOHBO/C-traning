#include <stdio.h>

int main(){
    int Bucket[1001],count,PrintNum,InputNum,HowManyNum;

    for(count=0;count<=1001;count++){
        Bucket[count]=0;    //初始化為0
    }
    printf("How many numbers would you like to enter : ");
    scanf("%d",&HowManyNum);
    printf("Type the numbers : ");
    for(count=1;count<=HowManyNum;count++){ //依輸入多少數來跑回圈
        scanf("%d",&InputNum); //把數讀入IntputNum的位址
        Bucket[InputNum]++; //取InputNum的位址的陣列來計數。當t位址放5，Bucket[InputNum]放在陣列5再加1，變成Bucket[5]=1
                            //當t位址放3，Bucket[InputNum]放在陣列3再加1，變成Bucket[3]=1
    printf("Bucket[%d]=%d\n",InputNum,Bucket[InputNum]);
    }
    printf("Sort result from low to high :");
    for(count=0;count<=1000;count++){   //由小到大排序。若要大到小則for(count=10;count>=0;count--)
        for(PrintNum=1;PrintNum<=Bucket[count];PrintNum++){ //出現幾次印幾次。count=0,PrintNum=1,Bucket[0]=0
                                                            //count=1,PrintNum=1,Bucket[1]=0
                                                            //count=2,PrintNum=1,Bucket[2]=1 ->印2
                                                            //count=2,PrintNum=2,Bucket[2]=1
                                                            //count=5,PrintNum=1,Bucket[5]=2 ->印5
                                                            //count=5,PrintNum=2,Bucket[5]=2 ->印5
                                                            //count=5,PrintNum=3,Bucket[5]=2
            printf("%d ",count);
        }
    }

    return 0;
}