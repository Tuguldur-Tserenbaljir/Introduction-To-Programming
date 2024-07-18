
void find_third_largest(const int *num1, const int *num2, const int *num3,const int *num4, int *ptr_result){
    *ptr_result = 0;
    int dummy_array[4];
    dummy_array[0] = *num1;
    dummy_array[1] = *num2;
    dummy_array[2] = *num3;
    dummy_array[3] = *num4;
    for(int i =0 ; i<4;i++){
        for(int j =0 ; j<4;j++){
            if(dummy_array[j]> dummy_array[i]){
                int temp = dummy_array[i];
                dummy_array[i] = dummy_array[j];
                dummy_array[j] = temp;
            }
        }
    }

   /* for(int i =0 ; i<4;i++){
        printf("The numbers are %d\n", dummy_array[i]);
    }  */
    *ptr_result = dummy_array[1];
}