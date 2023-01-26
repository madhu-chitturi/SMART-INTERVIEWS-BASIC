#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,count=0;
    scanf("%lld",&n);
    count+=n/3;
    count+=n/5;
    count-=n/15;
    
    
     printf("%lld",count);
    
    return 0;
}
