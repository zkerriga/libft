/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkerriga <zkerriga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:01:01 by zkerriga          #+#    #+#             */
/*   Updated: 2020/06/23 23:22:58 by zkerriga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define FT_MAX_LONG 9223372036854775807
# define M_ADD 1
# define M_REMOVE 0
# define TRUE 1
# define FALSE 0

typedef char		t_bool;

typedef struct		s_tree
{
	void			*content;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little,
								size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *nptr);
float				ft_atof(const char *nptr);
int					ft_tolower(int c);
int					ft_toupper(int c);

t_bool				ft_isalpha(int c);
t_bool				ft_isdigit(int c);
t_bool				ft_isalnum(int c);
t_bool				ft_isascii(int c);
t_bool				ft_isprint(int c);
t_bool				ft_isspace(int c);

void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *s);

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *fresh);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *fresh);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));
void				ft_lstdelel(t_list **lst, void *content,
								int (*cmp)(void *, void *));

void				ft_leafadd(t_tree **tree, t_tree *fresh,
								int (*f_cmp)(void *, void *));
t_tree				*ft_leaffind(t_tree *tree, void *content,
									int (*f_cmp)(void *, void *));
t_tree				*ft_leafnew(void *content);
void				ft_treeclear(t_tree **tree, void (*del)(void*));
void				ft_treeinorder(t_tree *tree, void (*func)(void*));
void				ft_treepostorder(t_tree *tree, void (*func)(void*));
void				ft_treepreorder(t_tree *tree, void (*func)(void*));

void				memory_manager(void *ptr, t_bool action);
void				free_gc(void *ptr);
void				*malloc_gc(size_t sizemem);

t_dlist				*ft_dlstnew(void *content);
void				ft_dlstadd_front(t_dlist **lst, t_dlist *fresh);
void				ft_dlstclear(t_dlist **lst, void (*del)(void*));

#endif
