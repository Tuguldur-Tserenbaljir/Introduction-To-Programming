#include <stdio.h>
#include <stdlib.h>

struct stack{
    int *stack_buffer;
    int top;
    int max_size;
};
void stack_init(struct stack *s, int size){
  
   /* your work */
   
}

int KQueens(struct stack *s)
{

   /* your work */
   /* you should return the number of solutions */

}

void stack_destroy(struct stack *s){

   /* your work */

}


/*Main Body*/
int main(){
    int K = 0;
    scanf("%d", &K);
    struct stack Rec_Stack;
    stack_init(&Rec_Stack, K);

    printf("A total of %d solutions for %d-Queens problem.\n", KQueens(&Rec_Stack), K);

    stack_destroy(&Rec_Stack);
    return 0;
}
