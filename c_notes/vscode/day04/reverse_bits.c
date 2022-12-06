#include <stdio.h>
#define SIZE 32
// 浪费空间 
unsigned long reverse_bits(unsigned long value)
{
    // 8个字节 ~ ^ & | << >>
    // 定义一个容量为32的数组
    unsigned long bits[SIZE] = {0}; 
    // 逆序二进制存放
    for(int i = 0; value != 0; i++)
    {
        bits[i] = value % 2;
        value /= 2;
    }
    // 用value来存放二进制转为十进制之后的值
    value = 0;
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE - i - 1; j++)
            bits[i] = bits[i] * 2;
        value += bits[i];
    }
    return value;
}
unsigned long reverse_bit(unsigned int value)
{
    unsigned long answer = 0;
    unsigned int i;
    // << 运算符是在16个字节的基础上进行的移位
    for(i = 1; i ; i <<= 1)
    {
        // 通过value右移，判断value最后一位，即value&1的值，然后一位一位的存入answer中
        answer <<= 1;
        if(value&1)     
            answer |= 1;
        value >>= 1;
    }
    return answer;
}
int main()
{
    unsigned long value;
    printf("Enter number: ");
    scanf("%lu",&value);
    printf("%lu\n",value); 
    printf("%lu\n",reverse_bits(value));
    printf("%lu\n",reverse_bit(value));
    return 0;
}
