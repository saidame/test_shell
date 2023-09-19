#include "shell.h"
/**
 * tests - f n for testing
 * @chars_read: read char
 * Return: 1
 */

int shell_tests(ssize_t chars_read)
{
if (chars_read == -1)
{
if (feof(stdin))
{
printf("\n");
return (1);
}
else if (ferror(stdin))
{
perror("getline");
exit(EXIT_FAILURE);
}
}
return (0);
}
