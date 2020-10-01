// Name : Linear Search Algorithm 
// Complexity : O(n)
// space complexity : O(1)

// problem statement : Given n space seperated no, search for a given specific number.
#pragma GCC "Ofast"
#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(vector<int> v1, int target) {
 
 // enhanced for loop
  for(int x : v1)
    if(x == target)
      return true;
      
  return false;
}

int main() {
  int n;
  cin>>n;
  
  vector<int> v1;
  // N space seperated integers
  while(n--){
  int x;
  cin>>x;
  v1.push_back(x);
  }
  
  // Enter element to be search
  int element;
  cin>>element;
  
  string result = LinearSearch(v1, element) ? "Found" : "Not Found" ;
 // prints the result of the search
  cout<< result << '\n';
  
  return 0;
}
