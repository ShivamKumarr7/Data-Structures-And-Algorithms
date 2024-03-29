// Q) Reverse a number ? 

// Ex-> n = 12345
// O/P -> 54321

// Ex-> 532
// O/P -> 235 

// Ex-> 12 
// O/P -> 21 

// 1 <= n < 10^9 

#include<bits/stdc++.h>
using namespace std;
int reverse_number(int n)
{
    if(n < 10) return n;
    int ans = 0;
    int value = n;
    while(value)
    {
        int last_digit = value % 10;
        ans = ans * 10 + last_digit;
        value = value / 10;
    }
    return ans;
  // Time complexity --> O(n) i.e the number of digits in n 

}
int main()
{
    int n;
    cin>>n;
    int reversed_number = reverse_number(n);
    cout<<"The reverse of "<<n<<" is : "<<reversed_number<<"\n";
    return 0;
}
