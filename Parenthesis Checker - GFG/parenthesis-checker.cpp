//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        
        stack<char>num;
        
        for(int i = 0; i < x.size(); i++){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                num.push(x[i]);
            }else{
                if(!num.empty()){
                    char top = num.top();
                    if(top == '(' && x[i] == ')' || top == '{' && x[i] == '}' || top == '[' && x[i] == ']'){
                        num.pop();
                    }else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        if(num.empty()){
            return true;
        }else{
            false;
        }
    }
};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends