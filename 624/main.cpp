#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>


using namespace std;



int main()
{
  int num;
  cin >> num;
  std::vector<uint64_t> vec(num); 
  for (int i = 0; i < vec.size(); ++i)
  {
    cin >> vec[i];
  }
  std::sort(vec.begin(), vec.end());
  std::reverse(vec.begin(), vec.end());
  uint64_t sum = 0;
  uint64_t lastNum = -1;
  for (int i = 0; i < vec.size(); ++i)
  {
    if (lastNum == 1)
    {
      break;
    }
    uint64_t num = std::min(lastNum - 1, vec[i]);
    sum += num;
    lastNum = num;
  }

  std::cout << sum << std::endl;


}
