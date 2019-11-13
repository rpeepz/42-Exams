# Gold Gain

```
This exam question requires an optimized solution
```  
Given a matrix of n*n dimensions, move from any row of the first column:  
right -> , right up / , or right down \  

> Implement an algorithm able to return the maximum amount of gold he can collect.

The function must be declared as follows:

``` c
int	gold_gain(int **mine, int n);
```

<br>

Example :
``` c
mine = [
  [ 1, 0, 0 ],
  [ 0, 3, 4 ],
  [ 0, 0, 0 ]
]
n = 3
```  

In this example, your function should return 8,
because taking the following path gain 8:  
(0,0) -> (1,1) -> (1,2)
  1   ->   3   ->   4

 >- The largest test we will run is a matrix of 1000 by 1000.
it should run in less than 2 seconds.  

<br>

<br>

NOTES:  