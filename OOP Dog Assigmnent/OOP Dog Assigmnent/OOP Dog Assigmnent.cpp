// OOP Dog Assigmnent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "OOP Dog Assigmnent.h"
using namespace std;

class Dog {
public:
    string breed;
    string color;
    float height;
    float weight;

    Dog(string brd, string clr, float ht, float wt)
    {
        breed = brd;
        color = clr;
        height = ht;
        weight = wt;
    }

    void Shake()
    {
        cout << color << " " << breed << " " << "shakes. \n";
    }

    void Sit()
    {
        cout << color << " " << breed << " " << "sits down. \n";
    }

    void LayDown()
    {
        cout << color << " " << breed << " " << "lays down. \n";
    }
};

int main()
{
    Dog spaniel("spaniel", "black", 2.1, 66);
    Dog hound("hound", "brown", 2, 60);

    hound.Shake();
    spaniel.Sit();
    hound.LayDown();

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
