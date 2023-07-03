// The problem statement can be viewed in this link : https://www.codechef.com/problems/CHEFSTUD?tab=statement

// Solution :

#include<stdio.h>

int main(void){
long long t,n,sum,i;
scanf("%d",&t);
while(t--){
    char a[100000];
    sum=0;
    scanf("%s",a);
    for(i=0;i<strlen(a)-1;i++){
            if(a[i]=='<' && a[i+1]=='>'){
                sum++;
            }
        }printf("%lld\n",sum);
    }
return 0;    
}
