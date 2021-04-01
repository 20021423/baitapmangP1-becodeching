// https://paste.ubuntu.com/p/zm8c7QqXDj/?fbclid=IwAR21pexDZDM-FzHLwmWQ4gRVpMsYZFwcSCoFzHFt87BXxAtRkrjIOjAu3YQ

#include <iostream>
using namespace std;

void NhapMang(int a[], int n);
void XuatMang(int a[], int n);

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Nhap [" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void ThemPhanTu(int a[], int& n, int pos, int value)
{
	for (int i = n; i > pos; i--)
	{
		a[i] = a[i - 1];
	}
	a[pos] = value;
	n++;
}
void SapXepMang(int a[], int b[], int na, int nb, int c[])
{
	int n = na + nb;
	int i = 0, j = 0, k = 0;
	while (k < n && i < na && j < nb)
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = b[j];
			j++;
			k++;
		}
	}
	while (i < na)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	while (j < nb)
	{
		c[k] = b[j];
		j++;
		k++;
	}
}

int main()
{
	int na;
	do
	{
		cout << "Nhap so phan tu mang a: ";
		cin >> na;
	} while (na <= 0);
	int nb;
	do
	{
		cout << "Nhap so phan tu mang b: ";
		cin >> nb;
	} while (nb <= 0);
	int n = na + nb;
	int a[100], b[100], c[200];
	NhapMang(a, na);
	NhapMang(b, nb);
	SapXepMang(a, b, na, nb, c);
	XuatMang(c, n);
	return 0;
}
