#ifndef S21_GREP_H
#define S21_GREP_H

#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 10000

typedef struct {
  int e;
  int i;
  int v;
  int c;
  int l;
  int n;
  int h;
  int s;
  int f;
  int o;

  char str[BUFFER];
  char str_regexec[BUFFER];
  char c_flag;
  char str_o[BUFFER];
  char filename[BUFFER];

} Flags;

void parser(int argc, char* argv[], Flags* A);
void output(char* argv[], Flags* A);
void f_flag(Flags* A);
// void flag_c(Flags* flags, int *match, int *str_count);

#endif