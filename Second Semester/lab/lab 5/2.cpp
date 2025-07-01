#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Pair 
{
    T1 a;
    T2 b;

	public:
		
    Pair(T1 f, T2 s)
	{
		a=f;
		b=s;
	}

    T1 get()
	{
        return a;
    }
    
    T2 get1() 
	{
        return b;
    }

    void set(T1 f) 
	{
        a = f;
    }

    void set1(T2 s) 
	{
        a = s;
    }

    void display()
	{
        cout << "\n First: " << a << "\t Second: " << b << endl;
    }
};

int main() 
{
    Pair<int, double> p1(5, 3.14);
    p1.display();
    p1.set(10);
    p1.set1(6.28);
    p1.display();

    Pair<string, char> p2("Hello", 'H');
    p2.display();
    p2.set("World");
    p2.set1('B');
    p2.display();

    return 0;
}
