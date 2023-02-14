#include <stdio.h>
#include <stdlib.h>
#include "grammar.C"

#ifndef bool // bools
#define bool char
#define false 0
#define true 1
#endif // end of bools


#ifdef _WIN32
#include <string.h>
static char buffer[2048];
/* Fake readline function */
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

/* Fake add_history function */
void add_history(char* unused) {}

#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

int main(int argc, char** argv) {

  puts("Cross V0.0.1a");
  puts("Type \"quit()\" to Exit");

  while (true) {

    char* input = readline("Cross <> ");
    bool* quit = malloc(sizeof(bool));
    *quit = false;

    add_history(input);

    if (strncmp(input, "quit()", 6) == 0) {*quit = true;}
    printf("%s\n", input);

    free(input);
    if (*quit) {
        free(quit);
        break;
    }
    free(quit);
  }

  return 0;
}
