#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;

    cout << "Enter your age:" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "Enter your gender (M/F):" << endl;
        cin >> gender;

        if (gender == 'm' || gender == 'M')
        {
            cout << "Go to room-5" << endl;
        }
        else if (gender == 'f' || gender == 'F')
        {
            cout << "Go to room-4" << endl;
        }
        else
        {
            cout << "Invalid gender input" << endl;
        }
    }
    else
    {
        cout << "Your age is under 18. You are not eligible to vote." << endl;
    }

    return 0;
}