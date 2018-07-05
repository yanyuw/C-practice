//输入自己的学号，学号全为0--9的数字，长度在10以上100以内，具体长度未知，然后输出学号最后6位中的前两位。（要求随机输入都可以得到正确结果）例如输入20120000111100023，输出学号最后6位中的前两位是10

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    for(int i = len-6; i < len-4; i++){
        printf("%c",s[i]);
    }
    return 0;
}