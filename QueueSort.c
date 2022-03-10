/*#include <stdio.h>

int main(){
    // 此題規則 : 將第1個數刪掉並將第2個數放在末尾，將第3個數刪掉並將第4個數放到末尾，將第5個數刪掉並將第6個數放末尾
    //可把刪掉的數的先後順序來得出新的一串數。

    int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;

    head=1; //用head紀錄佇列的佇列首
    tail=10; //佇列尾要多一位，避免首尾會合

    while (head < tail)
    {
        // 陣列 0 1 2 3 4 5 6 7 8 9 10
        // 佇列 0 6 3 1 7 5 8 9 2 4
    // printf(6) head++=>2、q[tail=10]=3、tail++=>11、head++=>3
    // printf(1) head++=>4、q[tail=11]=7、tail++=>12、head++=>5
    // 最後
    // printf(3) head++=>18、           、tail++=>18、head++=>19
        printf("%d ",q[head]); //印第1的數，還有之後要刪掉的數
        head++; //此動作代表把第1個數刪掉，以此類推
        q[tail]=q[head]; //將第2個數移至末尾
        tail++; //tail要多一位
        head++; //代表現在佇首變第3個數。
    }
    
    
    return 0;
}*/

#include <stdio.h>

struct Queue
{
    int data[100];
    int head,tail;
}q;


int main(int argc, char const *argv[])
{
    int i;

    for(i=1;i<=100;i++){
        q.data[i]=0;
    }

    q.head=1;
    q.tail=1;

    for (i=1; i<=9; i++)
    {
        scanf("%d",&q.data[q.tail]);
        q.tail++;
    }

    while (q.head < q.tail)
    {
        printf("%d ",q.data[q.head]);
        q.head++;
        q.data[q.tail]=q.data[q.head];
        q.tail++;
        q.head++;
    }

    return 0;
}
