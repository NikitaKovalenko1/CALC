class GRAD
{
public:
	long double element1;
	long double element2;
	int g1, s1, m1, g2, s2, m2, g3, s3, m3;
	GRAD(double g, double m, double s);
	GRAD(double g, double m, double s, double g1, double m1, double s1);

	double plus();
	double minus();
	double mylti(double ch);
	double div(double ch);
	
	double rad();
};