;;/*
** aff.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sat Feb 11 15:20:32 2012 jennifer fillinger
** Last update Sat Feb 11 15:39:24 2012 jennifer fillinger
*/

void	aff_match(int nb_match)
{
  int	i;

  i = 0;
  while (i < nb_match)
    {
      my_putstr("|");
      i = i + 1;
    }
  my_putstr("\n");
}

void    aff_game(int *line)
{
  my_putstr("\n1)  ");
  aff_match(line[0]);
  my_putstr("2)  ");
  aff_match(line[1]);
  my_putstr("3)  ");
  aff_match(line[2]);
  my_putstr("4)  ");
  aff_match(line[3]);
  my_putstr("5)  ");
  aff_match(line[4]);
}
