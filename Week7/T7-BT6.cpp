int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int* Arr;
    Arr=new int[lenArr1+lenArr2];
    for(int i=0;i<lenArr1;i++){
        Arr[i]=firstArr[i];
    }
    for(int i=lenArr1;i<lenArr1+lenArr2;i++){
        Arr[i]=secondArr[i-lenArr1];
    }
    if(firstArr[1]>=firstArr[0]&&firstArr[2]>=firstArr[1]){
        sort(Arr,Arr+lenArr1+lenArr2);
    }else sort(Arr,Arr+lenArr1+lenArr2,greater<int>());
    return Arr;
}