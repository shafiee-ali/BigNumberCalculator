#include<string>
#include<cstdlib>
#include "Header.h"
std::string;
double calculator::fact(int num)
{
	if (num == 0)
		return 1;
	else
		return num * fact(num - 1);
}
double calculator::tavan(double num, double pow)
{
	double t = 1;
	for (int i = 0; i < pow; i++)
	{
		t *= num;
	}
	return t;
}
double calculator::sin(double x)
{
	if (x >= 360)
	{
		while (x > 360)
			x -= 360;
	}
	if (x == 180)
		return 0;
	else if (x == 0 || x == 360)
		return 0;
	else if (x == 90)
		return 1;
	double result = 0, sign = 1, sin = 0;
	//if (x >= 360)
	//x = x % 360;
	x = x * 3.14159265 / 180;
	for (double i = 1; i <= 31; i += 2)
	{
		result = (tavan(x, i) / fact(i)) * sign;
		sin += result;
		sign *= -1;
	}
	return sin;
}
double calculator::cos(double x)
{
	if (x >= 360)
	{
		while (x > 360)
			x -= 360;
	}
	if (x == 180)
		return -1;
	else if (x == 0 || x == 360)
		return 1;
	else if (x == 90)
		return 0;
	else
	{
		double result = 0, sign = -1, cos = 1;
		x = x * 3.14159 / 180;
		for (double i = 2; i < 9; i += 2)
		{
			result = (tavan(x, i) / fact(i)) * sign;
			cos += result;
			sign *= -1;
		}
		return cos;
	}
}
double calculator::tan(double x)
{
	double tan = sin(x) / cos(x);
	if (cos(x) == '0')
		return 'inf';
	else
		return tan;
}
double calculator::cot(double x)
{
	double cot = cos(x) / sin(x);
	if (sin(x) == '0')
		return 'inf';
	return cot;
}
double calculator::ln(double x)
{
	double result = 0, sign = 1, ln = 0;
	for (double i = 1; i <= 1000; i += 2)
	{
		result = tavan((x - 1) / (x + 1), i) * (1 / i);
		ln += result;
	}
	ln *= 2;
	return ln;
}
double calculator::log(double x, double y)
{
	double result = ln(x) / ln(y);
	return result;
}
double calculator::sqrt(double x, double y)
{
	double t = 1, i = 0;
	for (int ashar = 1; ashar < 5; ashar++)
	{
		while (x >= tavan(i, y))
		{
			i += t;
		}
		i -= t;
		t /= 10;
	}
	return i;
}
double calculator::normal_numbers_calculate(std::string x)
{
	x.insert(0, 1, '(');
	x.insert(x.size(), 1, ')');
	int pbaz = 0;
	for (int i = 0; i<x.size(); i++)
	{
		if (x[i] == '(')
			pbaz++;
	}
	int makan = 0, manfi = 0, i = 0, j = 0, p1 = -1, p2 = x.size(), z1 = 0, z2 = -1, temp = 0, z3 = x.size(), tedadzt = 0, tedadjm = 0;
	{
		for (int o = 0; o<pbaz; o++)
		{
			manfi = 0, p1 = -1, p2 = x.size(), z1 = 0, z2 = -1, temp = 0, z3 = x.size(), tedadzt = 0, tedadjm = 0;
			for (i = 0; i<x.size(); i++)
			{
				if (x[i] == '(')
					p1 = i;// (
			}
			for (i = p1; i<x.size(); i++)
			{
				if (x[i] == ')')
				{
					p2 = i;// )
					break;
				}
			}
			for (i = p1 + 1; i<p2; i++)
			{
				if (x[i] == '*' || x[i] == '/')
					tedadzt++;
			}
			if (tedadzt != 0)
			{
				for (j = 0; j<tedadzt; j++)
				{
					for (i = 0; i<x.size(); i++)
					{
						if (x[i] == '(')
							p1 = i;// (
					}
					for (i = p1; i<x.size(); i++)
					{
						if (x[i] == ')')
						{
							p2 = i;// )
							break;
						}
					}
					for (i = p1 + 1; i<p2; i++)
					{
						if (x[i] == '*' || x[i] == '/')
						{
							z1 = i;// * ya / aval daroone parantez dakheli
							break;
						}
					}
					if (x[i] == '*')
						temp = 1;
					else
						temp = 0;
					z2 = p1;
					for (i = z1 - 1; i>p1; i--)
					{
						if (x[i + 1] == '+' || x[i + 1] == '-' || x[i + 1] == '(')
						{
							if ((x[i] == '(' || x[i] == '+' || x[i] == '-') && x[i + 1] == '-')
							{
								z2 = i;
								break;
							}
							else
							{
								z2 = i + 1;
								break;
							}
						}
					}
					double a = std::stod((x.substr(z2 + 1, z1 - z2 - 1)).c_str());
					z3 = p2;
					for (i = z1 + 1; i <= p2; i++)
					{
						if ((x[i] == '+' || x[i] == '-' || x[i] == ')' || x[i] == '*' || x[i] == '/') && i != z1 + 1)
						{
							z3 = i;
							break;
						}
					}
					double b = std::stod((x.substr(z1 + 1, z3 - z1 - 1)).c_str());
					if (temp == 1)
					{
						double h = a * b;
						std::string t = std::to_string(h);
						x.replace(z2 + 1, z3 - z2 - 1, t);
					}
					else
					{
						double h = a / b;
						std::string t = std::to_string(h);
						x.replace(z2 + 1, z3 - z2 - 1, t);
					}
				}
			}
			for (i = 0; i<x.size(); i++)
			{
				if (x[i] == '(')
					p1 = i;// (
			}
			for (i = p1; i<x.size(); i++)
			{
				if (x[i] == ')')
				{
					p2 = i;// )
					break;
				}
			}
			for (i = p1 + 1; i<p2; i++)
			{
				if ((x[i + 1] == '+' || x[i + 1] == '-') && (x[i] != '+' && x[i] != '-' && x[i] != '('))
					tedadjm++;
			}
			for (j = 0; j<tedadjm; j++)
			{
				for (i = p1 + 1; i<p2; i++)
				{
					if (x[i] == '-' && x[i + 1] == '-')
					{
						x.replace(i, 2, "+");
					}
					if (x[i] == '+' && x[i + 1] == '-')
					{
						x.erase(i, 1);
					}
				}
				makan = 0;
				if (tedadjm != 0)
				{
					for (i = 0; i<x.size(); i++)
					{
						if (x[i] == '(')
							p1 = i;// (
					}
					for (i = p1; i<x.size(); i++)
					{
						if (x[i] == ')')
						{
							p2 = i;// )
							break;
						}
					}
					z1 = 0, z2 = -1, temp = 0, z3 = x.size();
					for (i = p1 + 1; i<p2; i++)
					{
						if ((x[i] == '+' || x[i] == '-') && x[i - 1] != '(')
						{
							z1 = i;// + ya - aval daroone parantez dakheli
							break;
						}
					}
					if (x[z1] == '+')
						temp = 1;
					else
						temp = 0;
					for (i = z1 - 1; i >= p1; i--)
					{
						if (x[i] == '(')
						{
							z2 = i;
							break;
						}
					}
					double c = std::stod((x.substr(z2 + 1, z1 - z2 - 1)).c_str());
					for (i = z1 + 1; i <= p2; i++)
					{
						if (x[i] == '+' || x[i] == '-' || x[i] == ')')
						{
							z3 = i;
							break;
						}
					}
					double d = std::stod((x.substr(z1 + 1, z3 - z1 - 1)).c_str());
					if (temp == 1)
					{
						double f = c + d;
						std::string t = std::to_string(f);
						x.replace(z2 + 1, z3 - z2 - 1, t);
					}
					else
					{
						double f = c - d;
						std::string t = std::to_string(f);
						x.replace(z2 + 1, z3 - z2 - 1, t);
					}
				}
			}
			int parantez = 0;
			for (i = 0; i<x.size(); i++)
			{
				if (x[i] == '(')
					p1 = i;// (
			}
			for (i = p1 + 1; i<x.size(); i++)
			{
				if (x[i] == ')')
				{
					p2 = i;// )
					break;
				}
			}
			for (int i = p1 + 2; i<p2; i++)
			{
				if (x[i] == '+' || x[i] == '-' || x[i] == '/' || x[i] == '*')
				{
					parantez = 1;
				}
				else
					parantez = 0;
			}
			if (parantez == 0)
			{
				for (i = 0; i<x.size(); i++)
				{
					if (x[i] == '(')
						p1 = i;// (
				}
				for (i = p1 + 1; i<x.size(); i++)
				{
					if (x[i] == ')')
					{
						p2 = i;// )
						break;
					}
				}
				x.replace(p1, 1, "");
				x.replace(p2 - 1, 1, "");
			}
		}
	}
	double g = std::stod(x.c_str());
	return g;
}
std::string mine(std::string x, std::string y)
{
	int n = 0, i = 0, a[100001] = { 0 }, r = 0, f = 0, b[100001] = { 0 }, k = 0, dat1 = 0, dat2 = 0, dat = 0, size = 0;
	bool datyaab = false;
	bool manfi = false;
	bool manfiyab = false;
	char m;
	if (x[0] != '-' && y[0] != '-')
	{
		manfiyab = true;
		m = 'y';
	}
	else if (x[0] == '-' && y[0] != '-')
	{
		manfiyab = true;
		x.erase(0, 1);
		m = 'x';
	}
	for (i = 0; i < x.size(); i++)
	{
		if (x[i] == '.')
		{
			dat1 = i;
			datyaab = true;
		}
	}
	for (i = 0; i < y.size(); i++)
	{
		if (y[i] == '.')
		{
			dat2 = i;
			datyaab = true;
		}
	}
	if (datyaab == true)//mosavi kardane asharha
	{
		if (dat1 != 0 && dat2 != 0)
		{
			if ((x.size() - dat1 - 1) > (y.size() - dat2 - 1))
				y.insert(y.size(), (x.size() - dat1 - 1) - (y.size() - dat2 - 1), '0');// ezafe kardane 0 be akhare string baraye menha
			else if ((x.size() - dat1 - 1) < (y.size() - dat2 - 1))
				x.insert(x.size(), (y.size() - dat2 - 1) - (x.size() - dat1 - 1), '0');
		}
		else
		{
			if (dat1 == 0)
			{
				x.insert(x.size(), 1, '.');
				x.insert(x.size(), y.size() - dat2 - 1, '0');
			}
			if (dat2 == 0)
			{
				y.insert(y.size(), 1, '.');
				y.insert(y.size(), x.size() - dat1 - 1, '0');
			}
		}
		for (i = 0; i < x.size(); i++)
		{
			if (x[i] == '.')
				dat1 = i;
		}
		for (i = 0; i < y.size(); i++)
		{
			if (y[i] == '.')
				dat2 = i;
		}
		if (dat1 >= dat2)//date bozorg
			dat = dat1;
		else
			dat = dat2;
		if (dat1 != 0)//erasedat
			x.erase(dat1, 1);
		if (dat2 != 0)
			y.erase(dat2, 1);
	}
	//cout << x << endl << y << endl;
	std::string temp;
	if (x.size() >= y.size())
	{
		size = x.size();
		if (x.size() == y.size())
		{
			for (i = 0; i < x.size(); i++)
			{
				if (x[i] < y[i])
				{
					manfi = true;
					break;
				}
				else if (x[i] > y[i])
				{
					manfi = false;
					break;
				}
			}
		}
	}
	else
	{
		size = y.size();
		manfi = true;
	}
	if (manfi == false)
	{
		if (m == 'y')
			manfiyab = false;
		else if (m == 'x')
			manfiyab = true;
	}
	else
	{
		if (m == 'x')
			manfiyab = false;
		if (m == 'y')
			manfiyab = true;
		temp = x;
		x = y;
		y = temp;
	}
	//cout << "x : " << x << endl << "y : " << y << endl << "manfi : " << manfi << endl << "manfiyaab : " << manfiyab << endl;
	int m1, m2, v = 0;
	std::string mine = "", menha = "";
	y.insert(0, x.size() - y.size(), '0');
	int j;
	for (i = x.size() - 1, j = 0; i >= 0 && j < x.size(); i--, j++)
	{
		m1 = x[i] - y[i];
		if (m1 + v < 0)
		{
			m2 = m1 + v + 10;
		}
		else
			m2 = m1 + v;
		menha = m2 + 48;
		mine.insert(0, menha);
		if (m1 + v < 0)
			v = -1;
		else
			v = 0;
	}
	int q;
	bool zero = false;
	if (dat > 0)
		mine.insert(mine.size() - size + dat, 1, '.');
	for (q = 0; q < mine.size(); q++)
	{
		if (mine[q] != '0')
		{
			zero = true;
			break;
		}
	}
	if (zero)
		mine.erase(0, q);
	else
		mine.erase(0, q - 1);
	if (manfiyab)
	{
		mine.insert(0, 1, '-');
		if (mine[1] == '.')
			mine.insert(1, 1, '0');
	}
	else
	{
		if (mine[0] == '.')
			mine.insert(0, 1, '0');
	}
	return mine;
}
std::string sum(std::string x, std::string y)
{
	int n = 0, i = 0, a[100001] = { 0 }, m = 0, r = 0, f = 0, b[100001] = { 0 }, k = 0, dat1 = 0, dat2 = 0, dat = 0, size = 0;
	bool datyaab = false;
	std::string temp;
	bool bothmanfi = false;
	if (x[0] == '-' && y[0] == '-')
	{
		bothmanfi = true;
		x.erase(0, 1);
		y.erase(0, 1);
	}
	if (x.size() > y.size())
	{
		temp = x;
		x = y;
		y = temp;
	}
	for (i = 0; i < x.size(); i++)
	{
		if (x[i] == '.')
		{
			dat1 = i;
			datyaab = true;
		}
	}
	for (i = 0; i < y.size(); i++)
	{
		if (y[i] == '.')
		{
			dat2 = i;
			datyaab = true;
		}
	}
	if (datyaab == true)
	{
		if (dat1 != 0 && dat2 != 0)
		{
			if ((x.size() - dat1 - 1) > (y.size() - dat2 - 1))
				y.insert(y.size(), (x.size() - dat1 - 1) - (y.size() - dat2 - 1), '0');// ezafe kardane 0 be akhare string baraye jame
			else if ((x.size() - dat1 - 1) < (y.size() - dat2 - 1))
				x.insert(x.size(), (y.size() - dat2 - 1) - (x.size() - dat1 - 1), '0');
		}
		else
		{
			if (dat1 == 0)
			{
				x.insert(x.size(), 1, '.');
				x.insert(x.size(), y.size() - dat2 - 1, '0');
			}
			if (dat2 == 0)
			{
				y.insert(y.size(), 1, '.');
				y.insert(y.size(), x.size() - dat1 - 1, '0');
			}
		}
		for (i = 0; i < x.size(); i++)
		{
			if (x[i] == '.')
				dat1 = i;
		}
		for (i = 0; i < y.size(); i++)
		{
			if (y[i] == '.')
				dat2 = i;
		}
		if (dat1 > dat2)
			dat = dat1;
		else
			dat = dat2;
		if (dat1 != 0)
			x.erase(dat1, 1);
		if (dat2 != 0)
			y.erase(dat2, 1);
	}
	char zero;
	if (x.size() >= y.size())
	{
		size = x.size();
		zero = 'y';
	}
	else
	{
		size = y.size();
		zero = 'x';
	}
	if (zero == 'x')
		x.insert(0, y.size() - x.size(), '0');
	else
		y.insert(0, x.size() - y.size(), '0');
	//cout << x << endl << y << endl;
	int s1, s2, v = 0;
	int j = 0;
	std::string jam;
	std::string sum;
	for (i = x.size() - 1, j = 0; i >= 0 && j < x.size(); i--, j++)
	{
		s1 = x[i] + y[i] - 96;
		if (s1 + v >= 10)
		{
			s2 = s1 + v - 10;
		}
		else
			s2 = s1 + v;
		sum = s2 + 48;
		jam.insert(0, sum);
		if (s1 + v >= 10)
			v = 1;
		else
			v = 0;
	}
	if (v == 1)
		jam.insert(0, 1, '1');

	for (i = 0; i < jam.size(); i++)
	{
		if (jam[i] == 'n')
			jam.erase(i, 1);
	}
	if (dat > 0)
		jam.insert(jam.size() - size + dat, 1, '.');
	if (bothmanfi == true)
	{
		jam.insert(0, 1, '-');
		if (jam[1] == '.')
			jam.insert(1, 1, '0');
	}
	else
	{
		if (jam[0] == '.')
			jam.insert(0, 1, '0');
	}
	return jam;
}
std::string zarb(std::string x, std::string y)
{
	int n = 0, i = 0, a[1001] = { 0 }, m = 0, r = 0, f = 0, b[1001] = { 0 }, k = 0, dat1 = 0, dat2 = 0, dat = 0, size = 0;
	bool datyaab = false;
	bool manfi = false;
	std::string temp;
	if (x[0] == '-' && y[0] == '-')
	{
		x.erase(0, 1);
		y.erase(0, 1);
	}
	else if (x[0] == '-' && y[0] != '-')
	{
		x.erase(0, 1);
		manfi = true;
	}
	else if (x[0] != '-' && y[0] == '-')
	{
		y.erase(0, 1);
		manfi = true;
	}
	if (x.size() < y.size())
	{
		temp = x;
		x = y;
		y = temp;
	}
	for (i = 0; i<x.size(); i++)
	{
		if (x[i] == '.')
		{
			dat1 = i;
			datyaab = true;
		}
	}
	for (i = 0; i<y.size(); i++)
	{
		if (y[i] == '.')
		{
			dat2 = i;
			datyaab = true;
		}
	}
	if (datyaab == true)
	{
		if (dat1 != 0 && dat2 != 0)
		{
			if ((x.size() - dat1 - 1)>(y.size() - dat2 - 1))
				y.insert(y.size(), (x.size() - dat1 - 1) - (y.size() - dat2 - 1), '0');// ezafe kardane 0 be akhare string baraye jame
			else if ((x.size() - dat1 - 1)<(y.size() - dat2 - 1))
				x.insert(x.size(), (y.size() - dat2 - 1) - (x.size() - dat1 - 1), '0');
		}
		else
		{
			if (dat1 == 0)
			{
				x.insert(x.size(), 1, '.');
				x.insert(x.size(), y.size() - dat2 - 1, '0');
			}
			if (dat2 == 0)
			{
				y.insert(y.size(), 1, '.');
				y.insert(y.size(), x.size() - dat1 - 1, '0');
			}
		}
		for (i = 0; i<x.size(); i++)
		{
			if (x[i] == '.')
				dat1 = i;
		}
		for (i = 0; i<y.size(); i++)
		{
			if (y[i] == '.')
				dat2 = i;
		}
		if (dat1 >dat2)
			dat = dat1;
		else
			dat = dat2;

		if (dat1 != 0)
			x.erase(dat1, 1);
		if (dat2 != 0)
			y.erase(dat2, 1);
	}
	//y.insert(0, x.size() - y.size(), '0');
	std::string mult1, mult2, mult, replacemult, mult3;
	int j, m1, m2, m3, m4, v = 0, zero = -1;
	for (j = y.size() - 1; j >= 0; j--)
	{
		v = 0;
		mult1 = "";
		zero++;
		mult1.insert(0, zero, '0');
		for (i = x.size() - 1; i >= 0; i--)
		{
			m1 = y[j] - 48;
			m2 = x[i] - 48;
			m3 = m2 * m1;
			m4 = m3;
			if (m3 + v >= 10)
				m3 = ((m3 + v) % 10);
			else
				m3 = m3 + v;
			replacemult = m3 + 48;
			mult1.insert(0, replacemult);
			if (m4 + v >= 10)
				v = (m4 + v) / 10;
			else
				v = 0;
		}
		if (v != 0)
		{
			replacemult = v + 48;
			mult1.insert(0, replacemult);
		}
		if (j == y.size() - 1)
			mult = mult1;
		else
			mult = sum(mult, mult1);
	}
	if (x.size() >= y.size())
		size = x.size();
	else
		size = y.size();
	if (dat1 != 0 || dat2 != 0)
		mult.insert(mult.size() - x.size() - y.size() + dat1 + dat2, 1, '.');
	bool zeroyab = false;
	int o;
	for (o = 0; o < mult.size(); o++)
	{
		if (mult[o] != '0')
		{
			zeroyab = true;
			break;
		}
	}
	if (zeroyab)
		mult.erase(0, o);
	else
		mult.erase(0, o - 1);
	if (mult[0] == '.')
		mult.insert(0, 1, '0');
	if (manfi == true)
		mult.insert(0, 1, '-');
	return  mult;
}
std::string taghsim(std::string x, std::string y)
{
	int n = 0, i = 0, m = 0, r = 0, f = 0, k = 0, dat1 = 0, dat2 = 0, dat = 0, size = 0;
	bool datyaab = false;
	bool manfi = false;
	std::string j = "0";
	if (x == "0")
		return j;
	//bool error = false;
	//if (y == "0")
	//{
	//	error = true;
	//}
	if (x[0] == '-' && y[0] == '-')
	{
		x.erase(0, 1);
		y.erase(0, 1);
	}
	else if (x[0] == '-' && y[0] != '-')
	{
		x.erase(0, 1);
		manfi = true;
	}
	else if (x[0] != '-' && y[0] == '-')
	{
		y.erase(0, 1);
		manfi = true;
	}
	for (i = 0; i < x.size(); i++)
	{
		if (x[i] == '.')
		{
			dat1 = i;
			datyaab = true;
		}
	}
	for (i = 0; i < y.size(); i++)
	{
		if (y[i] == '.')
		{
			dat2 = i;
			datyaab = true;
		}
	}
	if (datyaab == true)
	{
		if (dat1 != 0 && dat2 != 0)
		{
			if ((x.size() - dat1 - 1) > (y.size() - dat2 - 1))
				y.insert(y.size(), (x.size() - dat1 - 1) - (y.size() - dat2 - 1), '0');// ezafe kardane 0 be akhare string baraye jame
			else if ((x.size() - dat1 - 1) < (y.size() - dat2 - 1))
				x.insert(x.size(), (y.size() - dat2 - 1) - (x.size() - dat1 - 1), '0');
		}
		else
		{
			if (dat1 == 0)
			{
				x.insert(x.size(), 1, '.');
				x.insert(x.size(), y.size() - dat2 - 1, '0');
			}
			if (dat2 == 0)
			{
				y.insert(y.size(), 1, '.');
				y.insert(y.size(), x.size() - dat1 - 1, '0');
			}
		}
		for (i = 0; i < x.size(); i++)
		{
			if (x[i] == '.')
				dat1 = i;
		}
		for (i = 0; i < y.size(); i++)
		{
			if (y[i] == '.')
				dat2 = i;
		}
		if (dat1 > dat2)
			dat = dat1;
		else
			dat = dat2;

		if (dat1 != 0)
			x.erase(dat1, 1);
		if (dat2 != 0)
			y.erase(dat2, 1);
	}
	if (x.size() >= y.size())
		size = x.size();
	else
		size = y.size();
	int div[1001] = { 0 };
	int mul[1001] = { 0 };
	int makan0 = 1001;
	int t;
	bool javabyaab = false;
	bool jodasazi = true;
	std::string javab;
	std::string test, divide1;
	int tagh;
	std::string divide = "";
	std::string x1;
	bool zero = 0;
	if (x == "0")
		zero = 1;
	int momaiez = 0;
	if (x.size() < y.size())
	{
		momaiez = y.size() - x.size();
	}
	bool zero0 = false;
	for (i = 0; i < x.size(); i++)
	{
		if (x[i] != '0')
		{
			zero0 = true;
			break;
		}
	}
	if (zero0 == true)
		x.erase(0, i);
	zero0 = false;
	for (i = 0; i < y.size(); i++)
	{
		if (y[i] != '0')
		{
			zero0 = true;
			break;
		}
	}
	if (zero0 == true)
		y.erase(0, i);
	//cout << x << endl << y << endl;
	x.insert(x.size(), 10, '0');
	//cout << "x bade " << x << endl << "y   " << y << endl;
	x1 = x;
	int d1, j1;
	int edame = x.size();
	int joda = -1;
	divide1 = x.substr(0, y.size());
	for (i = 0; i < y.size(); i++)
	{
		if (divide1[i] < y[i])
		{
			jodasazi = false;
			break;
		}
		if (divide1[i]>y[i])
		{
			jodasazi = true;
			break;
		}
	}
	if (jodasazi == false)
		divide1 = x.substr(0, y.size() + 1);
	int divisize1 = divide1.size();
	//	cout << x << endl << y << endl;
	//cout << "divi1 :" << divi << endl;
	//cout << "x :" << x << endl << "y :" << y << endl;
	while (true)
	{
		joda++;
		for (i = 0; i < y.size(); i++)
		{
			if (divide1[i] < y[i])
			{
				jodasazi = false;
				break;
			}
			if (divide1[i]>y[i])
			{
				jodasazi = true;
				break;
			}
		}
		//if (jodasazi == false)
		//divi = x.substr(0, y.size() + 1);
		//cout << "edame  " << edame << endl << "divi size  " << divi.size() << endl;
		//edame -= (divi.size() - 1);
		//cout << "edame :" << edame << endl;
		//cout << "divi :" << divi << endl;
		tagh = 0;
		for (k = 9; k >= 0; k--)
		{
			test = std::to_string(k);
			javab = zarb(y, test);
			if (javab.size() > divide1.size())
			{
				javabyaab = false;
				continue;
			}
			else if (javab.size() == divide1.size())
			{
				for (int i = 0; i < javab.size(); i++)
				{
					if (javab[i] > divide1[i])
					{
						javabyaab = false;
						break;
					}
					else if (divide1[i] > javab[i])
					{
						javabyaab = true;
						break;
					}
					else
					{
						javabyaab = true;
					}
				}
			}
			else
			{
				javabyaab = true;
			}
			if (javabyaab == true)
			{
				tagh = k;
				break;
			}
		}
		//cout << "divi :" << divi << endl << "tagh :" << tagh << endl;
		//cout << "tagh :" << tagh << endl;
		divide += std::to_string(tagh);
		if (tagh != 0)
			x = mine(divide1, javab);
		if (joda < x1.size() - divisize1)
		{
			//cout << "x1 : " << x1 << endl << "joda :" << joda << endl;
			//cout << "x1[divi.size() + joda] :" << x1[divi.size() + joda] << endl;
			x += x1[divisize1 + joda];
		}
		else
			break;
		//cout << "joda               :" << joda << endl;
		//cout << "x baade menha :" << x << endl;
		int e;
		bool zeroyab = false;
		for (e = 0; e < x.size(); e++)
		{
			if (x[e] != '0')
			{
				zeroyab = true;
				break;
			}
		}
		if (zeroyab)
			x.erase(0, e);
		else
			x.erase(0, e - 1);
		//	cout << "x baade menha :" << x << endl;
		divide1 = x;
	}
	//cout << "javab 1 : " << javabeaval << endl;
	divide.insert(0, 6, '0');
	//cout << "javab bade 0 momaiez : " << javabeaval << endl;
	//cout << "momaiez " << momaiez << endl;
	divide.insert(divide.size() - 10, 1, '.');
	//cout << "javab bade momaiez" << javabeaval << endl;
	//if (javabeaval[0] == '.')
	//javabeaval.insert(0, 1, '0');
	bool handledat = false;
	for (i = 0; i < divide.size(); i++)
	{
		if (divide[i] == '.')
		{
			handledat = true;
			break;
		}
	}
	/*for (int o = 0; o < i; o++)
	{
	if(javabeaval[o] != '0')
	break
	}*/
	if (divide[0] == '.')
		divide.insert(0, 1, '0');
	//cout << "javabeavab nahaiiii :" << javabeaval << endl;
	if (zero == 1)
		divide = '0';
	if (momaiez != 0)
	{
		if (divide[1] != '.')
			divide.erase(0, 1);
	}
	for (i = 0; i < divide.size(); i++)
	{
		if (divide[i] == '.')
		{
			break;
		}
	}
	bool  erasedat = false;
	int o;
	for (o = 0; o < i; o++)
	{
		if (divide[o] != '0')
		{
			erasedat = true;
			break;
		}
	}
	if (erasedat == true)
		divide.erase(0, o);
	else
		divide.erase(0, o - 1);
	if (manfi == true)
		divide.insert(0, 1, '-');
	return divide;
}
char handle;
char eraseorinsert;
void handle_mine_sum(std::string x, char a, std::string y)
{
	handle = ' ';
	eraseorinsert = ' ';
	if (a == '+')
	{
		if (x[0] == '-' && y[0] == '-')
			handle = 's';
		else if (x[0] != '-' && y[0] != '-')
			handle = 's';
		else
			handle = 'm';
	}
	else
	{
		if (x[0] == '-' && y[0] == '-')
		{
			eraseorinsert = 'e';
			handle = 'm';
		}
		else if (x[0] != '-' && y[0] != '-')
			handle = 'm';
		else if (x[0] == '-' && y[0] != '-')
		{
			eraseorinsert = 'i';
			handle = 's';
		}
		else
		{
			eraseorinsert = 'e';
			handle = 's';
		}
	}
}
std::string jakhali(std::string x)
{
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == ' ')
			x.erase(i, 1);
	}
	return x;
}
void handle_parantez(std::string x)
{
	int pbaz = 0, pbaste = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '(')
			pbaz++;
		if (x[i] == ')')
			pbaste++;
	}
	/*if (pbaz != pbaste)
	{
	cout << "ERROR";
	return;
	}*/
}
std::string calculator::big_numbers_calculate(std::string x)
{
	x = jakhali(x);
	handle_parantez(x);
	x.insert(0, 1, '(');
	x.insert(x.size(), 1, ')');
	int tedadp = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '(')
			tedadp++;
	}
	int makan = 0, manfi = 0, i = 0, j = 0, pbaz = -1, pbaste = x.size(), operator1 = 0, operator2 = -1, temp = 0, operator3 = x.size(), tedadzt = 0, tedadjm = 0;
	{
		for (int o = 0; o < tedadp; o++)
		{
			manfi = 0, pbaz = -1, pbaste = x.size(), operator1 = 0, operator2 = -1, temp = 0, operator3 = x.size(), tedadzt = 0, tedadjm = 0;
			for (i = 0; i < x.size(); i++)
			{
				if (x[i] == '(')
					pbaz = i;// (
			}
			for (i = pbaz; i < x.size(); i++)
			{
				if (x[i] == ')')
				{
					pbaste = i;// )
					break;
				}
			}
			for (i = pbaz + 1; i < pbaste; i++)
			{
				if (x[i] == '-'&&x[i + 1] == '-')
				{
					x.replace(i, 2, "+");
					pbaste -= 1;
				}
				if (x[i] == '-'&&x[i + 1] == '+')
				{
					x.erase(i + 1, 1);
					pbaste -= 1;
				}
			}
			for (i = pbaz + 1; i < pbaste; i++)
			{
				if (x[i] == '*' || x[i] == '/')
					tedadzt++;
			}
			if (tedadzt != 0)
			{
				for (j = 0; j < tedadzt; j++)
				{
					for (i = 0; i < x.size(); i++)
					{
						if (x[i] == '(')
							pbaz = i;// (
					}
					for (i = pbaz; i < x.size(); i++)
					{
						if (x[i] == ')')
						{
							pbaste = i;// )
							break;
						}
					}
					for (i = pbaz + 1; i < pbaste; i++)
					{
						if (x[i] == '-'&&x[i + 1] == '-')
						{
							x.replace(i, 2, "+");
							pbaste -= 1;
						}
						if (x[i] == '-'&&x[i + 1] == '+')
						{
							x.erase(i + 1, 1);
							pbaste -= 1;
						}
					}
					for (i = pbaz + 1; i < pbaste; i++)
					{
						if (x[i] == '*' || x[i] == '/')
						{
							operator1 = i;// * ya / aval daroone parantez dakheli
							break;
						}
					}
					if (x[i] == '*')
						temp = 1;
					else
						temp = 0;
					operator2 = pbaz;
					for (i = operator1 - 1; i > pbaz; i--)
					{
						if (x[i + 1] == '+' || x[i + 1] == '-' || x[i + 1] == '(')
						{
							if ((x[i] == '(' || x[i] == '+' || x[i] == '-') && x[i + 1] == '-')
							{
								operator2 = i;
								break;
							}
							else
							{
								operator2 = i + 1;
								break;
							}
						}
					}
					std::string a = x.substr(operator2 + 1, operator1 - operator2 - 1);
					operator3 = pbaste;
					for (i = operator1 + 1; i <= pbaste; i++)
					{
						if ((x[i] == '+' || x[i] == '-' || x[i] == ')' || x[i] == '*' || x[i] == '/') && i != operator1 + 1)
						{
							operator3 = i;
							break;
						}
					}
					std::string b = x.substr(operator1 + 1, operator3 - operator1 - 1);
					if (temp == 1)
					{
						std::string h = zarb(a, b);
						x.replace(operator2 + 1, operator3 - operator2 - 1, h);
						//cout << x << endl;
					}
					else
					{
						std::string h = taghsim(a, b);
						x.replace(operator2 + 1, operator3 - operator2 - 1, h);
						//cout << x << endl;
					}
				}
			}
			for (i = 0; i < x.size(); i++)
			{
				if (x[i] == '(')
					pbaz = i;// (
			}
			for (i = pbaz; i < x.size(); i++)
			{
				if (x[i] == ')')
				{
					pbaste = i;// )
					break;
				}
			}
			for (i = pbaz + 1; i < pbaste; i++)
			{
				if ((x[i + 1] == '+' || x[i + 1] == '-') && (x[i] != '+' && x[i] != '-' && x[i] != '('))
					tedadjm++;
			}
			for (j = 0; j < tedadjm; j++)
			{
				for (i = 0; i < x.size(); i++)
				{
					if (x[i] == '(')
						pbaz = i;// (
				}
				for (i = pbaz; i < x.size(); i++)
				{
					if (x[i] == ')')
					{
						pbaste = i;// )
						break;
					}
				}
				for (i = pbaz + 1; i < pbaste; i++)
				{
					if (x[i - 1] == '-' && x[i] == '-')
					{
						x.replace(i - 1, 2, "+");
					}
					if (x[i - 1] == '+' && x[i] == '-')
					{
						x.erase(i - 1, 1);
					}
				}
				makan = 0;
				if (tedadjm != 0)
				{
					for (i = 0; i < x.size(); i++)
					{
						if (x[i] == '(')
							pbaz = i;// (
					}
					for (i = pbaz; i < x.size(); i++)
					{
						if (x[i] == ')')
						{
							pbaste = i;// )
							break;
						}
					}
					operator1 = 0, operator2 = -1, temp = 0, operator3 = x.size();
					for (i = pbaz + 1; i < pbaste; i++)
					{
						if ((x[i] == '+' || x[i] == '-') && x[i - 1] != '(')
						{
							operator1 = i;// + ya - aval daroone parantez dakheli
							break;
						}
					}
					if (x[operator1] == '+')
						temp = 1;
					else
						temp = 0;
					for (i = operator1 - 1; i >= pbaz; i--)
					{
						if (x[i] == '(')
						{
							operator2 = i;
							break;
						}
					}
					std::string c = x.substr(operator2 + 1, operator1 - operator2 - 1);
					for (i = operator1 + 1; i <= pbaste; i++)
					{
						if (x[i] == '+' || x[i] == '-' || x[i] == ')')
						{
							operator3 = i;
							break;
						}
					}
					std::string d = x.substr(operator1 + 1, operator3 - operator1 - 1);
					handle_mine_sum(c, x[operator1], d);
					if (handle == 's')
					{
						if (eraseorinsert == 'e')
							d.erase(0, 1);
						if (eraseorinsert == 'i')
							d.insert(0, 1, '-');
						std::string f = sum(c, d);
						x.replace(operator2 + 1, operator3 - operator2 - 1, f);
						//cout << x << endl;
					}
					if (handle == 'm')
					{
						if (eraseorinsert == 'e')
							d.erase(0, 1);
						if (eraseorinsert == 'i')
							d.insert(0, 1, '-');
						std::string f = mine(c, d);
						x.replace(operator2 + 1, operator3 - operator2 - 1, f);
						//cout << x << endl;
					}
				}
			}
			int parantez = 0;
			for (i = 0; i < x.size(); i++)
			{
				if (x[i] == '(')
					pbaz = i;// (
			}
			for (i = pbaz + 1; i < x.size(); i++)
			{
				if (x[i] == ')')
				{
					pbaste = i;// )
					break;
				}
			}
			for (int i = pbaz + 2; i < pbaste; i++)
			{
				if (x[i] == '+' || x[i] == '-' || x[i] == '/' || x[i] == '*')
				{
					parantez = 1;
				}
				else
					parantez = 0;
			}
			if (parantez == 0)
			{
				for (i = 0; i < x.size(); i++)
				{
					if (x[i] == '(')
						pbaz = i;// (
				}
				for (i = pbaz + 1; i < x.size(); i++)
				{
					if (x[i] == ')')
					{
						pbaste = i;// )
						break;
					}
				}
				x.replace(pbaz, 1, "");
				x.replace(pbaste - 1, 1, "");
				//cout << x << endl;
			}
		}
	}
	bool fiveashar = false;
	for (i = 0; i < x.size(); i++)
	{
		if (x[i] == '.')
		{
			fiveashar = true;
			break;
		}
	}
	if (fiveashar)
	{
		if (i + 5 < x.size())
			x.erase(i + 6, x.size() - i - 5);
	}
	if (x[0] == '.')
		x.insert(0, 1, '0');
	if (fiveashar)
	{
		for (i = x.size() - 1; i >= 0; i--)
		{
			if (x[i] != '0')
				break;
		}
		x.erase(i + 1);
	}
	if (x[x.size() - 1] == '.')
		x.erase(x.size() - 1);
	if (x[0] == '+')
		x.erase(0, 1);
	return x;
}