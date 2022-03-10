#include <stdio.h>
#include <string.h>

//ahaha
int main(){
    char a[101],s[101];
    int i,len,mid,next,top;
    gets(a);
    len=strlen(a);
    mid=len/2-1;

    top=0;
    for(i=0;i<=mid;i++){
        s[++top]=a[i];
    }
    if(len%2==0){
        next=mid+1;
    }else {
        next=mid+2;
    }
    for(i=next;i<=len-1;i++){//next=3 len=4, next=4 len=4
        if (a[i]!=s[top]) //a[3]=h s[2]=h, a[4]=a s[1]=a都一樣不跑if
        {
            break;
        }
        top--; //top=1, top=0
        
    }
    if(top==0){
        printf("YES");
    }else {
        printf("NO");
    }
    
    return 0;
}