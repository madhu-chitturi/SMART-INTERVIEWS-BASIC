Reverse array
Problem
Submissions
Leaderboard
Print array in reverse order.
Note: Try solving this using recursion. Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
0 <= ar[i] <= 1018

Output Format

Print the given array in reverse order.

Sample Input 0

5
2 19 8 15 4
Sample Output 0

4 15 8 19 2
  
<============== C PROGRAM =============>


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long n,i;
    scanf("%lld",&n);
    long long arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%lld ",arr[i]);
    }
    return 0;
    
}
