### Q1- Qualifying to Pre-elimination (QUALPREL)  
Today the organizers ask you to count the number of qualified teams in Pre-elimination round.   
They provide you scores of each team and ensure that all teams scoring at least equal to K-th team.  
**Input:**  
- The first line contains one integer T - the number of testcases. The next 2⋅T lines contains test cases.  
- The first line of each test case contains two integers - N and K.  
- The second line contains N space-separated integers Si, i-th of them denoting the score of i-th team. 
  
**Output:**
For each testcase, output in a single line containing the answer to the problem.  
**Constraints**  
- 1≤T≤1000    
- 1≤K≤N≤10^5  
- 1≤S[i]≤10^9   
- sum of N over all test-cases doesn't exceed 10^6 
  
### Q2- Chef and Operations (QABC)  
Chef has two sequences A and B, each with length N. He can apply the following magic operation an arbitrary number of times (including zero): choose an index i (1≤i≤N−2) and add 1 to A[i], 2 to A[i+1] and 3 to A[i+2], i.e. change A[i] to A[i]+1, A[i+1] to A[i+1]+2 and A[i+2] to A[i+2]+3.   
Chef asks you to tell him if it is possible to obtain sequence B from sequence A this way. Help him!  
**Input:**  
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.  
- The first line of each test case contains a single integer N.  
- The second line contains N space-separated integers A1,A2,…,AN.  
- The third line contains N space-separated integers B1,B2,…,BN.  
    
**Output:**
For each test case, print a single line containing the string "TAK" if it is possible to reach sequence B or "NIE" otherwise.    
**Constraints**  
- 1≤T≤1,000  
- 1≤N≤10^5   
- 0≤A[i]≤10^8 for each valid i  
- 0≤B[i]≤10^8 for each valid i  
- the sum of N for all test cases does not exceed 5.10^5  
