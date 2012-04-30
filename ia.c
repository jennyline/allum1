/*
** ia.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb 12 15:09:32 2012 jennifer fillinger
** Last update Sun Feb 12 15:50:57 2012 jennifer fillinger
*/

#include <stdlib.h>
#include "allum.h"

int		computer(int *line, int r_line, int i)
{
  while (i < 5)
    {
      if (line[i] != 0 && r_line >= 2)
	{
	  rmv_all(line, i);
	  return (EXIT_SUCCESS);
	}
      if (line[i] > 1)
	{
	  x_rmv(line, i);
	  return (EXIT_SUCCESS);
	}
      if (r_line == 1)
	{
	  if (line[i] == 1)
	    {
	      rmv_all(line, i);
	      my_putstr("\nYou Win !\n");
	      exit (0);
	    }
	}
      i = i + 1;
    }
}

int		ia(int *line)
{
  int	i;
  int	r_line;

  i = 0;
  r_line = remain_line(line);
  computer(line, r_line, i);
}

int		rmv_all(int *line, int nb_line)
{
  line[nb_line] = 0;
  aff_game(line);
  return (EXIT_SUCCESS);
}

int		x_rmv(int *line, int nb_line)
{
  line[nb_line] = 1;
  aff_game(line);
  return (EXIT_SUCCESS);
}

int		two(int *line)
{
  int	r_line;

  r_line = remain_line(line);
  if (r_line == 0)
    exit (0);
  my_putstr("\nPlayer 2 played:\n");
  if (r_line == 5)
      rmv_all(line, 0);
  if (r_line < 5) 
    ia(line);
}
