#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;
    friend void square(Point o1, Point o2);
public:
    
    Point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The points are : (" << a << "," << b << ")" << endl;
    }
};
void square(Point o1 , Point o2){
    int diff1 =(o2.a - o1.a);
    int diff2 = (o2.b-o1.b);
    float dist = sqrt((diff1*diff1)-(diff2*diff2));
    // float dist = round_to_nearest((diff1*diff1)-(diff2*diff2));
    cout<<dist<<endl;
}
// Point void square(Point o1, Point o2)
// {
//     // dist = sqrt(((o2.a - o1.a)(o2.a - o1.a))-((o2.b-o1.b)(o2.b-o1.b)));
//     // cout<<"The distance between two points is : "<<dist<<endl;
//     return sqrt(((o2.a - o1.a)(o2.a - o1.a)) - ((o2.b - o1.b)(o2.b - o1.b)));
// }
int main()
{
    Point p1 = Point(2, 2);
    p1.display();
    Point p2(8, 6);
    p2.display();
    cout << "The differnce between two points is : ";
    square(p1,p2);
    // Point di;
    // di = square(p1, p2);
    return 0;
}