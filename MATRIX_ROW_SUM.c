Matrix Row Sum
Problem
Submissions
Leaderboard
Given a matrix of size N x M, print row-wise sum, separated by a newline.
Note: Try to solve this without declaring/storing the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print row-wise sum of the matrix, separated by a newline.

Sample Input 0

2 3
5 -1 3
19 8 -5
Sample Output 0

7
22
  
<======================  C PROGRAM   ====================>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
           sum+=mat[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
