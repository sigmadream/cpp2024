import std;
using namespace std;

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "The square of " << x << " is " << square(x) << endl;
}

int main()
{
    print_square(1.234);
}