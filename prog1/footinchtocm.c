/* Ch2.3
 * This program converts from feet and inches to centimeters.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

 main()
 {
    double feet,inch,cm;
    printf("This program converts from feet and inches to centimeters.\n");
    printf("Number of feet? ");
    feet = GetReal();
    printf("Number of inches? ");
    inch = GetReal();
    cm = feet * 30.48+inch * 2.54;
    printf("The corresponding length is %g cm.\n",cm);
}
