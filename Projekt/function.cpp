#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
#define n 4
#define s 10


void sum(vector<vector<int> >a, vector<vector<int> > b)
{
     //sum
     int num=0;
     vector<vector<int> > nowa;
     for(int i=0;i<a.size();i++){
          vector<int> temp;
          for(int j=0;j<a[i].size();j++){
               num=a[i][j]+b[i][j];
               temp.push_back(num);
               num=0;
          }
          nowa.push_back(temp);
     }
     printf("Matrix after adding up: \n");
     for(int i=0;i<nowa.size();i++){
          for(int j=0;j<nowa[i].size();j++){
               cout<<nowa[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
}

void sub(vector<vector<int> >a, vector<vector<int> > b)
{
     //subtract
     int num=0;
     vector<vector<int> > nowa;
     for(int i=0;i<a.size();i++){
          vector<int> temp;
          for(int j=0;j<a[i].size();j++){
               num=a[i][j]-b[i][j];
               temp.push_back(num);
               num=0;
          }
          nowa.push_back(temp);
     }
     printf("Matrix after subtracting: \n");
     for(int i=0;i<nowa.size();i++){
          for(int j=0;j<nowa[i].size();j++){
               cout<<nowa[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;

}

void mult(vector<vector<int> >a, vector<vector<int> > b)
{
     //multiply
     int num=0;
     vector<vector<int> > nowa;
     for(int i=0;i<a.size();i++){
          vector<int> temp;
          for(int j=0;j<a[i].size();j++){
               num=a[i][j]*b[i][j];
               temp.push_back(num);
               num=0;
          }
          nowa.push_back(temp);
     }
     printf("Matrix after multiplying: \n");
     for(int i=0;i<nowa.size();i++){
          for(int j=0;j<nowa[i].size();j++){
               cout<<nowa[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;

}

void rev()
{
     cout<<setprecision(5)<<endl;

     float temp[s][s];
     printf("Insert matrix that you want to reverse: \n");
     int i,j,k;
     //reverse
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               cin>>temp[i][j];
          }
     }
     cout<<endl;
     float ran=0;
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if(i==j) temp[i][j+n]=1;
               else temp[i][j+n]=0;
          }
     }
     for(i=0;i<n;i++){
          if(temp[i][i] == 0.0){
               cout<<"Mathematical Error!";
               exit(0);
          }
          for(j=0;j<n;j++){
               if(i!=j){
                    ran = temp[j][i]/temp[i][i];
                    for(k=0;k<2*n;k++){
                         temp[j][k] = temp[j][k] - ran*temp[i][k];
                    }
               }
          }
     }
     for(int i=0;i<n;i++){
          for(int j=n;j<2*n;j++){
               temp[i][j]=temp[i][j]/temp[i][i];
          }
     }
     printf("Reversed matrix: \n");
     for(int i=0;i<n;i++){
          for(int j=n;j<2*n;j++){
               cout<<temp[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
}
void trans(vector<vector<int> >a, vector<vector<int> > b,vector<vector<int> >c, vector<vector<int> > d)
{
     //transporting matrixes
     for(int i=0;i<a.size();i++){
          for(int j=0;j<a[i].size();j++){
               a[i][j]=c[j][i];
               b[i][j]=d[j][i];
          }
     }

     printf("First matrix after transporting: \n");
     for(int i=0;i<a.size();i++){
          for(int j=0;j<a[i].size();j++){
               cout<<a[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
     printf("Second matrix after transporting: \n");
     for(int i=0;i<a.size();i++){
          for(int j=0;j<a[i].size();j++){
               cout<<b[i][j]<<" ";
          }
          cout<<endl;
     }
     cout<<endl;
}
