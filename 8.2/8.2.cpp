#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
char* Delete(char* s, const char* cs)
{
	char* d = new char[strlen(s) + 1];
	char* t = d;
	bool b;
	int j, k;
	for (int i = 0; s[i] != '\0'; i++)
	{
		b = true;
		j = 0;
		k = i;
		while (cs[j] != '\0')
		{
			if (s[k] == cs[j] && s[k] != '\0')
			{
				j++;
				k++;
			}
			else
				break;
		}
		if (cs[j] == '\0')
		{
			b = false;
			i = k - 1;
		}
		if (b)
			*t++ = s[i];
	}
	*t = '\0';
	strcpy(s, d);
	return d;
}
int main()
{
	char s[20] = "sch, ool";
	char cs[] = ","" ";
	cout << Delete(s, cs) << endl;
	return 0;
}