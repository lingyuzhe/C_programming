/* Jing Zhang 912448213
 * This is a program for calculating the average of values entered until the user enters the value -1.
 */

   #include <stdio.h>
   #include "genlib.h"
   #include "simpio.h"
   

    main()
     {
      printf("This program averages a list of integers.\nEnter -1 to signal the end of the list.\n");
      int i, sum;
      double n, average;
      sum = 0;
      n=0;
      while(1)
          {
            printf(" ? ");
            i=GetInteger();
            if (i ==-1) break;            
            sum += i;
            n++;
          }
       if(n!=0)
         {
           average= sum/n;
           printf("The average is %g\n", average);
         }
       else
           printf("The average does not exist.\n");
       }
