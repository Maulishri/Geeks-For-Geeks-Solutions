#include<iostream>
using namespace std;
int main()
 {
     int n;
     cin>>n;
     while(n--)
     {
         int l;
         cin>>l;
         int a[l];
         for(int i=0; i<l; i++)
            cin>>a[i];
        int count=0;
        for(int i=0; i<l; i++)
        {
            for(int j=i+1; j<l; j++)
            {

                if((i*a[i])>(j*a[j]))
                    count++;
            }
        }
        cout<<count<<endl;
     }
	//code
	return 0;
}
