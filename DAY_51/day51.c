// The problem statement can be viewed in this link : https://www.codechef.com/problems/CRDGAME?tab=statement

// Solution : 

#include <stdio.h>

int main(){                                                                                 
    int t;
    scanf("%d", &t);
    while(t--){
        int rounds, counta=0, countb=0;
        scanf("%d", &rounds);
        for(int i=0;i<rounds;i++){
            int a, b, fa=0, fb=0;
            scanf("%d%d", &a, &b);
            
            while(a>0){
                fa = fa + a%10;
                a/=10;
            }
        
            while(b>0){
                fb = fb + b%10;
                b/=10;
            }
            
            
            if(fa>fb){
                counta++;
            }if(fa<fb){
                countb++;
            }if(fa==fb){
                counta++;
                countb++;
            }
        }
        if(counta>countb){
            printf("%d %d\n", 0, counta);
        }else if(counta<countb){
            printf("%d %d\n", 1, countb);
        }else{
            printf("%d %d\n", 2, counta);
        }
    }
        return 0;
}

