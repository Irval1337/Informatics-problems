#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int n, n1, n5, n10, n20, n60;
    cin >> n ;
    n1=n5=n10=n20=n60=0;
    
    if (n / 60 > 0)
    {   
        n60 = n / 60;
        n = n % 60;
    }
    if (n <= 5)
    {
        if (15 * n < 70)
            n1 = n;
        else
            n5 = 1;
    }
    else if (n <= 10)
    {
        if (70 * (n / 5) + (n % 5) * 15 < 125)
        {
            n5++;
            n1 += (n % 5);
        }
        else
            n10++;
    }
    else if (n <= 20)
    {
        int count_10 = n / 10;
        int count_5 = (n - count_10 * 10) / 5;
        int count_1 = n % 5;
        if (125 * count_10 + 70 * count_5 + 15 * count_1 < 230)
        {
            n10 = count_10;
            n5 = count_5;
            n1 = count_1;
        }
        else
            n20++;
    }
    else
    {
        int count_20 = n / 20;
        int count_10 = (n - count_20 * 20) / 10;
        int count_5 = (n - count_20 * 20 - count_10 * 10) / 5;
        int count_1 = n % 5;
        if (count_20 * 230 + count_10 * 125 + count_5 * 70 + count_1 * 15 < 440)
        {
           n20 = count_20;
           if (125 * count_10 + 70 * count_5 + 15 * count_1 < 230)
           {
              n10 = count_10;
              if (70 * count_5 + 15 * count_1 < 125)
              {
                  n5 = count_5;
                  n1 = count_1;
              }
              else
                  n10++;
           }
          else
              n20++;
        }
        else
           n60++;
    }
    
    cout << n1 << " " << n5 << " " << n10 << " " << n20 << " " << n60 << endl;
}