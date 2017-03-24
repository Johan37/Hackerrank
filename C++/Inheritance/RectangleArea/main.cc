#include <iostream>
using namespace std;

class Rectangle {
    public:
        virtual void display() {
            cout << width_ << " " << height_ << endl;
        }
    
    protected:
        int width_, height_;
};

class RectangleArea : public Rectangle {
    public:
        void read_input() {
            cin >> width_ >> height_;
        }
    
        void display() {
            cout << width_ * height_ << endl;
        }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
