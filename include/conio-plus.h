#ifndef CONIO_H
#define CONIO_H

void print(const char* c);
void printc(char* c);
void printl(const char* c, unsigned int l);
void get_line(char* buf, unsigned int len);
char get_char(void);
unsigned char kbhit();
inline void clrkb();
void waitkey();

#endif /* CONIO_H */
