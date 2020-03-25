#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define SUCCESS 1
#define FAILURE 0


/**
   catty - concatenate files
   -----------------------

   i take file, i spit file to stdout. hooray file i/o

   calling it catty for funsies and shit. also too lazy to remove cat from PATH

   phase 1: just read and output one file

   phase 2: do it for multiple arguments when calling program

   @author Steve Choo
*/

//maybe return int to denote success or failure?
int print_file(FILE* fileToRead);
int main(int argc, char* argv[]) {
   FILE* fp;
   int i;
   //quick and dirty check for proper amount of args
   /*
   if(argc != 2) {
      fprintf(stderr, "Check yo arguments, son. Usage: cat <file>\n");
      exit(EXIT_FAILURE);
   }
   */

   //starting at 1 since arg0 is program itself
   for(i = 1; i < argc; i++) {
      fp = fopen(argv[i], "r");
      if(fp == NULL) {
         perror("Couldn't open file for some fucked up reason. Sucks");
         continue;
      }
      print_file(fp);
   }

   return 0;
}

int print_file(FILE* fileToRead) {
   printf("oh whee for now");

   return SUCCESS;
}
