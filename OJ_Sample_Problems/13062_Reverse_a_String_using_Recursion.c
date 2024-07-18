void reverse(char *str, int k){
    unsigned int len=strlen(str);
    if(k==len/2||k==len/2+1){
        //termination condition lalaraa
    }else{
        char tmp=str[k];
        str[k]=str[len-1-k];
        str[len-1-k]=tmp;
        reverse(str,k+1);
    }

}