#include <stdio.h>

int main(void)
{
    int limit;
    long long total = 0;
    if (scanf("%d", &limit) != 1)
        return 0;
    if (limit < 0)
    {
        printf("NG");
        return 0;
    }
    /* 1から入力値までの整数を順に調べる。 */
    for (long long number = 1; number <= limit; number++)
    {
        /* 3の倍数または5の倍数を除いた値だけを足す。 */
        if (number % 3 != 0 && number % 5 != 0)
            total += number;
    }
    printf("%lld", total);
    return 0;
}
