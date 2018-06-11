#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char tok1[6] = "hola1";

        
	char *tok;

	tok = "hola";	
   printf(" %s\n", tok);
   printf(" %i\n", &tok);
   printf(" %s\n", tok1);
   printf(" %i\n", &tok1);

   char *x;
   const char s[2] = "l"; 


   x = strtok(tok1, s);

   while( x != NULL ) {
	         printf( " %s\n", x);
		     
		       x = strtok(NULL, s);
		          }
	return 0;

}
