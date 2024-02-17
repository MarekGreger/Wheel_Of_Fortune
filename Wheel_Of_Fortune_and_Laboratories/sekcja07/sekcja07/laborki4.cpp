/*#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <conio.h>
#include<vector>
using namespace std;
struct punkt {
	double x;
	double y;
};
struct kwadrat {
	punkt A;
	punkt B;
};

struct kolo {
	punkt O;
	double r;
};
double odl(const punkt& A, const punkt& B)
{
	double d;
	d = sqrt((B.x - A.x) * (B.x - A.x) + pow(B.y - A.y, 2));
	return d;
}
//jesli przek¹tna to d, pole to (d*d/2)
double pole(kwadrat kw) {

	double d = odl(kw.A, kw.B);
	return (d * d) / 2;
}
kwadrat wiekszyKwadrat(kwadrat* kw1, kwadrat* kw2)
{
	double d1 = odl(kw1->A, kw1->B);
	double d2 = odl(kw2->A, kw2->B);

	kwadrat wiekszy;
	if (d1 > d2)
		wiekszy = *kw1;
	else
		wiekszy = *kw2;

	return wiekszy;
}
int main()
{
	punkt p1 = { 4, 5.5 };
	punkt p2;
	p2.x = 10;
	p2.y = 7.7;


	cout << odl(p1, p2) << endl;
	//
	kwadrat kw1;
	kw1.A.x = 9;
	kw1.A.y = 3.3;
	kw1.B = p1;

	kwadrat kw2 = { {3.3, 2.2}, {4.8, -3.6} };
	cout << pole(kw1) << endl;

	kwadrat w2 = wiekszyKwadrat(&kw1, &kw2);

}*/