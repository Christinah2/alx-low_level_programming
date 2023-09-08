#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int f);

/**
 * create_buffer -It allocates the 1024 bytes for a buffer
 * @file: The file buffer name that it is storing chars for
 * Return: A pointer that points to a newly allocated buffer
 */

char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - It closes the file descriptors
 * @f: The file descriptor is to be closed
 */

void close_file(int f)
{
int c;
c = close(f);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
exit(100);
}
}

/**
 * main - It copies the contents of a file to another file
 * @argc: The arguments number that is supplied to the program
 * @argv: The arguments array of pointers
 * If the argument count is wrong - exit code 97
 * If file_from doesn't exist or can't be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from can't be closed - exit code 100
 * Return: A 0 upon success
 */

int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
