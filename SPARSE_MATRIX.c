/*A sparse matrix
Problem
Submissions
Leaderboard
Given a matrix of size N x M, print whether it is a sparse matrix or not.
Note: If a matrix contain 0 in more than half of its cells, then it is called a sparse matrix.

Input Format

First line of input contains N, M - size of the matrix. Its followed by N lines each containing M intergers - elements of the matrix.

Constraints

1 <= N, M <= 100
0 <= ar[i] <= 109

Output Format

Print "Yes" if the given matrix is a sparse matrix, otherwise print "No".

Sample Input 0

2 3
5 0 0
0 8 0
Sample Output 0

Yes */



<============== c program   ==================>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m,count=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                count++;
            }
        }
    }
    int res=n*m;
    int res1=res/2;
    if(count>res1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}
