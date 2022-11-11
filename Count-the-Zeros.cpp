#include <iostream>
using namespace std;

int main() {
	//code
	int n,l;
	cin>>n;
	while(n>0)
	{
	    int count=0;
	    cin>>l;
	    int a[l];
	    for(int i=0; i<l; i++)
	        cin>>a[i];
	    for(int i=0; i<l; i++)
	    {
	        if(a[i]==0)
	           break;
	       else
	        {
	            count++;
	            continue;
	        }
	    }
	    cout<<l-count<<endl;
	    n--;
	}
	return 0;
}
