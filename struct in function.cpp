#include <stdio.h>
#include <iostream>         //header files c& c++
using namespace std;

struct rectangle                       //creating a structure
{
    int length;                 
    int breadth;
};
pair<int, int> intialize(struct rectangle *r, int l, int b)       //intialize value to struct by using function and pass struct address
{
    return make_pair(r->length = l, r->breadth = b);               //make_pair is keyword which is use to return pair of value in a single function
}
int area(struct rectangle r)                              // area-function
{
    return r.length * r.breadth;
}
int change(struct rectangle *r, int l)                  // change-function used to change the argument in a structure
{
    return r->length = l;
}
int main()
{
    struct rectangle r;                                    // r is struct variable
    pair<int, int> a = intialize(&r, 20, 12);              // pair intialisation using variable "a"
    cout << a.first << endl                                // print the intialise value
         << a.second << endl;
    cout << "Area of rectangle " << area(r) << endl;            // here area function is called and it return /print the value
    cout << "change length " << change(&r, 11) << endl;         // here change is the function which is used to change values of the structure

    return 0;
}
