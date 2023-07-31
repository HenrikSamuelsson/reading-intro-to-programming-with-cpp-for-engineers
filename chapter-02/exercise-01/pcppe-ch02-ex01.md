# Solution Exercise 1

The *greatest common divisor* (GCD) of two positive integers a and b is the largest integer that divides each of them without any remainder. An algorithm known as the Euclidean algorithm can be used to deduce the GCD.

The following pseudocode describes the Euclidean algorithm.

```txt
Input: Two positive integers a, b
Output: GCD(a, b)

while b not equal to 0
    tmp <- b
    b <- a modulo b
    a <- tmp
return a
```

Modulo in the above pseudo code is the remainder when dividing two numbers.

For example 25 modulo 7 is 4, because 25 divided by 7 would yield 3 as the whole part and a remainder of 4.

Another way to grasp the modulo concept is the fact that 7 times 3 is 21 and if we add 4 we get 25, hence 25 modulo 7 is 4.

## (a)

The Euclidean algorithm can be used manually below is an example to calculate the GCD for a = 255 and b = 221 by iteratively doing the calculations inside the while part.

```txt
Iteration 1:
    tmp <- 221
    b <- 34
    a <- 221

Iteration 2:
    tmp <- 34
    b <- 17
    a <- 34

Iteration 3:
    tmp <- 17
    b <- 0
    a <- 17
```

In iteration 3 b becomes 0 meaning tha we have the final result this is the condition to stop iterating. The result is stored in a that is now 17. The conclusion is that GCD of 255 and 221 is hence 17.

## (b)

## (c)

Results from test runs of the program in part (c):

```txt
GCD Calculator    
Enter an integer: 255
Enter an integer: 221
GCD(255, 221) = 17
```

```txt
GCD Calculator
Enter an integer: 8
Enter an integer: 12
GCD(8, 12) = 4
```
