// The problem statement can be viewed in this link : https://www.codechef.com/problems/REMOVECARDS?tab=ide

// Solution :

#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);
while(t--){
   int size, arr[101]={0}, temp=0, max=0;
   scanf("%d", &size);
   for(int i=0;i<size;i++){
       int num;
       scanf("%d", &num);
       arr[num]++;
       if(temp<num){
           temp=num;
       }
   }
   for(int j=0;j<temp+1;j++){
       if(max<arr[j]){
           max=arr[j];
       }
   }
   printf("%d\n", size-max);
}
return 0;
}
