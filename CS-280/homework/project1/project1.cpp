#include<iostream>
#include<sstream>
#include<string>
// #include<cctype>
#include<vector>
using namespace std;

struct flag {
  string flag, name;
};

vector<string> splitString(const string &str, const char delim) {
  stringstream ss(str);
  string item;

  vector<string> res;

  while(getline(ss, item, delim))
    res.push_back(item);

  return res;
}

int main() {
  vector<flag> flags = {
    { "-q", "Quiet Mode"  },
    { "-s", "Squish Mode" },
    { "-c", "Censor Mode" },
    { "-p", "Print Mode"  },
    { "-l", "Length Mode" }
  };

  find(flags.begin(), flags.end(), '-p');

  // auto x = flags.begin();

  // cout << flags[0].flag;
}
