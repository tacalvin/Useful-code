#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& v)
{
  int len = v.size();
  for(int i =0; i < len -1; ++i)
  {
    for(int y =0; y < (len - i - 1); ++ y)
    {
      if(v.at(y) > v.at(y+1))
      {
        swap(v.at(y),v.at(y+1));
        
      }
    }
  }


}

int main()
{
  vector<int> v = {2,3,1,5,6,23,34,5,2,17};
  bubbleSort(v);
  for(int i =0; i < v.size(); ++i)
  {
    cout << v.at(i) << " ";
  }
  return 0;
}
