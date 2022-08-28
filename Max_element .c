Max element in the array
Problem
Submissions
Leaderboard
Find maximum element from the given array of integers.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109

Output Format

Print the maximum element of the given array.

Sample Input 0

5
-2 -19 8 15 4
Sample Output 0

15


<============= C PROGRAM =============>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n],max=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
