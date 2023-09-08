#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file
 * @filename: Is the name of the file
 * @text_content: Is the NULL terminated string to add at the end of the file
 * If the file doesn't exist then the user has no write permissions --1 else -1
 * Return: if function is NULL or fails then --1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int r, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
r = open(filename, O_WRONLY | O_APPEND);
w = write(r, text_content, len);
if (r == -1 || w == -1)
return (-1);
close(r);
return (1);
}
