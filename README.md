
# alx-low_level_programming
# simple_shell
=======
# Dafine and Jeffrey Shell

![alt text](https://cdn.allthings.how/wp-content/uploads/2020/09/allthings.how-linux-shell-command-line-terminal-759x427.png)

### Description

Jeffrey and Dafine Shell is a basic UNIX command interpreter that emulates the functionality of the simple shell (sh). Additional features are also available. As a milestone project for ALX Africa Software Engineering, this program was written entirely in C.

### Installation

Clone this repository into your working directory. For best results, files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -std=gnu89

### Usage

After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

#### Interactive Mode

Simply run the program in interactive mode and wait for the prompt to appear. From there, you can freely type commands, exiting with the "exit" command or ctrl-D.

#### Non-Interactive Mode

In non-interactive mode, echo your desired command and pipe it into the program like this:

```sh
echo "ls" | ./shell
```

In non-interactive mode, the program will exit after finishing your desired command(s).

#### Included Built-Ins

Our shell has support for the following built-in commands:

| Command             | Definition                                                                                |
| ------------------- | ----------------------------------------------------------------------------------------- |
| exit [n]            | Exit the shell, with an optional exit status, n.                                          |
| env                 | Print the environment.                                                                    |
| setenv [var][value] | Set an environment variable and value. If the variable exists, the value will be updated. |
| unsetenv [var]      | Remove an environment variable.                                                           |
| cd [dir]            | Change the directory.                                                                     |
| help [built-in]     | Read documentation for a built-in.                                                        |


### Credits

All code written by [Dafine](https://github.com/Daph-4544) and [Jeffrey](https://github.com/JeffreyKirigo).
