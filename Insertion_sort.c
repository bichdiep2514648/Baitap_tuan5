#include<stdio.h>
int main(){
    int j,i;
    int A[13]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    for (j=2;j<14;j++){
        i=j-1;
       while(i>0){
        if(A[i]<A[i-1]){
        int tempt = A[i];
        A[i]=A[i-1];
        A[i-1]=tempt;}
         i--;
       }
       for (int k=0;k<13;k++){
        printf("%d ",A[k]);
    }
    printf("\n");
    }
    return 0;
}