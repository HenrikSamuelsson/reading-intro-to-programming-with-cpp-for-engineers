# Solution Exercise 1

The *greatest common divisor* (GCD) of two positive integers a and b is the largest integer that divides each of them without any remainder. An algorithm known as the Euclidean algorithm can be used to deduce the GCD. The following pseudocode describes the algorithm.

```txt
Input: Two positive integers a, b
Output: GCD(a, b)

while b not equal to 0
    tmp <- b
    b <- a modulo b
    a <- tmp
return a
```

(Modulo is the remainder when dividing two numbers. For example 25 divided by 7 would yield 3 as the whole part and a remainder of 4.)

## (a)

The Euclidean algorithm can be used to calculate manually. Below is an example to calculate the GCD for a = 255 and b = 221 by iteratively doing the calculations inside the while part.

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

In iteration 3 we have a result because b becomes 0, the condition to stop iterating, a is now 17. The GCD of 255 and 221 is hence 17.
