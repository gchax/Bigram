#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int a = 1, num[9999] = {}, ss = 0, sn = 0, ns = 0, nn = 0;

    printf("Input 1 or 0, input others to stop input.\n");
    for (int i = 0;i < a;i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == 0 || num[i] == 1) a++;
    }

    for (int i = 0;i < a;i++)
    {
        if (num[i] == 0 && num[i + 1] == 0) ss++;
        if (num[i] == 0 && num[i + 1] == 1) sn++;
        if (num[i] == 1 && num[i + 1] == 0) ns++;
        if (num[i] == 1 && num[i + 1] == 1) nn++;
    }

    printf("\nthere are %d of 00\nthere are %d of 01\nthere are %d of 10\nthere are %d of 11", ss, sn, ns, nn);

    return 0;
}