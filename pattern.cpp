#include <bits/stdc++.h>
using namespace std;

void hollowRec0()
{
  int rows, col;
  cin >> rows >> col;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == 0 || i == rows - 1 || j == 0 || j == col - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void invertedPyramid()
{
  int rows, col;
  cin >> rows >> col;
  for (int i = 0; i <= rows; i++)
  {
    for (int j = 1; j <= col - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void invertedPyramid180()
{
  int rows, col;
  cin >> rows >> col;
  for (int i = 1; i <= col; i++)
  {
    for (int j = 1; j <= col; j++)
    {
      if (j <= col - i)
      {
        cout << " ";
      }
      else
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}

void numberHalfPyramid()
{
  int rows, cols;
  cin >> rows >> cols;
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= cols; j++)
    {
      if (i >= j)
        cout << i;
      else
        break;
    }
    cout << endl;
  }
}

void floydTriangle()
{
  int n;
  cin >> n;
  int count = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {

      cout << count << " ";
      count++;
    }
    cout << endl;
  }
}

void butterFly()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = 2 * n - 2 * i;
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = 4; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = 2 * n - 2 * i;
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  // hollowRec0();
  // invertedPyramid();
  // invertedPyramid180();
  // numberHalfPyramid();
  floydTriangle();
  // butterFly();

  return 0;
}