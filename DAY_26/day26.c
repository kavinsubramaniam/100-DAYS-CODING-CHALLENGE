// The problem statement can be viewed in this link : https://www.codechef.com/problems/MISSP

// Solution:

#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);
while(t--){
   int num;
   scanf("%d", &num);
   int types[num];
   for(int i=0;i<num;i++){
       scanf("%d", &types[i]);
   }
   for(int j=0;j<num;j++){
       for(int k=0;k<num;k++){
           if( types[j]==types[k] && j!=k ){
               types[j]=0;
               types[k]=0;
           }
       }
   }
   for(int m=0;m<num;m++){
       if(types[m]!=0){
            printf("%d\n", types[m]);
       }
   }
   
}
return 0;
}
