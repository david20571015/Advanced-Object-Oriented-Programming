#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Conver
{
public:
	double operator()(const double &c)
	{
		return c * 1.8 + 32;
	}
};

class Display
{
public:
	void operator()(const double &t)
	{
		cout << t << " ";
	}
};

int main()
{
	double tem;
	vector<double> celsius, fahrenheit;

	while (cin >> tem)
		celsius.push_back(tem);

	fahrenheit.resize(celsius.size());

	cout<<"\n----------1-----------\n";
	transform(celsius.begin(), celsius.end(), fahrenheit.begin(), Conver());
	for_each(fahrenheit.begin(), fahrenheit.end(), Display());

	fahrenheit.clear();
	fahrenheit.resize(celsius.size());
	cout<<"\n----------2-----------\n";
	transform(celsius.begin(), celsius.end(), fahrenheit.begin(), [](const double &c) { return c * 1.8 + 32; });	
	for_each(fahrenheit.begin(), fahrenheit.end(), [](const double &t) { cout << t << " "; });

	return 0;
}