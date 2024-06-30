#include <iostream>
using namespace std;

#include <map>
int main()
{
  // inbuilt implementation
  // time complexity
  // valid keys datatype

  map<string, int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string x;
    cin >> x;

    v[x]++;
  }
  // map<string, int>::iterator it = v.begin();
  // for (it; it != v.end(); it++)
  // {
  //   cout << (*it).first << " " << (*it).second << endl;
  // }
  for (auto pr : v)
  {
    cout << pr.first << " " << pr.second << endl;
  }
  return 0;
}