/*----- FILE CALC.H --------------------------------------------------*/
/*                                                                    */
/* Header file for CALC.C PUSHPOP.C READTOKN.C                        */
/* a simple calculator                                                */
/*--------------------------------------------------------------------*/
typedef enum // removed toks 
{
  T_INTEGER,
  T_PLUS,
  T_TIMES,
  T_MINUS,
  T_DIVIDE,
  T_EQUALS,
  T_STOP
} Token;
extern Token read_token(char buf[]); //added extern
typedef struct int_link
{
  struct int_link *next;
  int i;
} IntLink;
typedef struct int_stack
{
  IntLink *top;
} IntStack;
extern void push(IntStack *stk, int num); // structure variable *stk was included
extern int pop(IntStack *stk); // structure variable *stk was included
