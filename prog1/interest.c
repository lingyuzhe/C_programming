/* Jing Zhang 912448213
 * Interest Calculation Program.
 */

   #include <stdio.h>
   #include "genlib.h"
   #include "simpio.h"

    main()
     {
       double start,interest,new;                       /*DECLARE*/
    printf("Interest calaculation program.\n");
    printf("Starting balance? ");
    start = GetReal();
    printf("Annual interest rate percentage? ");
    interest = GetReal();
    new = start * (1+interest/100);
    printf("Balance after one year: %g\n",new);      /*Calculation and Print out*/
}

