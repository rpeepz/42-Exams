# Camel to Snake

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

>A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.  


>A snake_case string is a string where each word is in lower case, separated by
an underscore `_` .

Examples:
``` c
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_word$
$>./camel_to_snake | cat -e
$
```