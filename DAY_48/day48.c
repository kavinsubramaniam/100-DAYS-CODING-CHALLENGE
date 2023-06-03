// The problem statement can be viewed in this link : https://www.codechef.com/problems/ADJSUMPAR?tab=statement

// Solution : 

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int binarray[n];
        int i, j, count = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &binarray[i]);
            if (binarray[i] == 1)
                count++;
        }
        if (count % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
