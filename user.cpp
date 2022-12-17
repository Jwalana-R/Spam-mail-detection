#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
#include <cstdlib>

#include "user.h"
using namespace std;

User::User()
{
    user_id = "";
    name = "";
    gender = "";
    address = "";
    phonenumber = "";
    email = "";
    age = 0;
}
void User::set_userid(string u)
{
    user_id = u;
}
string User::get_userid()
{
    return user_id;
}
string User::get_name()
{
    return name;
}
void User::add_user()
{
    cout << "\tEnter User's name : ";
    cin >> name;
    cout << "\tEnter User's age : ";
    cin >> age;
    cout << "\tEnter User's gender : ";
    cin >> gender;
    cout << "\tEnter User's phone number : ";
    cin >> phonenumber;
label:
    cout << "\tEnter User's email : ";
    cin >> email;
    string s = "@gmail.com";
    int l = email.length() - 1, flag = 0;
    for (int i = 9; i >= 0; i--)
    {
        if (s[i] != email[l--])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << endl
             << " Enter valid email...\n";
        goto label;
    }
    cout << "\tEnter User's address : ";
    cin >> address;
}
void User::show_user()
{
    // cout << "\tUserID : " << user_id << endl;
    cout << "\tUser's name : " << name << endl;
    cout << "\tUser's age : " << age << endl;
    cout << "\tUser's gender : " << gender << endl;
    cout << "\tUser's phone number : " << phonenumber << endl;
    cout << "\tUser's email : " << email << endl;
    cout << "\tUser's address : " << address << endl;
}
void User::add_ticket(Ticket *T)
{
    tickets.push_back(T);
}
vector<Ticket *> *User::get_tickets()
{
    return &tickets;
}