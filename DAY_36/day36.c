// The problem statement can be viewed in this link : https://www.codechef.com/problems/TSTROBOT?tab=statement

// Solution :


#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x;
        char s[100001];

        scanf("%d %d %s", &n, &x, s);

        int count = 1;
        int minPos = x;
        int maxPos = x;

        for (int i = 0; s[i]; i++)
        {
            if (s[i] == 'R')
            {
                x++;
            }
            else if (s[i] == 'L')
            {
                x--;
            }

            if (x < minPos)
            {
                count++;
                minPos = x;
            }
            else if (x > maxPos)
            {
                count++;
                maxPos = x;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
