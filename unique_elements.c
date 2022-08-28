Print unique elements of array
Problem
Submissions
Leaderboard
Print unique elements of the array in the same order as they appear in the input.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains a single integer N - the size of array and second line contains array elements.

Constraints

1 <= N <= 100
0 <= ar[i] <= 109

Output Format

Print unique elements of the array.

Sample Input 0

7
5 4 10 9 21 4 10
Sample Output 0

5 9 21
  
  
  <========== PYTHON SOLUTION ===========>
  
n=int(input())
a=[]
arr=list(map(int,input().strip().split()))
for i in range(n):
    b=arr.count(arr[i])
    if(b==1):
        a.append(arr[i])
for j in a:
    print(j,end=" ")
