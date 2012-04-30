/*
** allum.h for allum1 in /home/fillin_j//allum1
** 
** Made by jennifer fillinger
** Login   <fillin_j@epitech.net>
** 
** Started on  Sat Feb 11 15:30:23 2012 jennifer fillinger
** Last update Sun Feb 12 15:32:00 2012 jennifer fillinger
*/

#ifndef		__ALLUM_H__
#define		__ALLUM_H__

int             a_choice(int *line);
void	        aff_match(int nb_match);
void	        aff_game(int *line);
int             computer(int *line, int r_line, int i);
void	        *xmalloc(unsigned int s);
int		first_player();
void            game(int *line, int player);
int             ia(int *line);
int             match(int *line, int l_choice);
int	        my_putstr(char *str);
int	        my_strlen(char *str);
int             one(int *line);
int             remain_line(int *line);
int             rmv_all(int *line, int nb_line);
int             two(int *line);
int             x_rmv(int *line, int nb_line);

#endif
