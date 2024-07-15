    #include<stdio.h>
    #include <stdlib.h>
    struct stack{
        int *stack_buffer;
        int top;
        int max_size;
    };
    void stack_init(struct stack *s, int size){
    }

    int KQueens(struct stack *s)
    {

    }

    void stack_destroy(struct stack *s){

    }

    int a[30],count=0;
    //row=index and column=value
    int place(int pos)
    {   /*
       checks if we have another queen in the same column,daignal, row
     */
        int i;
        for(i=1;i<pos;i++)
        {
            if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
                /*
                 a[i] the current queen we are checking
                 */
                return 0;
        }
        return 1; //says that we can place the queen
    }
    void print_sol(int n)
    {
        int i,j;
        count++; //stores solution number
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                
                if(a[i]==j)
                    printf("%d %d ",i,j);
            }
        }

        printf("\n");
    }
    void Kqueens(int n)
    {
        int k=1; //queen number
        a[k]=0; //storing the first queen on the zero th column
        while(k!=0)
        {
            do
            {
                a[k]++; //checking if we can place the first queen in 1st position
            }while((a[k]<=n)&&!place(k));// go through loop until columns=n
            // if we cannot place it here, keep going through the do loop
            if(a[k]<=n)  //checks if we continue
            {
                if(k==n)//checks if we have placed all the queens
                    print_sol(n);
                else
                {
                    k++; //moves onto the 2nd queen
                    a[k]=0; //initialize columns value to 0
                }
            }
            else
                k--; //ends the while loop,removes the misplaced queen increment
        }
    }
    void main()
    {
        int K;
        scanf("%d",&K);
        Kqueens(K); //feeding the variable to the function
        printf("A total of %d solutions for %d-Queens problem.\n", count, K);
    }