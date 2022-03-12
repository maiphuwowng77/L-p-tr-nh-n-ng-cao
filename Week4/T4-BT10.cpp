string toLower (string s)
{
    for(int i=0;i<s.length()-1;i++){
        if(s[i]<=90 && s[i]>=65){
            s[i]=s[i]+32;
        }
    }
    return s;
}
