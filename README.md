#### Question 1. String  
You are given a String S of size N , consisting of lowercase English characters. Now, you need to select a single English lowercase alphabet, and delete all occurences of it from the given string S. Considering you do the mentioned exactly once over the given string, what is the minimum possible length of the resultant string ?  
**Input Format :**  
The first line contains a single integer N. The next line contains a String S of length N consisting of lowercase Englsh characters.  
**Output Format :**  
Print the required answer on a single line  
**Explanation :**  
Sample Input:  
5  
aaaaa  
Sample output :  
0  
We can delete all occurences of the letter "a" to get a resultant string of length 0.  
  
#### Question 2. Picu Bank  
You have D dollars with you. You want to put it into a Bank, namely Picu Bank. This bank has a peculiar behavior for interest. Regardless of the Bank deposit amount, every month it adds A dollars to your bank account and this continues till M months. Exaxtly on M+1 months, it adds B dollars (B<A) to your bank account. This scanario repeats again in same manner.( i.e on the (M+2)th month A dollars are added, and so on.. ). Your task is to find out how many months does it take for the dollar amount to reach at least X, in the bank account .      
**Input:**  
Input starts with an integer T(1<=T<=100000) , denoting the number of test cases.  Each case starts with 5 integers D,A,M,B and X as described in problem statement.  
**Output:**
For each case of input minimum number of months needed to reach dollar value of at least X in a single line.  
**Explanation:**  
Sample Input:  
2  
2 5 4 3 51  
2 5 4 3 46  
Sample output:   
11  
10  
