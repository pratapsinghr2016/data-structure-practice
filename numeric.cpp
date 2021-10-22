#include <bits/stdc++.h>
using namespace std;

void primeNumber()
{
  int n;
  cin >> n;
  int count = 0;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      count = count + 1;
    }
  }
  if (count == 0)
  {
    cout << "Prime";
  }
  else
  {
    cout << "Not Prime";
  }
}

void palindrome()
{
  int n;
  cin >> n;
  int reverse = 0;
  while (n > 0)
  {
    int ones = n % 10;
    reverse = reverse * 10 + ones;
    n = n / 10;
  }
  cout << reverse;
}

void palindropeRev()
{
  int n;
  cin >> n;
  int reverse = 0, unit, backup = n;
  while (n > 0)
  {

    unit = n % 10;
    reverse = reverse * 10 + unit;
    n = n / 10;
  }
  if (backup == reverse)
  {
    cout << "Palindrome";
  }
  else
  {
    cout << "Not Palindrome\t" << reverse;
  }
}

void armstrong()
{
  int n;
  cin >> n;
  int temp = n;
  int sum = 0;
  while (n > 0)
  {
    int unit = n % 10;
    sum = sum + pow(unit, 3);
    n = n / 10;
  }
  if (sum == temp)
  {
    cout << "Armstrong\t" << sum;
  }
  else
  {
    cout << "Not Armstrong\t" << sum;
  }
}

bool givePrimeNumber(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

void primeBetween()
{
  int start, end;
  cin >> start >> end;
  for (int i = start; i < end; i++)
  {
    bool response = givePrimeNumber(i);
    if (response)
    {
      cout << i << endl;
    }
  }
}

void fibonacci()
{
  int n;
  cin >> n;
  int t1 = 0, t2 = 1;
  int next;
  cout << t1 << '\t' << t2 << '\t';
  for (int i = 1; i <= n; i++)
  {
    next = t1 + t2;
    cout << next << '\t';
    t1 = t2;
    t2 = next;
  }
}

void factorial()
{
  int n;
  cin >> n;
  int result = 1;
  for (int i = 0; i < n; i++)
  {
    result = result * (n - i);
  }
  cout << result;
}

int fac(int n)
{
  int result = 1;
  for (int i = 0; i < n; i++)
  {
    result = result * (n - i);
  }
  return result;
}

void coefficient()
{
  int n, r;
  cin >> n >> r;
  int coefficientVal = fac(n) / (fac(r) * fac(n - r));
  cout << coefficientVal;
}

int fact(int n)
{
  int collector = 1;
  for (int i = 0; i < n; i++)
  {
    collector = collector * (n - i);
  }
  return collector;
}

void pascalTriangle()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      int number = fact(i) / (fact(j) * fact(i - j));
      cout << number;
    }
    cout << endl;
  }
}

int main()
{
  // primeNumber();
  // palindrome();
  // palindropeRev();
  // armstrong(); // NEED TO SEE- 153
  // primeBetween();
  // fibonacci();
  // factorial();
  // coefficient();
  pascalTriangle();
  return 0;
}