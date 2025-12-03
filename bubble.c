#include<stdio.h>
int main(){
    int a[8];
    printf("please input 8 numbers:");
    for(int i=0;i<8;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<7;i++){
        for(int j=i+1;j<8;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf(" after sorting:");
    for(int i=0;i<8;i++)
        printf(" %d",a[i]);
    return 0;
}