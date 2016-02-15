#include <stdio.h>

int i;
main( int number_of_args, char* list_of_args[] ) 
{ 
  for ( i=0; i<number_of_args; i++) 
    { 
      printf("the %2d arg is: %s\n", i, list_of_args[i]); 
    } 
} 
    
      
