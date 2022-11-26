//-1 if not reachable, 0 if reachable

#include <string>
#include <iostream>

using namespace std;

//won

int w[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8},
	       {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
	       {0, 4, 8}, {2, 4, 6}};
bool isValid(string g) {

  int x = 0;
  int o = 0;
  int xwin = 0;
  int owin = 0;

  //process nums
  //count x's and o's
  for (int i = 0; i < 9; i++) {
    char c = g[i];
    if (c == 'X') {
      x++;
    } else if (c == 'O') {
      o++;
    }
  }

  for (int j = 0; j < 8; j++) {
    int *wi = w[j];
    char c1 = wi[0];
    char c2 = wi[1];
    char c3 = wi[2];
    if (c1 == 'X' && c1 == c2 && c2 == c3) {
      xwin++;
    } else if (c1 == 'O' && c1 == c2 && c2 == c3) {
      owin ++;
    }
  }
  

  //check nums
  //x & o count either the same or x is 1 greater than o
  if (x != o){
    if (x != (o+1)) {
      return false;
    }
  }
  if (xwin + owin > 1) {
    //if both have won
    return false;
  }
  return true;

}

int whoWon(string g) {
  for (int j = 0; j < 8; j++) {
    wi = w[j];
    char c1 = wi[0];
    char c2 = wi[1];
    char c3 = wi[2];
    cout << c1;
    cout << c2;
    cout << c3;
    if (c1 == 'X' && c1 == c2 && c2 == c3) {
      return 1;
    } else if (c1 == 'O' && c1 == c2 && c2 == c3) {
      return -1;
    }
  }
  return 0;
}

int main() {

  //  cout << isValid("XX..O....");
  //  cout << isValid("X...OX...");
  //  cout << isValid("OOOX.X.X.");
  //  cout << isValid("OOOXXX...");

  cout << whoWon("XXX......");
}
