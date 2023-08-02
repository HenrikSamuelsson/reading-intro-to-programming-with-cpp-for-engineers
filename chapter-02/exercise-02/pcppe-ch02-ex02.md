# Solution Exercise 2

The square root of a number can be approximated by the use of the [biscection method](https://en.wikipedia.org/wiki/Bisection_method).

## (a)

Implementation of bisection algorithm for computing a approximation of the square root of an integer value:

<https://github.com/HenrikSamuelsson/reading-intro-to-programming-with-cpp-for-engineers/blob/740b20370dbbb7d1b8ee4d31a120e17465bbd223/chapter-02/exercise-02/pcppe-ch02-ex02-main.cpp#L1-L33>

## (b)

Comparison of values produced by the bisection approximation to the actual square root:

|  x   | bisection | square root |
|---   |---        |---          |
| 0    | 0.500     | 0.000       |
| 1    | 0.750     | 1.000       |
| 2    | 1.500     | 1.414       |
| 3    | 1.875     | 1.732       |
| 5    | 2.625     | 2.236       |
| 8    | 3.125     | 2.828       |
| 13   | 2.812     | 3.605       |
| 21   | 5.031     | 4.583       |

The bisection algorithm will usually be at least close, but note that it for examples approximates square root of 8 to be larger than square root 13.
