# Expand Str

Write a program that takes a string and displays it with exactly *three* spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

>A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.  
If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:
``` bash
$> ./epur_str "See? Its easy to print the same thing" | cat -e
See?   Its   easy   to   print   the   same   thing$
$> ./epur_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
```