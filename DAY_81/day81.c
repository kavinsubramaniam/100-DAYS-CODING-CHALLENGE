// The problem statement can be viewed in this link : https://www.codechef.com/problems/VCS

// Solution : 

#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);
while(t--){
   int size, tt, ti, count0=0, count1=0;
   scanf("%d%d%d", &size, &tt, &ti);
   int arr[100]={0}, num;
   for(int i = 0;i<(tt+ti);i++){
       scanf("%d", &num);
       arr[num-1]++;
   }
   for(int i=0;i<size;i++){
       if(arr[i]==0){
           count0++;
       }
       else if(arr[i]==2){
           count1++;
       }else{
           continue;
       }
     
   }
   printf("%d %d\n", count1, count0);
}
return 0;
}
