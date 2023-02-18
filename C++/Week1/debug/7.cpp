// Debug the given code
//
// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i - 1; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }


#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i ; j++) {
      printf("  ");
    }
    for (int j = 0; j < i; j++) {
      printf("%d ", j+i);
    }
    int ele = (2 * i)-2 ;
    for (int j = 1; j < i ; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }
  return 0;
}

