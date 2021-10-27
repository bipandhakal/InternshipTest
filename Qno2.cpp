#include <iostream>
#include <string>
#define SIZE 100
using namespace std;

class Names
{
   string first_name;
   string middle_name;
   string last_name;

public:
   void Entername(string f, string l, string m = " ")
   {
      first_name = f;
      last_name = l;
      middle_name = m;
   }
   void PrintName()
   {
      cout << first_name << " " << middle_name << " " << last_name << endl;
   }
   string getlastname()
   {
      return last_name;
   }
   ~Names() {}
};

int main()
{
   Names arr[SIZE];
   int no_of_names, check_middle_name = 0;
   string a, b, c;
   cout << "Enter no of names to enter : " << endl;
   cin >> no_of_names;
   for (int i = 0; i < no_of_names; i++)
   {
      cout << "Enter First Name" << endl;
      cin >> a;
      cout << "Have Middle name ? [ 1 = Yes ]" << endl;
      cin >> check_middle_name;
      if (check_middle_name == 1)
      {
         cout << "Enter Middle Name" << endl;
         cin >> b;
         cout << "Enter Last Name" << endl;
         cin >> c;
         arr[i].Entername(a, c, b);
      }
      else
      {
         cout << "Enter Last Name" << endl;
         cin >> c;
         arr[i].Entername(a, c);
      }
   }

   string temp;
   for (int i = 0; i < no_of_names; i++)
   {
      for (int j = 1; j < no_of_names; j++)
      {
         if (arr[j - 1].getlastname() > (arr[j].getlastname()))
         {
            temp = arr[j - 1].getlastname();
            arr[j - 1].getlastname() = arr[j].getlastname();
            arr[j].getlastname() = temp;
         }
      }
   }

   for (int i = 0; i < no_of_names; i++)
   {
      arr[i].PrintName();
   }

   return 0;
}
