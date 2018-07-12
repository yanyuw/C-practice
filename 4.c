//输入一个大于10的偶数，将其表示为两个素数（质数）的和（所有可能）例如20=3+17，20=7+13

#include <stdio.h>
int isPrime(int x){
    for(int i = 2; i <= x/2; i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    if(n % 2 != 0){
        printf("请输入偶数");
    } else {
        for(int i = 2; i < n/2; i++){
            if(isPrime(i) && isPrime(n-i)){
                printf("%d = %d + %d\n", n, i, n-i);
            }
        }
    }
    return 0;
}