#include <iostream>
using namespace std;

int binarySearch(int *arr, int x, int n) {
  int low = 0;
  int high = n;
  while (low < high) {
      int mid = (low + high) / 2;
      int curr = arr[mid];
      if (curr >= x) {
	high = mid;
      }
      else if (curr < x) {
	low = mid + 1;
	  }
    }
  return high;
}


int main() {
  int n;
  cin >> n;

  int li[1000000];

  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    li[i] = tmp;
  }

  int key;
  int ans = binarySearch(li, key, n);
  if (ans < n && li[ans] == key) {
    cout << ans;
    }
  else {
    cout << -1;
  }

  // cin >> key;


  // //start the binary searching
  // int low = 0;
  // int high = n-1;
  // bool failed = true;
  // int curr = 0;
  // while (low <= high) {
  //   curr = (low + high) / 2;
  //   if (li[curr] < key) {
  //     low = curr + 1;
  //   }
  //   else if (li[curr] < key) {
  //     high = curr - 1;
  //   }
  //   else {
  //     cout << curr;
  //     failed = false;
  //   }
  // }
  // if (failed) {
  //   cout << -1;
  // }
  // //cout << n;
  // //cout << key;
}
