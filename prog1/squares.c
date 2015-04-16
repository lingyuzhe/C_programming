/* Jing Zhang 912448213
 * This is a program that prints out the square of the numbers from 1 to 10.
 */

   #include <stdio.h>
   #include "genlib.h"
   #include "simpio.h"

  
   main()
   {
      int i, sqr;                               /*DECLARE*/
      for(i=1; i<11; i++){                      /*i from 1 to 10*/
         sqr = i * i;                           /*calculate the square of i*/
         printf("%d squared is %d\n", i, sqr);  /*print out result*/
      }
    }
