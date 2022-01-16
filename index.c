#include <stdio.h>
int main(int argc, char const *argv[])
{
    int no = 12345;
    int rev;
    while (no != 0)
    {
        int last = no % 10;
        rev = rev *10 + last;
        no = no / 10;
    }
    printf("%d",rev);
    return 0;
}
