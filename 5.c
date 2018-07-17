//5.求数字的乘积根，统计10000以内其数字乘积根为6的正整数的个数，并将其输出

#include<stdio.h>

int main(){
    
    for(int i = 6; i < 10000; i++){
        int tmp = i, result = 1;
        while(tmp / 10){
            if(tmp % 10){
                result *= tmp % 10;
            }
            tmp /= 10;
        }
        result *= tmp;
        if(result == 6){
            printf("%d ", i);
        }
    }
}