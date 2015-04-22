/* Jing Zhang 912448213
 * This is a program that displays the integers between 1 and 100 that are divisible by either 6 or 7
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

    main()
     {
      int i;
      for (i=1;i<=100;i++)
       {
         if(i%6==0 || i%7==0) printf("%d\n",i);
        }
      }
