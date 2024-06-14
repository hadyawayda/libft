/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hawayda <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 00:51:42 by hawayda           #+#    #+#             */
/*   Updated: 2024/06/11 00:51:44 by hawayda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isspace(int c);
int				ft_isblank(int c);
int				ft_iscntrl(int c);
int				ft_isgraph(int c);
int				ft_ispunct(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isxdigit(int c);
int				ft_lstsize(t_list *node);
int				ft_atoi(const char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strnrcmp(const char *s1, const char *s2, size_t n);

char			*ft_itoa(int n);
char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *str1, const char *str2);
char			*ft_strnstr(const char *str1, const char *str2,
					size_t len);

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putendl(char *str);
void			ft_putnbr(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_swap(int *a, int *b);
void			ft_split_free(char **s);
void			ft_lstadd_front(t_list **node, t_list *newNode);
void			ft_lstadd_back(t_list **node, t_list *newNode);
void			ft_lstdelone(t_list *node, void (*del)(void *));
void			ft_lstclear(t_list **node, void (*del)(void*));
void			ft_lstiter(t_list *node, void (*f)(void *));
void			ft_bzero(void *ptr, size_t n);
void			*ft_memset(void *ptr, int value, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
size_t			ft_strlen_2(char **s);

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *node);
t_list			*ft_lstmap(t_list *node, void *(*f)(void *),
					void (*del)(void *));

double			ft_atof(const char *str);
double			ft_sqrt(double x);

long double		ft_pow(long double n, unsigned int pow);

#endif
