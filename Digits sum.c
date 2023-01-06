                                                                Digits sum
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long num,rem=0,digi;
    scanf("%lld",&num);
    while(num>0){
    digi=num%10;
    rem=rem+digi;
    num/=10;
    }
    printf("%lld",rem);
    return 0;
}
                                                                
