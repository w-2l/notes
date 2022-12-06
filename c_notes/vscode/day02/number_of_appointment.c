#include <stdio.h>

//
int main()
{
    int in_num, out_num = 0, judgment, flag = 0;
    char ch;
    scanf("%d", &in_num);
    int sequence[in_num]; // 动态数组
    int i = 0;
    ch = getchar();
    do
    {
        ch = getchar();
        if (ch >= '0' && ch <= '9')
        {
            if(!flag)
                sequence[i] = (int)(ch - '0');
            else
                for (int j = 0; j < flag; j++)
                    sequence[i] = sequence[i] * 10 + (int)(ch - '0');
            flag++;
        }
        else
        {
            flag = 0;
            i++;
        }
    } while (ch != '\n');
    scanf("%d", &judgment);
    for (i = 0; i < in_num; i++)
        if (judgment == sequence[i])
            out_num++;
    printf("%d", out_num);
    return 0;
}
