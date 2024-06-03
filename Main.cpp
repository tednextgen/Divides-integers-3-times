#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int userNum;
   int divNum;
   int divAnswer;
   int divAnswer2;
   int divAnswer3;
   cin >> userNum;
   cin >> divNum;
   divAnswer = userNum / divNum;
   divAnswer2 = divAnswer / divNum;
   divAnswer3 = divAnswer2 / divNum;
   cout << divAnswer << " " << divAnswer2 << " " << divAnswer3 << endl;
   return 0;
}
