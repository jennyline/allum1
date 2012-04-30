/*
** get_next_line.c for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sat Feb 11 15:42:35 2012 jennifer fillinger
** Last update Sat Feb 11 15:43:24 2012 jennifer fillinger
*/


#include <stdlib.h>
#include "get_next_line.h"

char    *my_strncpy(char *d, char *s, int n)
{
  int   c;

  c = -1;
  while (s[++c] && c < n)
    d[c] = s[c];
  if (c == 0 || n == 0)
    d[c] = 0;
  return (d);
}

static char     *add_to_line(char *line, int cur, char *buff, int *start)
{
  char          *new_elem;
  int           old_len;

  old_len = (line) ? my_strlen(line) : 0;
  new_elem = xmalloc((old_len + cur + 1) * sizeof(*new_elem));
  my_strncpy(new_elem, line ? line : "", old_len);
  my_strncpy(new_elem + old_len, buff + *start, cur);
  new_elem[old_len + cur] = 0;
  if (line)
    xfree(line);
  *start += cur + 1;
  return (new_elem);
}

char            *get_next_line(const int fd)
{
  static char   buff[GNL_BUFF_SIZE + 1];
  static int    in_buf = 0;
  static int    start;
  int           cur;
  char          *line;

  line = 0;
  cur = 0;
  while (1)
    {
      if (start >= in_buf)
        {
          start = 0;
          if (!(in_buf = read(fd, buff, GNL_BUFF_SIZE)))
            return (line);
          if (in_buf == -1)
            exit (EXIT_FAILURE + 0 * write (2, "Unable to read\n", 15));
          cur = 0;
        }
      if (buff[start + cur] == '\n')
        return (line = add_to_line(line, cur, buff, &start));
      if (start + cur == in_buf - 1)
        line = add_to_line(line, cur + 1, buff, &start);
      ++cur;
    }
}
