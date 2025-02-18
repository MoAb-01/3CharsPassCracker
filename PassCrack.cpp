#include<iostream>
#include<cmath>
#include <string>
using namespace std;

//int ReadPositiveNumber(string mssg)
//{
//  int number;
//  do
//  {
//	  cout << mssg<<" ";
//	  cin >> number;
//  } while (number < 0);
//  return number;
//}

string EnterPassword (string mssg)
{
	string password;
	cout << mssg;
	cin >> password;
	return password;
}
								
bool ComparePassword(string enteredPassword,string TruePassowrd)
{									
		for (int i = 0; i < TruePassowrd.length(); ++i)
		{
			if (enteredPassword[i] != TruePassowrd[i] )
			{

				return 0;
				break;
			}
		}
	return 1;
}

 void PasswordGuess()
{
	string password = EnterPassword("Enter the password"); 
	string AttemptPass;
	int counter = 1;
	for (int i=65;i<=90;++i)
	{
		for (int j = 65;j<= 90;++j)
		{
			for (int k = 65; k <= 90; ++k)
			{
				AttemptPass = char(i);
				AttemptPass = AttemptPass + char(j);
				AttemptPass = AttemptPass + char(k);
													
									
								
				cout << "Trail ["<<counter<<"]: " << AttemptPass << endl;
									
				if (AttemptPass== password)
				{
					cout << "Password is " << password<<endl;
					cout << "Found After: " <<counter  << " Trail(s)"; 
					return;							
													
				}
				counter++;
				
			}
			
			
		}

		
		
	}
}

int main()
{
	PasswordGuess();
}
