/*
** main.c for alum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb  5 18:09:26 2012 jennifer fillinger
** Last update Sun Feb 12 14:01:27 2012 jennifer fillinger
*/

#include <stdlib.h>
#include "allum.h"

void		 main()
{
  int	*line;
  int	player;

  player = 0;

  line = xmalloc(5);

  line[0] = 1;
  line[1] = 3;
  line[2] = 5;
  line[3] = 7;
  line[4] = 9;

  my_putstr("\n\tWelcome to the Allum1 !\n");
  aff_game(line);
  my_putstr("\n");
  player = first_player();
  game(line, player);
  free(line);
}
