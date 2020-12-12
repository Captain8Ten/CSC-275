// This program takes a user input (a name) and then a second input (the age)
// and then, try and catch functions check to see if the name is longer than
// 3 characters and the age is above 18.
// Another try and catch sees if the age is exactly 18 years old.

#include <iostream>


using namespace std;

class user
{
public:
    user(){};
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string name;
    int age;
};

int main()
{
    int namelength, userage;
    string username;
    user n;
    cout << "Enter name: " << endl;
    cin >> n.name;

    cout << "Enter age: " << endl;
    cin >> n.age;

    username = n.getName();
    namelength = username.length();

    try
    {
        if(n.age <= 18)
        {
            throw user(n);
            cout << n.getName() <<  " is younger than 18 years of age." << endl;
        }
    }
    catch(user e)
    {
        cout << e.getName() << " is younger than 18 years old." << endl;
    }

    try
    {
        if(namelength < 3)
        {
            throw user(n);
            cout << n.getName() << " has more than 3 characters in it." << endl;
        }
    }
    catch(user e)
    {
        cout << n.getName() << " is less than 3 characters." << endl;
    }

    try
    {
        if(n.age <= 18 && namelength > 3)
        {
            throw user(n);
            cout << n.getName() << " is younger/exactly than 18 and the name is more than 3 characters." << endl;
        }
    }
    catch(user e)
    {
        cout << n.getName() << " is either younger/exactly than 18 or the name is less than 3 characters." << endl;
    }

    try
    {
        if(n.age == 18)
        {
            cout << n.getName() << " is exactly 18 years old." << endl;
        }
    }
    catch(user e)
    {
        cout << n.getName() << " is not exactly 18 years old." << endl;
    }

    return 0;
}
