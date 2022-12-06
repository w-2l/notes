
#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    int a[n];
    getchar();
    for(int i = 0 ; i<n ; i++)
    {
        a[i]=getchar();
        if(a[i] == ' ')
            i--;
    }
    for(int i = 0 ; i<n ;i++)
        sum+=a[i];
    printf("%d",sum/n);
    return 0;
}