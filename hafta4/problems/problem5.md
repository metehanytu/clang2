# Collatz Conjecture Using Recursion

## **Problem Statement**
Write a C program that:
- Takes an integer `n` as input from the user.
- Uses **recursion** to generate the Collatz sequence.
- Prints the sequence step by step until it reaches `1`.

## **Collatz Conjecture Definition**
The Collatz sequence is defined as follows:

\[ C(n) = \begin{cases} 
    1, & \text{if } n = 1 \\
    C(n/2), & \text{if } n \text{ is even} \\
    C(3n + 1), & \text{if } n \text{ is odd}
  \end{cases} \]

The process repeats until `n = 1` is reached.

## **Expected Input/Output**
### **Example 1:**
#### **Input:**
```
Enter a number: 6
```
#### **Output:**
```
Collatz sequence: 6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```

### **Example 2:**
#### **Input:**
```
Enter a number: 19
```
#### **Output:**
```
Collatz sequence: 19 → 58 → 29 → 88 → 44 → 22 → 11 → 34 → 17 → 52 → 26 → 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```
