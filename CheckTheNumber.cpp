#include <iostream>
using namespace std;

int main()
{
   int nums;
   cout << "Enter the number\n";
   cin >> nums;
   int result = nums % 2;
   if (result == 0)
   {
       cout << "The number is EVEN\n";
   }
   else
   {
       cout << "The number is ODD\n";
   }
   return 0;
}
