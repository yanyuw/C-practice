//输入n个正整数，求出这n数所有公约数。（n个数由键盘输入，要求4个以内均可测）例如输入6,9回车之后输出显示为，“6,9这三个数的公约数为1,3”例如输入6,18,24回车之后输出显示为，“6,18,24这三个数的公约数为1,2,3,6”而如果输入五个则报错，显示“最多只可以输入4个数”

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n > 4){
        printf("最多五个");
        return 0;
    }
    int a[5];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        printf("%d",a[i]);
        if(i != n-1){
            printf(",");
        }
    }
    printf("的公约数为");
    int count = 0;
    for(int i = 1; i <= a[0]; i++){
        if(a[0] % i == 0){
            int flag = 1;

            for(int j = 1; j < n; j++){
                if(a[j] % i != 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                if(count != 0){
                    printf(",");
                }
                count++;
                printf("%d",i);

            }
        }
    }
    
}