#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n>>q;
    vector<vector<int>> a;
   for (int i = 0; i < n; i++){

        int k;
       cin >> k;
       vector<int> vect_j;
       for (int j = 0; j < k; j++){
           int val;
           cin >> val;
           vect_j.push_back(val);
       }
       a.push_back(vect_j);
   }
   for (int i = 0; i < q; i++){
       int vect_id, id;
       cin >> vect_id >> id;
       cout << a.at(vect_id).at(id) << "\n";
   }
    return 0;
}
