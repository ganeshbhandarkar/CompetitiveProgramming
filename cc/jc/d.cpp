
	#include <bits/stdc++.h>
	
	using namespace std;

	void floodfill(vector<vector<int>> &grid,int i,int j,int m,int n){
        //if(grid[i][j]=='*') return;
        if (i < 0 || j < 0
                || i >= grid.size()
                || j >= grid[0].size() || grid[i][j] != 1) return;
        grid[i][j]=4;
            floodfill(grid,i+1,j,m,n);
            floodfill(grid,i,j+1,m,n);
            floodfill(grid,i-1,j,m,n);
            floodfill(grid,i,j-1,m,n);
        //}
        
    }
    void numIslands(vector<vector<int>>& grid,int in1,int in2,int ta1,int ta2) {
        int ans =0;
        int m = grid.size();
        int n = grid[0].size();
        if(grid[in1][in2]==0){
        	cout<<'0'<<endl;
        	return;
        }
        floodfill(grid,in1,in2,m,n);
        if(grid[ta1][ta2]==4 && grid[in1][in2]==4){
        	cout<<'1'<<endl;
        }
        else {
        	cout<<'0'<<endl;
        }
        return;
    }

	int main()
	{
		std::ios::sync_with_stdio(false);
		int T;
		cin>>T;
		// cin.ignore(); must be there when using getline(cin, s)
		while(T--)
		{
			int m,n;cin>>m>>n;
			vector<vector<int>> grid;
			for(int i=0;i<m;i++){
	            vector<int> v1;
  
		        for (int j = 0; j < n; j++) {
		        	int num;cin>>num;
		            v1.push_back(num);
		        }
        		grid.push_back(v1);
	        }
	        int in1,in2,ta1,ta2;
	        cin>>in1>>in2;
	        cin>>ta1>>ta2;
	        in1--;in2--;ta1--;ta2--;
	        numIslands(grid,in1 ,in2,ta1, ta2);
		}
		return 0;
	}
