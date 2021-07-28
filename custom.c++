#include <bits/stdc++.h>
using namespace std;

signed main()
{
  string str1 = "We-are-learning-string-stream";
  string str2 = "We love Reading Medium Blogs";

  //Declare string stream for above two strings
  stringstream ss1(str1);
  stringstream ss2(str2);

  string word;
  vector<string> words;
  int count = 0;
  // use getline instead of cin to provide custom separator

  //for str1
  while (getline(ss1, word, '-'))
  {
    words.push_back(word);
    count++;
  }

  //Printing for string 1
  cout << "No of words in String 1 is : " << count;
  for (string word : words)
  {
    cout << word << endl;
  }
  //resetting the vector to put for string 2
  words.assign(words.size(), "");
  count = 0;

  //for str2
  while (getline(ss2, word, ' '))
  {
    words.push_back(word);
    count++;
  }

  //Printing for string 2
  cout << "No of words in String 2 is : " << count;
  for (string word : words)
  {
    cout << word << endl;
  }

  return 0;
}