double calculate (double num1, char operat, double num2)
{
    
    switch(operat){
        case '+':
        {
            return (num1+num2)*1.00;
        }
        case '-':
        {
            return (num1-num2)*1.00;
        }
        case '*':
        {
            return num1*num2*1.00;
        }
        case '/':
        {
            if(num2!=0) return num1*1.00/num2;
        }
    }
}
