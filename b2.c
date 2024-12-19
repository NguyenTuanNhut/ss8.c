#include<stdio.h>
int main(){
   
    int arr[5]={1,2,3,4,5};
    int flag,check;
    printf("nhap phan tu muon tim");
    scanf("%d",&check);
    flag=1;
    for(int i=0;i<5;i++){
           if(check==arr[i]){
            printf("vi tri phan tu trong mang la:%d",i);
            flag=0;
            break;
           }
    }
    if(flag){
        printf("phan tu khong ton tai trong mang");
    }
     return 0;
}
