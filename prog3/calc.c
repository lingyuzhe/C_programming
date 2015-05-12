
      /*
       * Jing Zhang 912448213
       * This program implements a simple calculator:
       * (1) consisting of integer constants and the operators
       * (2) calculate from left to right
       */

	#include <stdio.h>
	#include <ctype.h>
	#include "genlib.h"
	#include "strlib.h"
	#include "simpio.h"
	#include "scanner.h"
	#include "math.h"

	/* Private Function Prototype */

        static void calculate(string str);
        static bool IsOperator (string str);
        static int StringToOperator(string str);
        static bool IsInteger (string str);

	/* Constants */

	#define TRUE 1
	#define FALSE 0

       /* Main program */

       main()
       {
            string expression;

            printf("This program implements a simple calculator.\n");
            printf("When the > prompt appears, enter an expression\n");
            printf("consisting of integer constants and the operators\n");
            printf("+, -, *, / and %. To stop, enter a blank line.\n");

            while(TRUE)
            {
              printf("> ");
              expression = GetLine();
              if (StringLength(expression) == 0) {
              break;      // Stop if people enters a blank line.
             } 

              expression = Concat("+",expression);  // add "+" at the beginning of the equation for later use.
              calculate(expression);  // the return type of calculate function is void, the answer will be printed.
            }
       }

       /*
     * Function: calculate
     * Usage: calculate(str)
     * -------------------------
     * print out the answer if the expression is legal;
     * print error if the expression is illegal;
     */

    void calculate(string str)
    {
    	int answer=0;
    	int n,o;
    	string number, operator;

    	InitScanner(str);
    	SkipWhitespace(TRUE);   //The space has no meaning in the expression

    	while(!AtEndOfLine())
    	{
    		operator = GetNextToken();
    		if(IsOperator(operator)) {     // To see if the token is an operator
    			o = StringToOperator(operator);    // get the operator(string) and translate it to an integer case
    		} else {
        		printf("Error: The expression is illegal.\n");
    			return;
    		}

    		if (!AtEndOfLine()) {                // To see if there is something after the operator
    			number = GetNextToken();
    			if(IsInteger(number)){     // To see if the token is an integer
    				n = StringToInteger(number);   // get the number(string) and translate it to an integer
    			} else {
            		printf("Error: The expression is illegal.\n");
    				return;
    			}
    		} else {
        		printf("Error: The expression is illegal.\n");
				return;
    		}

    			switch (o) {    // calculate the answer based on different operator sign
    			case 1: answer = answer + n; break;
    			case 2: answer = answer - n; break;
    			case 3: answer = answer * n; break;
    			case 4: answer = answer / n; break;
    			case 5: answer = answer % n; break;
    			}
    	}
    		printf("%d\n",answer);
    }

    /*
     * Function: IsOperator
     * Usage: IsOperator(str)
     */
    bool IsOperator (string str)
    {
    	char c;

    	if (StringLength(str) == 1) {
    		c = IthChar(str,0);
    		if ( c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
    			return (TRUE);
    		} else {
    			return (FALSE);
    		}
    	} else {
    		return (FALSE);
    	}
    }

    /*
     * Function: StringToOperator
     * Usage: StringToOperator(str)
     */

    int StringToOperator(string str)
    {
    	char c;
    	c= IthChar(str,0);

    	switch(c) {
    	case '+': return(1); break;
    	case '-': return(2); break;
    	case '*': return(3); break;
    	case '/': return(4); break;
    	case '%': return(5); break;
    	}
    }

    /*
     * Function: IsInteger
     * Usage: IsInteger(str)
     */
    bool IsInteger (string str)
    {
    	int i;
    	char c;

    	for (i=0;i<StringLength(str); i++)
    	{
    		c = IthChar(str,i);
    		if (!isdigit(c)) return (FALSE);
    	}
    	return (TRUE);
    }
