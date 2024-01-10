SIMPLE SHELL
Simple shell is a command line interpreter develoved in C programming language that emulates the most basic functionality of 'sh'

This is a team project with two persons per team.

COMPILATION

To compile the program, the command has to be execute this way:

gcc-Wall-Werror-Wextra-pedantic -std=gnu89 *.c -o hsh

To run like this:
```
$ ./hsh
```

TESTING

The interactive mood is how the shell is used, the executable file is run and we can write the commands, an example is as below:

$ ./hsh
($)/bin/ls
hsh main.c shell.c
($)
($) exit
$

But also in non-interactive mood the command is passed th the executabl file with a pipe operator, as show written below:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

