
void merge(int a[], int size1, int size2){
	int tmp;
    for(int i=0; i<size1+size2; i++)
    {
        for(int j=i+1; j<size1+size2; j++)
        {
            if(a[j] <a[i])
            {
            tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}