// The problem statement can be viewed in this link : https://www.codechef.com/problems/EPANLNK?tab=submissions

// Solution :

#include <stdio.h>

int main(void) {
// your code goes here
int t;
scanf("%d",&t);
while(t--){
   char num[100];
   scanf("%s",num);
   int res;
   if(strlen(num)==1){
       res=(num[0]-48);
   }
   else {
       res=(10*(num[strlen(num)-2]-48))+((num[strlen(num)-1]-48));
   }
   printf("%d\n",res%20);
}
return 0;
}
