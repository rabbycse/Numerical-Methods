# Solution of Numerical-Methods

![mm](https://user-images.githubusercontent.com/37344605/48907043-8e9aa180-ee90-11e8-8e4c-a6e3097b0c0e.jpg)



### 1. Bisection Method:

To find a root very accurately Bisection Method is used in Mathematics. Bisection method algorithm is very easy to program and it always converges which means it always finds root.

Bisection Method repeatedly bisects an interval and then selects a subinterval in which root lies. It is a very simple and robust method but slower than other methods.

It is also called Interval halving, binary search method and dichotomy method.

Bisection Method calculates the root by first calculating the mid point of the given interval end points.

![800px-bisection_method](https://user-images.githubusercontent.com/37344605/48907652-4c725f80-ee92-11e8-8b2d-e73cac3e97dd.png)






### 2. Fixed Point Iteration / Repeated Substitution Method

This is most easiest of all method. The logic is very simple. Given an equation, take an initial guess and and find the functional value for that guess, in the subsequent iteration the result obtained in last iteration will be new guess. Continue this process until get the required accuracy. This means that absoulte differebce between two subsequent functional values in two iterations is too small to be neglected.

But all functions don’t converge. If for given function

                                        |f′(x)|<1
Then this method will converge to actual solution or in other cases, it will diverge.


![250px-sine_fixed_point svg](https://user-images.githubusercontent.com/37344605/48907829-dae6e100-ee92-11e8-8166-20c3f71cadc8.png)





### 3.  Newton-Raphson’s Method
The newton raphson algorithm is one of the most popular root-finding methods. So, it is basically used to find roots of a real-valued function.




This method is named after Isaac Newton and Joseph Raphson and is used to find a minimum or maximum of a function.

The Newton’s method is a better approximation method as compared to some other numerical methods. It is based on the idea of simple linear approximation.

This is a one-point method since it requires only one starting value and does not need to satisfy any other serious conditions.

Newton-Raphson Formula






