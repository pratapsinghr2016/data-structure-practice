#include <bits/stdc++.h>
using namespace std;

void decimalToBinary()
{
  int n;
  cin >> n;
  int arr[32];
  int i = 0;
  while (n > 0)
  {
    int remainder = n % 2;
    arr[i] = remainder;
    n = n / 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
  {
    cout << arr[j];
  }
}

void binaryToDecimal()
{
  int n, i = 0, decimalDigit = 0;
  cin >> n;
  while (n > 0)
  {
    int digit = n % 10;
    int powered = pow(2, i);
    decimalDigit = decimalDigit + powered * digit;
    n = n / 10;
    i++;
  }
  cout << decimalDigit;
}

void decimalToOctal()
{
  int n, arr[999], i = 0;
  cin >> n;
  while (n > 0)
  {
    arr[i] = n % 8;
    n = n / 8;
    i++;
  }
  for (int j = i - 1; j >= 0; j--)
  {
    cout << arr[j];
  }
}

void octalToDecimal()
{
  int n, i = 0, sum = 0;
  cin >> n;
  while (n > 0)
  {
    int digit = n % 10;
    int poweredProduct = pow(8, i) * digit;
    sum = sum + poweredProduct;
    n = n / 10;
    i++;
  }
  cout << sum;
}

void decimalToHexa()
{
  int n, i = 0;
  char arr[999];
  cin >> n;
  while (n > 0)
  {
    int remainder = n % 16;
    if (remainder > 10)
    {
      arr[i] = '7' + remainder;
    }
    else
    {
      arr[i] = '0' + remainder;
    }
    i++;
    n = n / 16;
  }
  for (int j = i - 1; j >= 0; j--)
  {
    cout << arr[j];
  }
  // cout << endl ----------->>HOW TO GET ASCII VALUE IN CPP
  //      << int('7');
}

void hexaToDecimal()
{
}

int main()
{
  // decimalToBinary();
  // binaryToDecimal();
  // decimalToOctal();
  // octalToDecimal();
  // decimalToHexa();
  hexaToDecimal();
  return 0;
}