#include<string>
#include<map>
using namespace std;
char print(string str)
{
    map<char,int> m;
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
 
    for(auto it : m){
        if(it.second>1)
          return it.first;
    }
}