#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("请输入两个整数: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    
    printf("两个数的和为: %d\n", sum);
    
    return 0;
}