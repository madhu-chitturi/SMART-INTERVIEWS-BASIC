Sum of two matrices
Problem
Submissions
Leaderboard
Given two matrices A and B each of size N x M, print sum of the matrices (A + B)..
Note: Try solving it by declaring only a single matrix.

Input Format

First line of input contains N, M - size of the matrices. Its followed by 2*N lines, each containing M integers - elements of the matrices. First N lines for matrix A and the next N lines for matrix B.

Constraints

1 <= N, M <= 100
-109 <= ar[i] <= 109

Output Format

Print sum of the 2 given matrices (A + B).

Sample Input 0

2 3
5 -1 3
19 8 4
4 5 -6
1 -2 12
Sample Output 0

9 4 -3
20 6 16
  
  
  
<==================  C PROGRAM =======================>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    scanf("%d%d",&n,&m);
    int mat1[n][m],mat2[n][m],sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           sum[i][j]=mat1[i][j]+mat2[i][j];
           printf("%d ",sum[i][j]);
        }
        printf("\n"); 
    }
    
    return 0;
}
