// The problem statement can be viewed in this link : https://www.codechef.com/problems/SRTARR?tab=statement

// Solution :

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int size, count=0;
        scanf("%d", &size);
        char str[size];
        scanf("%s", str);
        for(int i=0;i<size;i++){
            if(str[i]=='1' && str[i+1]=='0'){
                count++;
            }  
        }
        printf("%d\n", count);
    }
	return 0;
}

