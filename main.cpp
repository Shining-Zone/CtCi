#include <iostream>

using namespace std;

class Solution {
 public:
  bool canArrange(vector<int>& arr, int k) {
    for (int index = 0; index < arr.size(); index++) {
      arr[index] = (arr[index] % k + k) % k;
    }

    sort(arr.begin(), arr.end());

    int start = 0, end = arr.size() - 1;
    while (start < end) {
      if (arr[start] % k != 0) break;
      if (arr[start + 1] % k != 0) return false;
      start += 2;
    }
    while (start < end) {
      if ((arr[start] + arr[end]) % k != 0) return false;
      start++;
      end--;
    }
    return true;
  }
};

int main() {
  int retVal = (-4) % 5;

  cout << retVal << endl;
  cout << "GGGG" << endl;
}