/*
** line.c for allum1* in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sun Feb 12 14:08:25 2012 jennifer fillinger
** Last update Sun Feb 12 14:15:41 2012 jennifer fillinger
*/

int		remain_line(int *line)
{
  int	i;
  int	n;

  i = 0;
  n = 5;
  while (i <= 4)
    {
      if (line[i] == 0)
	n = n - 1;
    i = i + 1;
    }
  return (n);
}
