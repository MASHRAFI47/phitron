#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool flag = true;
    int element = arr[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == false)
        {
            break;
        }
    }

    if (flag == true)
    {
        printf("Scaler\n");
    }
    else
    {
        printf("Non Scaler\n");
    }
}
