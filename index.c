#include <stdio.h>
void main()
{
    int i, j, k;
    int cnt = 0;
    int knt = 0;
    for (int i = 0; i <= 4; i++)
    {
        cnt = 0;
        for (int j = 4; j > i; j--)
        {
            cnt++;
            printf("%d", cnt);
        }
        for (int f = 0; f <= i * 2; f++)
        {
            if (f == 0 && i==0)
            {
                printf(" ");
            }
            printf("%c",32);
        }
        int knt = 4;
        for (int j = 4; j > i; j--)
        {
            knt--;
            printf("%d", knt);
        }

        printf("\n");
    }
}
