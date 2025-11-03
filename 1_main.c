//202510302124
//2083658933@qq.com
//谢金恩
#include <stdio.h>

int main(){
    int i=0,j=0;
    int size=3;
    int number[size][size];
    printf("请输入矩阵:\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&number[i][j]);
        }
    }
     for(i=0;i<size;i++){
         for(j=0;j<size;j++){
             if(j==size-1){
                 printf("%d\n",number[i][j]);
             }else{
                printf("%d ",number[i][j]);
             }
         }
     }
    return 0;
}
