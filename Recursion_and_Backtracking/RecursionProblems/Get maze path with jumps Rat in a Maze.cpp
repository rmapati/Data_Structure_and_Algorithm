#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {
  //Write your code here
    if(sr==dr&&sc==dc)
    {
        vector<string>res;
        res.push_back("");
        return res;
    }
    vector<string>myres;
    for(int jump=1;jump<=dc-sc;jump++)
    {
       vector<string>res= get_maze_paths(sr,sc+jump,dr,dc);
       for(string str:res)
       {
           myres.push_back("h"+to_string(jump)+str);
       }
    }
    for(int jump=1;jump<=dr-sr;jump++)
    {
        vector<string>res=get_maze_paths(sr+jump,sc,dr,dc);
        for(string str:res)
        {
            myres.push_back("v"+to_string(jump)+str);
        }
    }
    for(int jump=1;jump<=dr-sr&&jump<=dc-sc;jump++)
    {
        vector<string>res=get_maze_paths(sr+1,sc+1,dr,dc);
       for(string str:res)
       {
           myres.push_back("d"+to_string(jump)+str);
       }
    }
    return myres;
    

  
}

void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}
