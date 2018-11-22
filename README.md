# Solution of Numerical-Methods

![mm](https://user-images.githubusercontent.com/37344605/48907043-8e9aa180-ee90-11e8-8e4c-a6e3097b0c0e.jpg)



### 1. Bisection Method:

To find a root very accurately Bisection Method is used in Mathematics. Bisection method algorithm is very easy to program and it always converges which means it always finds root.

Bisection Method repeatedly bisects an interval and then selects a subinterval in which root lies. It is a very simple and robust method but slower than other methods.

It is also called Interval halving, binary search method and dichotomy method.

Bisection Method calculates the root by first calculating the mid point of the given interval end points.

![800px-bisection_method svg](https://user-images.githubusercontent.com/37344605/48907282-2dbf9900-ee91-11e8-8dba-ee6e23386139.png)






### 2. Fixed Point Iteration / Repeated Substitution Method

This is most easiest of all method. The logic is very simple. Given an equation, take an initial guess and and find the functional value for that guess, in the subsequent iteration the result obtained in last iteration will be new guess. Continue this process until get the required accuracy. This means that absoulte differebce between two subsequent functional values in two iterations is too small to be neglected.

But all functions don’t converge. If for given function

                                        |f′(x)|<1
Then this method will converge to actual solution or in other cases, it will diverge.



