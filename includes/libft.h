#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include "gs_slist.h"
# include "gs_prototypes.h"

# define STDIN	0
# define STDOUT	1
# define STDERR	2
# define TRUE	1
# define FALSE	0

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef unsigned int	count_t;
typedef int				bool_t;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
bool_t	ft_isalnum(int c);
bool_t	ft_isalpha(int c);
bool_t	ft_isblankspace(int c);
bool_t	ft_isdigit(int c);
bool_t	ft_isechapcarac(int c);
bool_t	ft_islowercase(int c);
bool_t	ft_isuppercase(int c);
bool_t	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const char *stc, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t nb);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **a);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
bool_t	ft_strequ(char const *s1, char const *s2);
bool_t	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	*ft_strtrim(char const *s);
char	**ft_strsplit(const char *str, const char *sep);
char	**ft_splitwhitespaces(const char *str);

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
