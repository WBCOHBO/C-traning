#include <stdio.h>
int NumArray[100],HowManyNum;

void QuickSort(int left, int right){
    int i,j,swap,temp;
    if(left>right){
        return;
    }
    temp=NumArray[left];//在main的QuickSort呼叫把left定1，right=HowManyNum.
    i=left;
    j=right;
    while (i!=j)
    {
        //i=1 != j=10
        //i=4 != j=8
        //i=5 != j=7
        //i=6 == j=6 結束while
        while (NumArray[j]>=temp && i<j)//右往左找。6 1 2 7 9 3 4 5 10 8
        {
            j--; 
            //NumArry[10] = 8 >= temp(NumArray[1]=6)。j--
            //NumArry[9] = 10 >= temp(NumArray[1]=6)。j--
            //NumArry[8] = 5 < temp(NumArray[1]=6)。結束往下執行

            //NumArry[7] = 4 < temp(NumArray[1]=6)。結束往下執行

            //NumArry[6] = 3 < temp(NumArray[1]=6)。結束往下執行
        }
        while (NumArray[i]<=temp && i<j)
        {
            i++;
            //NumArry[1] = 6 <= temp(NumArray[1]=6)。i++
            //NumArry[2] = 1 <= temp(NumArray[1]=6)。i++
            //NumArry[3] = 2 <= temp(NumArray[1]=6)。i++
            //NumArry[4] = 7 > temp(NumArray[1]=6)。結束往下執行

            //NumArry[5] = 9 > temp(NumArray[1]=6)。結束往下執行

            //NumArry[6] = 3 <= temp(NumArray[1]=6)。i=6 == j=6。跑回第一個while。
        }
        if(i<j){
            //NumArray[i=4]= 7, NumArray[j=8]=5 => 6 1 2 "5" 9 3 4 "7" 10 8
            //NumArray[i=5]= 9, NumArray[j=7]=4 => 6 1 2 "5" "4" 3 "9" 7 10 8
            swap=NumArray[i];
            NumArray[i]=NumArray[j];
            NumArray[j]=swap;
        }
        
    }
    NumArray[left]=NumArray[i]; //NumArray[left=1](Num 6) = NumArray[i=6](Num 3) => "3" 1 2 5 4 3 9 7 10 8 => NumArray[left=1](Num 3)
    NumArray[i]=temp;           //NumArray[i=6], temp = 6 => 3 1 2 5 4 "6" 9 7 10 8
    //第一輪排序完 : 3 1 2 5 4 6 9 7 10 8

    QuickSort(left,i-1); //left = 1, i-1 = [i=6-1=5]=5
    QuickSort(i+1,right); //right會自行判斷哪個陣列沒排序過。
    
}

int main(){
    int i,j,t;

    scanf("%d",&HowManyNum);
    for(i=1;i<=HowManyNum;i++){
        scanf("%d",&NumArray[i]);
    }

    QuickSort(1,HowManyNum);

    for(i=1;i<=HowManyNum;i++){
        printf("%d ",NumArray[i]);
    }

    return 0;
}