void reverse(char *s) {
    // Your code goes here
    string str=string(s);
    int n=str.length();
    for(int i=0;i<n;i++){
        str[i]=s[n-1-i];
    }
    for(int i=0;i<n;i++){
        s[i]=str[i];
    }
}