#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
                 for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
                       sum+=arr[i][j];
                 }
    }
    int j=0;
    for(int i=0;i<sizeof(arr[0])/sizeof(arr[0][0]);i++){
        printf("%d",arr[i][j]);
        j++;
    }
    printf("tong cac ptu trong mang %d",sum);
    return 0;
}