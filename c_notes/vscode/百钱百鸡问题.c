#include <stdio.h>
// 百钱百鸡问题
// 5,3，1/3
int main()
{
    int cock, hen, chick;
    for (cock = 0; cock < 21; cock++)
    {
        for (hen = 0; hen < 34; hen++)
        {
            for (chick = 0; chick < 100; chick++)
            {
                if ((100 == chick + hen + cock) && (100 == cock * 5 + hen * 3 + chick / 3) && (0 == chick % 3))
                    printf("cock=%d,hen=%d,chick=%d\n", cock, hen, chick);
            }
        }
    }
}