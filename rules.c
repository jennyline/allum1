/*
** player.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb 12 13:42:08 2012 jennifer fillinger
** Last update Sun Feb 12 15:33:11 2012 jennifer fillinger
*/

#include "allum.h"

void		game(int *line, int player)
{
  int	r_line;

  r_line = remain_line(line);
  if (player == 1)
    {
      while (r_line != 0)
	{
	  one(line);
	  two(line);
	  r_line = remain_line(line);
	}
    }
  if (player == 2)
    {
      while (r_line != 0)
	{
	  two(line);
	  one(line);
	  r_line = remain_line(line);
	}
    }
}

int		first_player()
{
  int	player;

  player = 0;
  while (42)
    {
      my_putstr("Do you want to be the first player?\nYes(1), No(2): ");
      player = my_atoi(get_next_line(0));
      if (player == 1 || player == 2)
	{
	  return (player);
	}
    }
}
