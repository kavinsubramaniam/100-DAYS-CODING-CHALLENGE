// The problem can be viewed in the following link:https://www.codechef.com/problems/COMPRESSVD

// Solution:

#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
	    int no_frames, count=0;
	    scanf("%d", &no_frames);
	    int size[no_frames];
	    for(int i=0;i<no_frames;i++){
    	        scanf("%d", &size[i]);
    	    }
	    if(no_frames==1){
	        count = 1;
	    }
	    else
	    {
	        count=1;
	        int j=1;
    	    for(int k=0;k<(no_frames-1);k++)
    	    {
	            if(size[k]!=size[j])
	            {
	                count++;
	            }
    	        j++;
    	    }
    	    
	    }
	    printf("%d\n", count);
	    
	}
	return 0;
}
