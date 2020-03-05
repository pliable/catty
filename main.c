#include <stdio.h>
#include <stdlib.h>

/**
   catty - concatenate files
   -----------------------

   i take file, i spit file to stdout. hooray file i/o

   calling it catty for funsies and shit. also too lazy to remove cat from PATH

   @author Steve Choo
*/
int main(int argc, char *argv[]) {
   //quick and dirty check for proper amount of args
   if(argc != 2) {
      fprintf(stderr, "Check yo arguments, son. Usage: cat <file>\n");
      exit(EXIT_FAILURE);
   }

   return 0;
}
