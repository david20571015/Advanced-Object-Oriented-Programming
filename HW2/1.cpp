#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

namespace box
{
int x, y, z;
inline void show_vol(int x, int y, int z)
{
	cout << x * y * z << endl;
}
} // namespace box

namespace
{
void show_smallest(int x, int y, int z)
{
	cout << "the length of the smallest side is " << min(x, (min(y, z))) << endl;
}
void show_largest(int x, int y, int z)
{
	cout << "the length of the largest side is " << max(x, (max(y, z))) << endl;
}
} // namespace

int main()
{
	cin >> box::x >> box::y >> box::z;
	cout << "vol : ";
	box::show_vol(box::x, box::y, box::z);
	show_largest(box::x, box::y, box::z);
	show_smallest(box::x, box::y, box::z);
	system("pause");
	return 0;
}