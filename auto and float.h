# include <iostream>

# include <float.h> //climits for integers
using namespace std;

int main()
{
	auto double_value{ 1.2 + 0.0 };
	auto float_value{1.5f};
	auto long_double_value{1.8L};

	cout << sizeof(double_value) << endl;
	cout << sizeof(float_value) << endl;
	cout << sizeof(long_double_value) << endl;

	cout << DBL_MIN << endl;
	cout << FLT_MIN << endl;
	cout << LDBL_MIN << endl;

	return 0;
}
