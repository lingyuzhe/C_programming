/* Jing Zhang 912448213
 *  * This program gives the solutions to quadratic equation
 *   */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

    void PrintFirstSolution(int a, int b, int c);
    void PrintSecondSolution(int a, int b, int c);

    main()
    {
     int a,b,c;
     printf("a: ");
     a=GetInteger();
     printf("b: ");
     b=GetInteger();
     printf("c: ");
     c=GetInteger();
     PrintFirstSolution(a,b,c);
     PrintSecondSolution(a,b,c);
    }

   void PrintFirstSolution(int a, int b, int c)
   {
    int solution;
     if (a==0){
     printf("a should not be 0.\n");
     } else if ((b*b-4*a*c) < 0){
     printf("The equation has no real solutions.\n");
     } else if ((b*b-4*a*c) == 0) {
     solution = -b/(2*a);
     printf("The equation has only one solution, which is %d\n",solution);
     } else if ((b*b-4*a*c) > 0) {
     solution = (-b+sqrt(b*b-4*a*c))/(2*a);
     printf("The first solution is %d\n", solution);
     }
    }
   
 void PrintSecondSolution(int a, int b, int c)
   {
    int solution;
     if ((b*b-4*a*c) > 0 && a!=0){
     solution = (-b-sqrt(b*b-4*a*c))/(2*a);
     printf("The second solution is %d\n", solution);
     }
    }
