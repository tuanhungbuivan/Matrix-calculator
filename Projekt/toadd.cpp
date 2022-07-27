#include <iostream>
#include <vector>

using namespace std;
#define n 4

void add(vector<vector<int> > &x,int a)
{

     //inserting a matrix
     int i,j,num;
     for(i=0;i<n;i++){
          vector<int>temp;
          for(j=0;j<n;j++){
               cin>>num;
               temp.push_back(num);
          }
          x.push_back(temp);
     }
     cout<<endl;

     cout<<"Inserted "<<a<<" matrix"<<endl;
     for(i=0;i<x.size();i++){
          for(j=0;j<x[i].size();j++){
               cout<<x[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
}
