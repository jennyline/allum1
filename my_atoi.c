/*
** my_atoi.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb 12 13:54:31 2012 jennifer fillinger
** Last update Sun Feb 12 13:54:39 2012 jennifer fillinger
*/

#include "allum.h"

int     my_atoi(char *str)
{
  int val;

  val = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
        {
          val *= 10;
          val += *str - '0';
        }
      else
        return (val);
      str++;
    }
  return (val);
}
