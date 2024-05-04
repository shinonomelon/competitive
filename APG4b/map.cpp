#include <bits/stdc++.h>
using namespace std;

int main()
{
  // key:value users[key] = value
  map<string, int> users;
  users["Alice"] = 90;
  users["Child"] = 100;
  users["Bob"] = 80;

  for (auto user : users)
  {
    cout << user.first << " : " << user.second << endl;
  }

  users.erase("Bob");

  for (auto user : users)
  {
    cout << user.first << " : " << user.second << endl;
  }
  cout << users["Bob"] << endl;
  for (auto user : users)
  {
    cout << user.first << " : " << user.second << endl;
  }
  if (users.count("Alice"))
  {
    cout << "Alice is alive" << endl;
  }
  else
  {
    cout << "Alice is dead" << endl;
  }

  cout << users.size() << endl;

  for (pair<string, int> u : users)
  {
    string name = u.first;
    int points = u.second;

    cout << name << " : " << points << endl;
  }
}