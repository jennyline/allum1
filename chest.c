/*
** chest.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sat Feb 11 15:15:37 2012 jennifer fillinger
** Last update Sat Feb 11 15:45:55 2012 jennifer fillinger
*/

#include <stdlib.h>

int     my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int     my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}


void	*xmalloc(unsigned int s)
{
  void *p;

  if ((p = malloc(s)) == 0)
    {
      my_putstr("Not enough memory.\n");
      exit (EXIT_FAILURE);
    }
  return (p);
}

void    xfree(void *p)
{
  if (p)
    free(p);
}
