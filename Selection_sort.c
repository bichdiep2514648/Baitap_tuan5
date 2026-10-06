#include<stdio.h>
int main(){
    int i,j;
    int A[13]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    for (i=0;i<12;i++){
        int Min=A[i];
        int index=i;
        for (j=i+1;j<13;j++){
            if(A[j]<Min){
                Min=A[j];
                index=j;
            }
        }
        int tempt=A[index];
        A[index]=A[i];
        A[i]=tempt;
    
    for (int k=0;k<13;k++){
        printf("%d ",A[k]);
    }
    printf("\n");
}
    return 0;

}