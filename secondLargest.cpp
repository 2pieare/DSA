#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int a,b,c;
	    cin>>a>>b>>c;
	    int f,s;
	    f=a; 
	    s=b;
	    if(b>a)
	    {
	        f=b;
	        s=a;
	    }
	    if(c>f)
	    {
	        s=f;
	        f=c;
	    }
	    else if(c>s)
	    {
	        s=c;
	    }
	    cout<<s<<endl;
	return 0;
}
