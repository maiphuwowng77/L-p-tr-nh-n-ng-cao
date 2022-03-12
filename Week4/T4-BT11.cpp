string pigLatin(string word)
{
    if(word[0]=='u'||word[0]=='e'||word[0]=='o'||word[0]=='a'||word[0]=='i'){
        string s="way";
        word = word + s;
    }else{
        char m=word[0];
        for(int i=0;i<word.length()-1;i++)
        {
            word[i]=word[i+1];
        }
        word[word.length()-1]=m;
        word=word+"ay";
    }
    return word;
}
