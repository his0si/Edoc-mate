#include <iostream>
#include <queue>
using namespace std

int main(){
  int a, b, c, d;
  int area[101][101];
  for(int i=0; i<4; i++){
    cin >> a >> b >> c >> d;
    for(int j=A; j<C; j++){
      for(int k=B; k<D; k++){
        area[j][k]=1;
      }
    } 
  }
  int result=0;
  for(int i=0; i<101; i++){
    for(int j=0; j<101; j++){
      if(area[i][j]==1) result++;
    }
  }
  cout << result << "\n";
  return 0;
}