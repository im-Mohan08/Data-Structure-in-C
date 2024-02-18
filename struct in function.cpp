#include <stdio.h>
#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
pair<int, int> intialize(struct rectangle *r, int l, int b)
{
    return make_pair(r->length = l, r->breadth = b);
}
int area(struct rectangle r)
{
    return r.length * r.breadth;
}
int change(struct rectangle *r, int l)
{
    return r->length = l;
}
int main()
{
    struct rectangle r;
    pair<int, int> a = intialize(&r, 20, 12);
    cout << a.first << endl
         << a.second << endl;
    cout << "Area of rectangle " << area(r) << endl;
    cout << "change length " << change(&r, 11) << endl;

    return 0;
}
