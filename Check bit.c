                                                                Check bit                                                             
                                                                                                                
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int bit(int n ,int i){
    if(((n>>i)&1)==1){
        return 1;
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d%d",&n,&i);
    int a=bit(n,i);
    if(a==1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
                                                                                                                                    
               
                                                                
