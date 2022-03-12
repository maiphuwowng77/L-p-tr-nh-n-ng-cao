void printArrow(int n, bool left)
{
    if(left==false){
        for(int i=1;i<2*n;i++){
        	int m=i;
        	if(m>n) m=n-(m-n);
            for(int j=1;j<=2*m-2;j++){
                cout<<" ";
            }
            for(int j=1;j<=n+1-m;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=1;i<2*n;i++){
            int m=i;
        	if(m>n) m=n-(m-n);
            for(int j=1;j<=n-m;j++){
                cout<<" ";
            }
            for(int j=1;j<=n+1-m;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
