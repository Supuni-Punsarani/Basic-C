#include<stdio.h>

void summean(int n[],int size){
 int i;
 int sum=0;
 for(i=0;i<size;i++){
    sum+=*(&n[i]);
 }
 printf("sum is:%d",sum);
 printf("\nmean is:%.2f",(float)(sum)/size);
}
void main()
{
    int n[]={2,5,7,9,3,6};
    int size=sizeof(n)/sizeof(n[0]);
    summean(n,size);

}
