#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *_strncpy(char *dest, char *src, int n);
char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int len(char *str);
int num_words(char *str);

#endif /* MAIN_H */
