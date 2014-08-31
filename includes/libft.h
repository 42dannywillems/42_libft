#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
typedef unsigned int	size_t;
typedef unsigned int	count_t;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isechapcarac(int c);
int		ft_islowercase(int c);
int		ft_isuppercase(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_strcpy(const char *src, char *dest);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const char *stc, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t nb);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_strncpy(const char *src, char *dest, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*strchr(const char *s, int c);

#endif
