#include <bits/stdc++.h>
using namespace std;

int fun(int a[],int n)
{
    int i,c=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            c++;
        }
       
    }
   
    if(c==1)
    return 1;
    else
    return 0;
}
int main() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    //cout<<fun(a,n);
   	int cnt = 0;
    for(int i=0;i<n-1;i++){
    	for(int j=i+1;j<n;j++){
    		if(a[i]>a[j]){
    			a[i] = a[j] - 1;
    			cnt++;
    		}
    	}
    }
    if(cnt == 1 || cnt == 0){
    	return cout<<"true"<<endl,0;
    }else{
    	return cout<<"false"<<endl,0;
    }
}

#include <bits/stdc++.h> 
using namespace std; 

  

bool isPossible(int a[], int n) 
{ 
    

    int cur = a[0]; 

  
    

    cur--; 

  
     

    for (int i = 1; i < n; i++) { 

  
        

        int nxt = a[i]; 

  
        

        if (nxt > cur) 

            nxt--; 

  
        

        else if (nxt < cur) 

            return false; 

  
 

        cur = nxt; 

    } 

  
  

    return true; 
} 
  

int main() 
{ 
    int a[] = { 1, 2, 1, 2, 3 }; 

    int n = sizeof(a) / sizeof(a[0]); 

  
    if (isPossible(a, n)) 

        cout << "Yes"; 

    else

        cout << "No"; 

  
    return 0;
}