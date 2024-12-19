#include<stdio.h>
int main(){
    int n,sum;
    printf("nhap n");
    scanf("%d",&n);
    if(n<2){
        return 1;
    }
    int arr[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // in
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
