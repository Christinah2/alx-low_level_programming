#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads a text file and prints it to STDOUT
 * @letters: The number of letters to be read and printed
 * @filename: The text file that's being read
 * If filename is NULL or function fails then return 0
 * Return: The actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r;
ssize_t w;
ssize_t f;
char *buf;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buf = malloc(sizeof(char) * letters);
r = read(f, buf, letters);
w = write(STDOUT_FILENO, buf, r);
free(buf);
close(f);
return (w);
}
