#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>



void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *str, size_t len);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void * dest, const void *src, int c, size_t count);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int   ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strdup(const char *str);
size_t ft_strlen(const char *str);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest,const char *src, size_t n);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);




//part 2
void * ft_memalloc(size_t size);
void ft_memdel(void **ap);


#endif