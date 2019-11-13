# Print Doublon

```
This exam question requires an optimized solution
```  
Given two sorted arrays, create a function able to print all the number that are present
in one array and in the other

The function must be declared as follows:  
>(with 'na' the length of the array 'a',
and 'nb' the length of the array 'b'):

``` c
void	print_doublon(int *a, int na, int *b, int nb);
```

<br>

Example :
``` c
a = [ -5,  2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000 ]
b = [  2,  4,  5,  6,  7, 10,  40,  70 ]
na = 11
nb = 8
```  

In this case, by using a main file that use your function with the above input,
the output should be (using cat -e):

```
$> ./example2 | cat -e
2 10 70$
```

 >- The largest test we will run will be on two arrays of 500,000 elements each,
it should run in less than 2 seconds.  

<br>

<br>

NOTES:  