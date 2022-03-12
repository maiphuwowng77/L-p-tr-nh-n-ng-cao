bool isPrime (int number)
{
    if(number<=1) return false;
    else{
        if(number==2||number==3) return true;
        else{
            bool a= true;
            for(int i=2;i<=number/2;i++){
                if(number%i==0){
                    a= false;
                    break;
                }
            }
            if(a==true) return true;
            else return false;
        }
    }
}
