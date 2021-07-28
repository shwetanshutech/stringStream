#include <bits/stdc++.h>
using namespace std;

signed main()
{
  string s = "123445678"; //in the form of string

  //object from class string stream
  stringstream ss(s);
  int number = 0;

  //The way u could use cin>>number
  ss >> number;

  cout << "The number int value is : " << number;
  return 0;
}
