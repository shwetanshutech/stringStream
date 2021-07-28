#include <bits/stdc++.h>
using namespace std;

signed main()
{
  string str = "You can find the explaination in my Medum Blog";
  //Now i will declare string stream for str defined above
  stringstream ss(str);
  string word;
  vector<string> words;
  //lets take a count for number of number of words
  int count = 0;
  while (ss >> word)
  {
    words.push_back(word);
    count++;
  }

  cout << "No of words : " << count << endl;
  cout << "The words in string are : " << endl;
  for (string word : words)
  {
    cout << word << endl;
  }
  return 0;
}