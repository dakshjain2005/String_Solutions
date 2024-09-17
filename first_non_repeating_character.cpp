//Given a string s consisting of lowercase Latin Letters. Return the first non-repeating character in s. If there is no non-repeating character, return '$'.
//Note : When you return '$' driver code will output -1.

//code:

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        
       //Your code here
       //char ans = 'a';
      int n = S.length();
      //cout<<n<<endl;
      int count = 0;
      map<char, int> mp;
      for(int i = 0; i < n; i++){
          mp[S[i]]+=1;
	   }
        map<char, int>::iterator it = mp.begin();
	
    	for(int i = 0; i < n; i++){
    	    int  freq = mp[S[i]];
    		//cout << S[i]<<" "<<freq<<" ";
    		if(freq == 1){
    		    return S[i];
    		}
    		
    	}
    	return '$';
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends
