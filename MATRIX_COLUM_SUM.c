Matrix column sum
Problem
Submissions
Leaderboard
Given a matrix of size N x M, print column-wise sum, separated by a newline.

Input Format

The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print column-wise sum of the matrix, separated by newline.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

24
7
  
<===================== C PROGRAM   ==========================>


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
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum+=mat[j][i];
        }
        printf("%d\n",sum);
    }
    return 0;
}
