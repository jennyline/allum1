/*
** get_next_line.h for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sat Feb 11 15:43:48 2012 jennifer fillinger
** Last update Sat Feb 11 15:44:57 2012 jennifer fillinger
*/


#ifndef         _GET_NEXT_LINE_H_
#define		_GET_NEXT_LINE_H_

#define		GNL_BUFF_SIZE   64

char            *get_next_line(const int fd);
char		*my_strncpy(char *d, char *s, int n);
static char     *add_to_line(char *line, int cur, char *buff, int *start);
void		*xmalloc(unsigned int s);
void		xfree(void *p);

#endif
