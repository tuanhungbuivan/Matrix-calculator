#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//easy matrix calculator
#define n 4
/*
1 2 3 4
2 3 1 2
1 1 1 -1
1 0 -2 -6

9 8 7 6
1 3 5 7
3 5 7 9
1 4 6 8
*/
void add(vector<vector<int> >  &x,int a);
void sum(vector<vector<int> >a, vector<vector<int> > b);
void sub(vector<vector<int> >a, vector<vector<int> > b);
void mult(vector<vector<int> >a, vector<vector<int> > b);
void rev();
void trans(vector<vector<int> >a, vector<vector<int> > b,vector<vector<int> >c, vector<vector<int> > d);

int main()
{
     int num=0;
     vector<vector<int> >m1;
     vector<vector<int> >m2;
     vector<vector<int> >m3;
     vector<vector<int> >m4;
     printf("Insert first 4x4 matrix: \n");
     add(m1,1);
     printf("Insert second 4x4 matrix: \n");
     add(m2,2);
     m3=m1;
     m4=m2;
     do{
          system("CLS");
          printf("Insert your choice from 1 to 5: \n");
          printf("1 - Sum matrixes\n");
          printf("2 - Subtract matrixes\n");
          printf("3 - Multiply matrixes\n");
          printf("4 - Reverse a matrix\n");
          printf("5 - Transporting matrixes\n");
          printf("6 - Close the terminal\n\n");
          printf("Your inserted chocie: ");
          cin>>num;
          printf("\n");
          switch(num){
          case 1:
               sum(m1,m2);
               break;
          case 2:
               sub(m1,m2);
               break;
          case 3:
               mult(m1,m2);
               break;
          case 4:
               rev();
               break;
          case 5:
               trans(m1,m2,m3,m4);
               break;
          case 6:
               break;
          }
     }while(num!=6);
     return 0;
}
