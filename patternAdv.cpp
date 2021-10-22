#include <bits/stdc++.h>
using namespace std;

void invertedPattern()
{
  int n;
  cin >> n;
  int count = 5;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= count; j++)
    {
      cout << j << " ";
    }
    count = count - 1;
    cout << endl;
  }
}

void oneZeroPattern()
{
  int n;
  cin >> n;
  int count = 5;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        cout << 1;
      }
      else
      {
        cout << 0;
      }
    }
    cout << endl;
  }
}

void rhombusPattern()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void numberPyramidPatter()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << " " << j;
    }
    cout << endl;
  }
}

void palindromicPatter()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int count = 0;
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
      count = count + 1;
    }
    for (int j = n - count; j >= 1; j--)
    {
      cout << j;
    }
    for (int j = 1; j <= i; j++)
    {
      if (j != 1)
      {
        cout << j;
      }
    }
    cout << endl;
  }
}

int starPattern()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= i; j++)
    {
      if (j != 1)
      {
        cout << "*";
      }
    }
    cout << endl;
  }

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= i; j++)
    {
      if (j != 1)
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}

void zigZagPattern()
{
  int n;
  cin >> n;
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
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

void numberPyramidRev()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void triangleRevision()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout << " ";
    }
    for (int j = i; j <= n; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}

int main()
{
  // invertedPattern();
  // oneZeroPattern();
  // rhombusPattern();
  // numberPyramidPatter();
  // palindromicPatter();
  // starPattern();
  // zigZagPattern();

  // numberPyramidRev();
  triangleRevision();
  return 0;
}