/*----- FILE PUSHPOP.C -----------------------------------------------*/
/*                                                                    */
/* A push and pop function for a stack of integers                    */
/*--------------------------------------------------------------------*/
#include <stdlib.h>
#include "CALC.h" // included CALC.h header file
/*--------------------------------------------------------------------*/
/* input:  stk - stack of integers                                    */
/*         num - value to push on the stack                           */
/* action: get a link to hold the pushed value, push link on stack    */

extern void push(IntStack *stk, int num)
{
  IntLink *ptr;
  ptr = (struct int_link *)malloc(sizeof(IntLink)); /*  PUSHPOP1   */
  ptr->i = num;            //changed -> to ->                         /*  PUSHPOP2  statement */
  ptr->next = stk->top;    //changed -> to ->
  stk->top = ptr;           //changed -> to ->
}
/*--------------------------------------------------------------------*/
/* return: int value popped from stack                                */
/* action: pops top element from stack and gets return value from it  */
/*--------------------------------------------------------------------*/
extern int pop(IntStack *stk)
{
  IntLink *ptr;
  int num;
  ptr = stk->top;       //changed -> to ->
  num = ptr->i;         //changed -> to ->
  stk->top = ptr->next;   //changed -> to ->
  free(ptr);
  return num;
}
