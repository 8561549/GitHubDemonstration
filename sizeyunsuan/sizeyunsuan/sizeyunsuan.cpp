#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void Shengcheng();
void Simple();
void real();
void result();
int MaxGYS(int a, int b);
int system(const char *string);

int main(void)
{
	int n;
Loop1: printf("\n\n\n\n\t\t\t����13�ƿ�-1������\n\n\t\t\t[1] Сѧ��ѧ�޷���ʮ������������ϰ��\n\n\t\t\t[2]Сѧ��ѧ��������������ϰ��\n\n\t\t\t[3] �˳�����\n\n\t\t\t��������Ӧ��ѡ��,���س���ȷ��:");
	scanf_s("%d", &n);
	system("cls");
	if (n == 1)
		Shengcheng();
	else
		if (n == 2)
			result();

		else
			if (n == 3)
			{
				printf("\n\n\n\n\n\n\t\t�ټ�\n\n\t\t");
				return 0;
			}
			else
				printf("�����������������");
	goto Loop1;
	return 0;
}

void Shengcheng()
{
	int i, a, b, p, q, r, c, sum = 0, d = 0, e = 0;
	srand((unsigned)time(NULL));
	printf("��������ʮ�����������⣬����Ŷ��\n\n");

	for (i = 0; i < 10; i++)

	{
		a = rand() % 50;
		b = rand() % 50;
		p = rand() % 50;
		q = rand() % 50;
		r = rand() % 50;
		while (r == 0)
		{
			i--;
		}
		while (r != 0)
		{
			printf("��������Ĵ𰸣�%d+%d-%d*%d/%d=", a, b, p, q, r);
			scanf_s("%d", &c);
			printf("\n");
			if ((a + b - p*q / r) == c)

			{
				printf("��ϲ�����ˣ��ɵĲ���\n\n");
				sum = sum + 10;
				e = e + 1;
			}
			else
			{
				printf("�𰸴��������Ŭ����\n\n");
				d = d + 1;
			}
			break;
		}
		continue;
	}
	printf("���ܹ������%d���⣬�����%d���⡣\n\n", e, d);

	printf("��ĵ÷�Ϊ��%d�ּ���Ŭ��Ӵ��\n\n", sum);
	return;
}

void Simple()
{
	int m, b, c, d, t;
	m = rand() % 3 + 1;
	b = rand() % 20 + 1;
	c = rand() % 20 + 1;
	switch (m)
	{
	case 1: {
		d = b + c;
		printf("%d+%d=\t\t\t\t\t\t\t\t\t%d\n", b, c, d);
	}break;
	case 2: {
		if (b>c)
		{
			t = b;
			b = c;
			c = t;
		}
		d = b - c;
		printf("%d-%d=\t\t\t\t\t\t\t\t\t%d\n", b, c, d);
	}break;
	case 3: {
		d = b*c;
		m = rand() % 2 + 1;
		if (m == 1)
			printf("%d*%d=\t\t\t\t\t\t\t\t\t%d\n", b, c, d);
		else
			printf("%d/%d=\t\t\t\t\t\t\t\t\t%d\n", d, b, c);
	} break;
	}
	return;
}



void real()
{
	int a, b, c, d, e, f, g, h, t;
	a = rand() % 4 + 1;
	b = rand() % 9 + 1;//��һ�����ַ���
	c = rand() % 9 + 1;//��һ�����ַ�ĸ
	d = rand() % 9 + 1;//�ڶ������ַ���
	e = rand() % 9 + 1;//�ڶ������ַ�ĸ
	if (b>c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (d>e)
	{
		t = d;
		d = e;
		e = t;
	}

	switch (a)
	{
	case 1: {
		f = c*e;
		g = b*e + d*c;
		h = MaxGYS(g, f);
		f = f / h;
		g = g / h;
		printf("(%d/%d)+(%d/%d)=\t\t\t\t\t\t\t\t(%d/%d)\n", b, c, d, e, g, f);
	}break;
	case 2: {
		f = c*e;
		g = b*e - d*c;
		if (g>0)
		{
			h = MaxGYS(g, f);
			f = f / h;
			g = g / h;
			printf("(%d/%d)-(%d/%d)=\t\t\t\t\t\t\t\t(%d/%d)\n", b, c, d, e, g, f);
		}
		else
		{
			g = abs(g);
			h = MaxGYS(g, f);
			f = f / h;
			g = g / h;
			printf("(%d/%d)-(%d/%d)=\t\t\t\t\t\t\t\t(%d/%d)\n", d, e, b, c, g, f);
		}
	}break;
	case 3: {
		f = c*e;
		g = b*d;
		h = MaxGYS(g, f);
		f = f / h;
		g = g / h;
		printf("(%d/%d)*(%d/%d)=\t\t\t\t\t\t\t\t(%d/%d)\n", b, c, d, e, g, f);
	}break;
	case 4: {
		f = b*e;
		g = c*d;
		h = MaxGYS(g, f);
		f = f / h;
		g = g / h;
		printf("(%d/%d)/(%d/%d)=\t\t\t\t\t\t\t\t(%d/%d)\n", b, c, d, e, g, f);
	}
	default:break;
	}
	return;
}


int MaxGYS(int a, int b)
{
	int c, t;
	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}
void result()
{
	int m, i;
	for (i = 0; i<30; i++)
	{
		m = rand() % 2 + 1;
		if (m == 1)
			Simple();
		else
			real();
	}
	system("pause");
	system("cls");
	system("pause");
	system("cls");
	return;

}