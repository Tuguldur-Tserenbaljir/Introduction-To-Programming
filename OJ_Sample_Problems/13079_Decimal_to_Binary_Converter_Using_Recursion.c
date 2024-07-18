
void dec2bin(int num){
    if(num == 0){
        return;
    }else{
        dec2bin(num/2);
        printf("%d", num%2);
    }
}