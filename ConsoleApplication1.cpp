#include <iostream>
#include <vector>
#include <string>
#include <taskschd.h>
using namespace std;
//task 1
void multi_2(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] *= 2;
	}
}
void reduce_a(vector<int> vec, int a)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] -= a;
	}
}
void div_on_first(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] /= vec[0];
	}
}
// Task 2.
int a;
int sum(const vector<int> a)
{
	int k = 0;
	for (int i = 0; i < a.size(); i++)
	{
		k += a[i];
	}
	return(k);
}

int square_sum(const vector<int> a)
{
	int k = 0;
	for (int i = 0; i < a.size(); i++)
	{
		k = k + a[i] * a[i];
	}
	return(k);
}
int sum_six(const vector<int> a)
{
	int k = 0;
	for (int i = 0; i < 6; i++)
	{
		k += a[i];
	}
	return(k);

}
int sum_k(const vector<int> a, int k1, int k2)
{
	int k = 0;
	for (int i = k1; i < k2; i++)
	{
		int k = 0;
		k += a[i];
	}
	return(k);
}
int mean(const vector<int> a)
{


}
int mean_k(const vector<int> a, int s1, int s2)
{
	double k = 0;
	for (int i = s1; i < s2; i++)
	{
		k += a[i];
	}
	return k / (s2 - s1 + 1);
}
// Task 3.
void swap_el(std::vector<int> a)
{
	for (int i = 0; i < (a.size() / 2) - 8; i++)
	{
		double b = a[i];
		a[i] = a[a.size() - 1 - i];
		a[a.size() - 1 - i] = b;
	}
}
// Task 4.
void remove_negative(vector<int>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] < 0)
		{
			a.erase(i);
			break;
		}
	}
}
void remove_last_even(vector<int>& a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[a.size() - 1 - i] % 2 == 0)
		{
			a.erase(a.size() - 1 - i);
		}
	}
}
// Task 5.
bool name_is_even(const string& a)
{
	if (a.size() % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Task 6.
bool first_is_longer(const string& f1, const string& f2)
{
	if (f1.size() > f2.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Task 7.
void longest_shortest(const string& g1, const string& g2,
	const string& g3, string& l,
	string& s)
{
	const int a = 3;
	string town[a];
	town[1] = g1;
	town[2] = g2;
	town[3] = g3;
	for (int i = 0; i < a; i++)
	{
		if (town[i].size() < s.size())
			s = town[i];
		if (town[i].size() > l.size())
			l = town[i];
	}
}

// Task 8.
string sub_str(const string& w, int m, int n)
{
	for (int i = m; i < n; i++)
		cout << w[i];

	// Task 9.
	void add_stars(string& w);
	{
		w.insert(0, w.size(), '*');
	}

	// Task 10.
	int count_of_a(const string& w);
	{
		int l = 0, sum = 0;
		for (int i = 0; i < w.size(); i++)
			if (w[i] == 'а')l++;
		sum = (l / w.size()) * 100;
	}

	// Task 11.
	string replace_can(const string& new_word);
	{
		bool f = true;
		int pos = 0;
		while (f);
		{
			pos = w.find("can", 0);
			if (pos != (int)string::npos)
				f = false;
			w.replace(pos, 3, "new_word");
		}

	}
