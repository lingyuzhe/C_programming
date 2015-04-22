/* Jing Zhang 912448213
 * This is a program displaying the Fibonacci sequence from F0 through F15
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

    main()
    {
     int i=0,sum=0,x=0, y=1;
     printf("This program lists the Fibonacci sequence.\n");
     for (i=0;i<16;i++)
      { 
        if (i<10){
        printf(" F(%d) = %4d\n",i,x);
        } else {
        printf("F(%d) = %4d\n",i,x);
        }
        sum=x+y;
        x=y;
        y=sum;
       }
    }
