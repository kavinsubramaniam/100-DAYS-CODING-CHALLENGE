// The problem statement can be viewed in this link : https://www.codechef.com/problems/XOR_PAL?tab=ide

// Solution:

#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);
while(t--){
   int size,result=0, count=0;
   scanf("%d", &size);
   char str[size+1];
   scanf("%s", str);
   int reverse=size-1;
   for(int i=0;i<size/2;i++){
       if(str[i]!=str[reverse]){
           count++;
          // printf("%d\t", count);
       }reverse--;
   }
   result= (count>0)? printf("%d\n", (count/2)+(count%2)) :printf("%d\n", 0);
}
return 0;
}
