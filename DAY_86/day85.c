// The problem statement can be viewed in this link : https://www.codechef.com/problems/LONGSEQ?tab=statement

// Solution : 

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        char a[100000];
        scanf("%s",a);
        int zero = 0, one = 0;

        for(int i=0;i<strlen(a);i++){
                if(a[i]=='1'){
                        one++;
                }
                else{
                        zero++;
                }
        }

        if (one  ==1 || zero  == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
