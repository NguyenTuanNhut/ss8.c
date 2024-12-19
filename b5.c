#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum;
    sum=0;
    for(int i=0;i<3;i=i+(3-1)){
        for(int j=0;j<3;j++){
          sum+=arr[i][j];
        }
    }
    //tinh hang doc
     for(int j=0;j<3;j=j+(3-1)){
        for(int i=1;i<3-1;i++){
          sum+=arr[i][j];
        }
    }
    printf("tong %d",sum);
    return 0;
}