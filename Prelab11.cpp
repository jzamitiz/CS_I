//You may not have covered this material in your lecture sections.
//Complete as best as you are able.  Refer to the prelab reading for assistance.

//Add code where requested to complete the program.

#include <iostream>
#include <fstream>


using namespace std;

struct Dog
{
    string name;
    string breed;
    char sex;
    int age;
};

int main()
{
	// TODO - Create a Dog object named "dog1", and initialize its name to
	//        "Sparky", sex to 'M', age to 5, and breed to "Collie".

	Dog dog1 = {"Sparky", "Collie", 'M', 5};

        // TODO - Create a Dog object named "dog2".

        Dog dog2;

	// TODO - Prompt the user to enter the dog's name, age, sex, and breed,
	//        and assign them to the "dog2" object.
        //        Assume the dog name and breed are entered as a single word
        //        so that both will work with cin statements.

        cout << "What is the dog's name?" << endl;
        cin >> dog2.name;
        cout << "What is the dog's age?" << endl;
        cin >> dog2.age;
        cout << "What is the dog's sex?" << endl;
        cin >> dog2.sex;
        cout << "What is the dog's breed?" << endl;
        cin >> dog2.breed;
        cout << endl;

	// TODO - Print "dog1" and "dog2" objects to the console. E.g.
	//        "Name: Sparky, Sex: M, Age: 5, Breed: Collie"

	cout << "Dog 1" << endl
	     << "Name: " << dog1.name << endl
	     << "Sex: " << dog1.sex << endl
	     << "Age: " << dog1.age << endl
	     << "Breed: " << dog1.breed << endl << endl;

	cout << "Dog 2" << endl
	     << "Name: " << dog2.name << endl
	     << "Sex: " << dog2.sex << endl
	     << "Age: " << dog2.age << endl
	     << "Breed: " << dog2.breed << endl << endl;

    return 0;
}
