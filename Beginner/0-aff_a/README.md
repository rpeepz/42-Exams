# Aff A

Write a program that takes a string, and displays the first 'a' character it encounters in it, followed by a newline.  
>If there are no `a` characters in the string, the program just writes a newline.  

>If the number of parameters is not 1, the program displays `a` followed by a newline.

Example:
``` bash
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "RaInB0w d4Sh!" | cat -e
a$
$> ./aff_a "ThE Ck3 Is L|3" | cat -e
$
$> ./aff_a | cat -e
a$
```