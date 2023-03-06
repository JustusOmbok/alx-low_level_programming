#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chesboard(char (*a)[8]);
void set_string(char **s, char *to);
void print_diagram(int *a, int size);

#endif /*MAIN_H*/
