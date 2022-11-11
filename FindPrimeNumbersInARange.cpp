#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	while(n>0)
	{
	    int f,l;
	    cin>>f>>l;
	    for(int i=f; i<=l; i++)
	    {   
	        int count=0;
	        if(i==1)
	            continue;
	        for(int j=2; j<i; j++)
	        {
	            if(i%j==0)
	                count++;
	        }
	        if(count==0)
	            cout<<i<<" ";
	    }
	    cout<<endl;
	    n--;
	}
	return 0;
}
