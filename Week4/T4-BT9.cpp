void sort(float array[], int size, bool isAscending)
{
    
    float a[size];
    for(int i=0;i<size;i++){
        a[i]=array[size-1-i];
    }
    if(isAscending==true){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(array[j]>array[j+1]){
                    float m= array[j];
                    array[j]=array[j+1];
                    array[j+1]=m;
                }
            }
        }
    }
    else{
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(array[j]<array[j+1]){
                    float m= array[j];
                    array[j]=array[j+1];
                    array[j+1]=m;
                }
            }
        }
    }
}
