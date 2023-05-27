// The problem statement can be viewed in this link : https://www.codechef.com/problems/PETSTORE

// Solution :

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int size, array[100001]={0}, temp=0, largest=0, result, flag=0;
        scanf("%d", &size);
        if(size%2!=0){
            flag++;
        }
        for(int i=0;i<size;i++){
            scanf("%d_", &temp);
            array[temp]++;
            largest = (temp>largest)? temp : largest;
        }
        for(int j=0;j<=largest;j++){
            if(array[j]%2!=0){
                
                flag++;
            }else{
                continue;
            }
        }
        result = (flag==0)? printf("YES\n") : printf("NO\n");
    }
    
	return 0;
}
