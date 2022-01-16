// This  program stores a user's password
// The password must be longer than six letter
// The password must also include one Uppercase
// One lowercase and 1 numeric number.

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
/*
THIS FUNCTION CHECKS THE VALIDITY OF THE ENTERED PASSWORD
IT CHECKS IF THERE IS AT LEAST ONE UPPERCASE, ONE LOWERCASE
AND ONE NUMERIC VALUE
*/
void upper(string& mypassword)
{

char c;
int myupper = 0; //UPPERCASE VARIABLE
int mylower = 0; //LOWERCASE VARIABLE
int mynumber = 0; //NUMERIC VARIABLE

int length = mypassword.length();

for (int count = 0; count <= length; count ++)
	{
	    int a = mypassword[count];
		if (isupper(a))

			myupper++; //uppercase counter

        if (islower(a))

            mylower ++; //lowercase counter

        if (isdigit(a))
            mynumber ++; //number counter

	}


//Validates if all the required conditions are true

	if (myupper > 0 && mylower >0 && mynumber >0)
    {
        cout<<"\n\nYour password is VALID :)"<<endl;
    }
    else
        cout<<"\n\nYour password is inValid"<<endl;
}

int main()
{

string password; //stores the password as a string
int   count;
int foundLower = 0;
int foundUpper = 0;

cout<<"This program stores a user's password"<<endl;
cout<<"Your password MUST have:"<<endl;
cout<<"		At least 6 characters,"<<endl;
cout<<"		At least one uppercase character,"<<endl;
cout<<"		At least one lowercase character,"<<endl;
cout<<"		At least one numeric digit"<<endl;

cout<<"Enter your password: ";
cin>>password;
cout<<endl;



// Checks to see if the length of the password is less than
// Six characters.
    {


        if (password.length() <6)
        {
            cout<<"Password is too short Re-Enter: ";
            cin>>password;
        }
    }


upper(password); //Calls the validity function




return 0;
}




