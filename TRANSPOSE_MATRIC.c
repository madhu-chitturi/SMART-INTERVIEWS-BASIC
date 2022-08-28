/*Transpose matrix
Problem
Submissions
Leaderboard
Given a matrix of size N x M, print transpose of the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-109 <= ar[i] <= 109

Output Format

Print the transposed of the given matrix.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

5 19
-1 8 */

<=========== c program  =================>


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    scanf("%d%d",&n,&m);
    int m1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",m1[j][i]);
        }
        printf("\n");
    }
    return 0;
}
