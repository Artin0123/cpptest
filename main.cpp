#include <iostream>
using namespace std;
class Rect
{
    int width, height;

public:
    Rect(){};
    int area() { return width * height; }
};

int main()
{
    Rect rectangle(4, 5);
    cout << "rectangle area: " << rectangle.area() << endl;
    return 0;
}