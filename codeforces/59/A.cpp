#include <iostream>
using namespace std;

int main() {
	// your code goes here
    char a[100];
    cin>>a;
    int upper = 0, lower = 0;
    for(int i = 0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            upper++;
        }
        
        else if(a[i]>='a' && a[i]<='z')
        {
            lower++;
        }
        
    }

    // cout<<upper<<" "<<lower;

    // for(int i = 0;a[i]!='\0';i++)
    // {
    //         if(upper>lower)
    //         {
    //             if(a[i]>='a' && a[i]<='Z')
    //             {
    //                 a[i]=a[i]-32;
    //                 continue;
    //             }
    //         }
    //         else if(lower>=upper)
    //         {
    //             if(a[i]>='A' && a[i]<='Z')
    //             {
    //                 a[i]=a[i]+32;
    //                 continue;
    //             }
    //         }
    // }

    if(upper>lower)
    {
            for(int i = 0;a[i]!='\0';i++)
        {
                
                    if(a[i]>='a' && a[i]<='z')
                    {
                        a[i]=a[i]-32;
                        
                    }
                
        }
        cout<<a;
        return 0;
    }
    else if(lower>=upper)
    {
            for(int i = 0;a[i]!='\0';i++)
        {
                
                    if(a[i]>='A' && a[i]<='Z')
                    {
                        a[i]=a[i]+32;
                        
                    }
                
        }
         cout<<a;
	    return 0;
    }



    // cout<<a;
	return 0;
}