/*

Column Wise Sum
Send Feedback
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Input Format :
Line 1 : Two integers M and N (separated by space)
Next M lines : ith row elements (separated by space)
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input :
4 2
1 2
3 4
5 6
7 8
Sample Output :
16 20

*/


#include <iostream> 
using namespace std; 

    int main ()
    {
 
     int array[1000][1000];
        int i, j, m, n, sum = 0;
        cin>>m>>n;
      
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j) 
            {
                cin>>array[i][j];
              
            }
        }
 
       
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + array[i][j];
            }
             cout<<sum<<" ";
           sum = 0;
 
        }
 
    }
