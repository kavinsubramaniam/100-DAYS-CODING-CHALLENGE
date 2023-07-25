// The problem statement can be viewed in this link : https://www.codechef.com/problems/BESTBATS?tab=statement

// Solution : 

#include <stdio.h>
int factorial(int n);
int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int array[11];
        int score[101];
        for(int i=0;i<101;i++){
            score[i]=0;
        }
	    for(int i=0;i<11;i++){
	        scanf("%d",&array[i]);
            score[array[i]]++;
	    }
        int product=1;
        int k;
        scanf("%d",&k);
        for(int i=100;i>=0 && k>0;i--){
            if(score[i]==0){
                continue;
            }else{
                if(k-score[i]>=0){
                    k=k-score[i];
                }else{
                   int value=factorial(score[i]);
                   int valu2=factorial(k)*(factorial(score[i]-k));
                   product=product*(value/(valu2));
                   break; 
                }
                 
            }
        }
    printf("%d\n",product);
    }
     
	return 0;
}
int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
          factorial*=i;
    }
    return factorial;
}
