#include<bits/stdc++.h>
using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box {
    public:
        // Constructors: 
        Box() : l_(0), b_(0), h_(0) {}

        Box(int l, int b, int h) : l_(l), b_(b), h_(h) {}

        Box(const Box &box) {
            l_ = box.getLength();
            b_ = box.getBreadth();
            h_ = box.getHeight();
        }

        // Public functions
        int getLength() const { return l_; }
        int getBreadth () const { return b_; }
        int getHeight () const { return h_; }

        long long CalculateVolume() {
            return (long long) l_ * b_ * h_;
        }
    
        //Overload operator <
        bool operator<(Box& b) {
            if (l_ < b.getLength()) {
                return true;
            }
            if (b_ < b.getBreadth() && l_ == b.getLength()) {
                return true;
            }
            if (h_ < b.getHeight() && b_ == b.getBreadth() && l_ == b.getLength()) {
                return true;
            }
            return false;
        }
    
    private:
        int l_,b_,h_;
};

//Overload operator <<
ostream& operator<<(ostream& out, const Box& box) {
    out << box.getLength() << " " << box.getBreadth() << " " << box.getHeight();
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}