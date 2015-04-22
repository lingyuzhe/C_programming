/* Jing Zhang 912448213
 * This program gives the solutions to quadratic equation
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#include "math.h"

    void PrintFirstSolution(double a, double b, double c);
    void PrintSecondSolution(double a, double b, double c);

    main()
    {
     double a,b,c;
     printf("a: ");
     a=GetReal();
     printf("b: ");
     b=GetReal();
     printf("c: ");
     c=GetReal();
     PrintFirstSolution(a,b,c);
     PrintSecondSolution(a,b,c); 
    }

   void PrintFirstSolution(double a, double b, double c)
   {
    double solution;
     if (a==0){
     printf("a should not be 0.\n");
     } else if ((b*b-4*a*c) < 0){
     printf("The equation has no real solutions.\n");
     } else if ((b*b-4*a*c) == 0) {
     solution = -b/(2*a);
     printf("The equation has only one solution, which is %g\n",solution);
     } else if ((b*b-4*a*c) > 0) {
     solution = (-b+sqrt(b*b-4*a*c))/(2*a);
     printf("The first solution is %g\n", solution);
     }
    }

   void PrintSecondSolution(double a, double b, double c)
   {
    double solution;
     if ((b*b-4*a*c) > 0 && a!=0){
     solution = (-b-sqrt(b*b-4*a*c))/(2*a);
     printf("The second solution is %g\n", solution);
     }
    }
