#include "main.h"

/**
 * append_text_to_file - appends at the end of a file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;
long int w;

if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[len])
len++;
w = write(fd, text_content, len);
if (w == -1)
return (-1);
}
if (close(fd) == -1)
return (-1);
return (1);
}
