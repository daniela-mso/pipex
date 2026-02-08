# Pipex

## Description
**Pipex** is a command-line program that simulates the shell pipe feature. It reads from an input file, executes specified commands, and writes the output to a specified file.

## Concepts
- **Subprocesses**: The program creates separate processes for the first and second commands using the `fork()` function.
  
- **Pipes**: Pipes allow for inter-process communication. The `pipe()` function creates a temporary buffer that connects the processes.

- **Redirection**: The `dup2()` function is used to redirect input and output streams to the appropriate file descriptors, facilitating communication through pipes.

- **Execution of commands**: The `execve()` function executes the commands, replacing the calling process with the executed command.

## How to use
To compile this program, run:

```bash
make
```
## How to run it
To compile this program, run:

```bash
make
```

## Memory Leak Test

```bash
make valgrind
```