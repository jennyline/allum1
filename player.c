/*
** player.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb 12 14:25:35 2012 jennifer fillinger
** Last update Sun Feb 12 15:45:52 2012 jennifer fillinger
*/

#include <stdlib.h>
#include "allum.h"

int		match(int *line, int l_choice)
{
  int	nb_match;
  int	r_line;

  nb_match = 0;
  r_line = remain_line(line);
  while (42)
    {
      my_putstr("how many ? ");
      nb_match = my_atoi(get_next_line(0));
      if (r_line == 1 && line[nb_match] == 1)
	{
	  my_putstr("\nYou LOSE\n");
	  exit (0);
	}
      if (nb_match > 0 && nb_match <= line[l_choice])
	{
	  line[l_choice] = line[l_choice] - nb_match;
	  aff_game(line);
	  if (remain_line(line) == 0)
	    my_putstr("\nYou LOSE !\n");
	  return (EXIT_SUCCESS);
	}
    }
}

int		a_choice(int *line)
{
  int	l_choice;

  l_choice = 1;
  while (42)
    {
      my_putstr("\nOn which line do you want to take match or matches? ");
      l_choice = my_atoi(get_next_line(0));
      if (l_choice > 0 && l_choice < 6 && line[l_choice - 1] != 0)
	return (l_choice - 1);
    }
}

int		one(int *line)
{
  int	l_choice;

  l_choice = a_choice(line);
  match(line, l_choice);
}
