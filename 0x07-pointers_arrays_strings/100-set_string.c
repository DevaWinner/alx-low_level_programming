#include "main.h"
#include <stdio.h>

/**
* set_string - sets value of a pointer to a char.
* @s: the pointer.
* @to: the char.
*/
void set_string(char **s, char *to)
{
  *s = to;
}
