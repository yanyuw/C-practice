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
    for(int i = 100; i <= 200; i++){
        if(isPrime(i)){
            int tmp = i, result[100],count = 0;
            while(tmp / 6){
                result[count] = tmp % 6;
                count++;
                tmp /= 6;
            }
            result[count] = tmp % 6;
            printf("素数%d的6进制为", i);
            for(int j = count; j >= 0; j--){
                printf("%d", result[j]);
            }
            printf("\n");
        }
    }
    return 0;
}