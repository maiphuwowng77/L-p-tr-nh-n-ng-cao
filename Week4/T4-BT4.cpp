long long int factorial(int n)
{
    long long int giaithua=1;
    for(int i=1;i<=n;i++){
        giaithua*=i;
    }
    return giaithua;
}
