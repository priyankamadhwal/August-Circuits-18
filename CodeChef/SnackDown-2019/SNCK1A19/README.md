## SNACKDOWN 2019- ONLINE ROUND 1A

## Problem Statements.

### Q1- Chef and Card Trick (CARDMGK)  
Chef is recently learning magic tricks that use a deck of cards. Each card in this deck has an integer written on it. Currently, he is
learning how to make the deck sorted in non-decreasing order (from top to bottom) of the numbers on the cards using at most one shuffle 
move.   
A shuffle move means taking an arbitrary number of cards from the top of the deck and putting them at the bottom of the deck in the same relative order.  
For example, if we have a deck of cards with numbers (5,7,3,3,8,2), it is allowed to take the top three cards (5,7,3) and put them at the bottom; the result is (3,8,2,5,7,3).  
You are trying to convince Chef that sometimes, it is impossible to sort the deck in non-decreasing order using at most one shuffle move. That is why you need to write a program that determines if it is possible to sort a given deck or not.  
**Input:**  
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.  
- The first line of each test case contains a single integer N.  
- The second line contains N space-separated integers A1,A2,…,AN denoting the cards in the deck from top to bottom.  
    
**Output:**  
For each test case, print a single line containing the string "YES" if it is possible to sort the deck or "NO" if it is impossible.  
**Constraints**  
- 1≤T≤100  
- 2≤N≤10^5  
- the sum of N over all test cases does not exceed 10^6  
- 1≤Ai≤10^9 for each valid i  
  
### Q2- Chef and Typing (TYPING)  
Chef is practising his typing skills since his current typing speed is very low. He uses a training application that displays some words one by one for Chef to type.  
When typing a word, Chef takes 0.2 seconds to type the first character; for each other character of this word, he takes 0.2 seconds to type this character if it is written with a different hand than the previous character, or 0.4 seconds if it is written with the same hand. The time taken to type a word is the sum of times taken to type all of its characters. However, if a word has already appeared during practice, Chef can type it in half the time it took him to type this word for the first time.  
Currently, Chef is practising in easy mode, which only uses words that consists of characters 'd', 'f', 'j' and 'k'. The characters 'd' and 'f' are written using the left hand, while the characters 'j' and 'k' are written using the right hand.    
Given the words that appeared during Chef's practice, calculate the total time taken by Chef to type all the words.    
**Input:**  
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.  
- The first line of each test case contains a single integer N denoting the number of words Chef had to type.  
- Each of the following N lines contains a single string — a word Chef has to type.  
    
**Output:**
For each test case, print a single line containing one integer — the time taken by Chef to type all the words, in the units of tenths of seconds.  
**Constraints**  
- 1≤T≤100 
- 1≤N≤100
- each word contains only characters 'd', 'f', 'j', 'k'
- the length of each word does not exceed 20
  
### Q3- Chefland and Average Distance (AVGMAT)  
Chefland is a grid with N rows and M columns. Each cell of this grid is either empty or contains a house. The distance between a pair of houses is the Manhattan distance between the cells containing them.  
For each d between 1 and N+M−2 inclusive, Chef wants to calculate the number of unordered pairs of distinct houses with distance equal to d. Please help him!  
**Input:**  
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.  
= The first line of each test case contains two space-separated integers N and M.  
- N lines follow. For each i (1≤i≤N), the i-th of these lines contains a binary string with length M; for each j (1≤j≤M), the j-th character of this string is '1' if the cell in the i-th row and j-th column contains a house or '0' if it is empty.  
      
**Output:**
For each test case, print a single line containing N+M−2 space-separated integers. For each valid i, the i-th integer should denote the number of pairs with distance i.  
**Constraints**  
- 1≤T≤3   
- 2≤N,M≤300  
  
### Q4- Chef and Periodic Sequence (PERIODIC)  
Let's define a periodic infinite sequence S (0-indexed) with period K using the formula Si=(i%K)+1.  
Chef has found a sequence of positive integers A with length N buried underground. He suspects that it is a contiguous subsequence of some periodic sequence. Unfortunately, some elements of A are unreadable. Can you tell Chef the longest possible period K of an infinite periodic sequence which contains A (after suitably filling in the unreadable elements) as a contiguous subsequence?    
**Input:**  
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.  
- The first line of each test case contains a single integer N.  
- The second line contains N space-separated integers A1,A2,…,AN. Unreadable elements are denoted by −1.  
      
**Output:**
For each test case, print a single line.  
- If the period can be arbitrarily large, this line should contain a single string "inf".  
- Otherwise, if A cannot be a contiguous subsequence of a periodic sequence, it should contain a single string "impossible".  
- Otherwise, it should contain a single integer — the maximum possible period.     
  
**Constraints**  
- 1≤T≤100   
- 2≤N≤10^5  
- the sum of N over all test cases does not exceed 10^6  
- for each valid i, 1≤Ai≤10^6 or Ai=−1  
  
