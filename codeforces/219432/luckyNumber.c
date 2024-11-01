#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    bool isLuck = false;

    for (int i = a; i <= b; i++)
    {
        bool lucky = true;
        int num = i;

        while (num != 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }
            num /= 10;
        }

        if (lucky)
        {
            printf("%d ", i);
            isLuck = true;
        }
    }

    if (!isLuck)
    {
        printf("-1");
    }

    return 0;
}
