#include <stdio.h>
#ifndef COMP_FILE_NAME
#define COMP_FILE_NAME
#endif
/**
 *main - print the name of the compiled file
 *Return: 0 Sucessful
 *
 */

int main (void)
{
  printf("%s/n", COMP_FILE_NAME);
  return (0);
}
