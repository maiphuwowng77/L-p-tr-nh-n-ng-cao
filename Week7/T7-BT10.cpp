void rFilter(char *s) {
    // Your code goes here
    string str=string(s);
    int n=str.length();
    for(int i=n-1;i>=0;i--){
        if(((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))){
            break;
        }else str[i]='_';
    }
    for(int i=0;i<n;i++){
        s[i]=str[i];
    }
}