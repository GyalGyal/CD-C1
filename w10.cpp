#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	n = 2;
	switch (n)
	{
	case 0:
		printf("영입니다.");
		break;
	case 1:
		printf("일입니다.");
		break;
	case 2:
		printf("이입니다.");
		break;
	case 3:
		printf("삼입니다.");
		break;
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);
	if (n % 3 == 0)
	{
		printf("3의 배수");
	}
	else
	{
		printf("3의 배수가 아님");
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);

	switch (n % 3 == 0)
	{
	case 1:
		printf("3의 배수");
		break;
	default :
		printf("3의 배수가 아님");
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);
	 
	switch (n < 100 && n >= 10)
	{
	case 1:
		printf("두자리수");
		break;
	default:
		printf("두자리수 아님");
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);

	switch (n / 10)
	{
	case 0:
		printf("유소년");
		break;
	case 1:
		printf("청소년");
		break;
	case 2:
		printf("청 년");
		break;

	case 3:
		printf("중 년");
		break;

	case 4:
		printf("장 년");
		break;

	case 5:
		printf("노 년");
		break;

	case 6:
		printf("도전 백세");
		break;

	default:
		printf("성공 백세");
		break;
	}
	return 0;
}

//======================================================================================

int main()
{
	int i;
	int o, e;
	int n, m;

	for (i = 1; i <= 10; i++)
	{
		n = i;
		printf("%d", n);

		if (i % 2 == 1)
		{
			o = i;
			printf("%d", o);
		}
		else
		{
			e = i;
			printf("%d", e);
		}

		m = i;
		printf("%d", m);
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);

	if (n <= 10)
	{
		switch (n % 2 == 1)
		{
		case 0:
			printf("짝수");
			break;
		case 1:
			printf("홀수");
			break;
		}
	}
	else
	{
		printf("자연수");
	}
	return 0;
}

//======================================================================================

int main()
{
	int n;
	scanf("%d", &n);

	switch (n%7)
	{
	case 0:
		printf("금요일");
		break;
	case 1:
		printf("토요일");
		break;
	case 2:
		printf("일요일");
		break;
	case 3:
		printf("월요일");
		break;
	case 4:
		printf("화요일");
		break;
	case 5:
		printf("수요일");
		break;
	case 6:
		printf("목요일");
		break;
	}
	return 0;
}

//======================================================================================

int main()
{
	int a,b,c,d;
	int tot;
	float avg;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	tot = a + b + c + d;
	avg = tot/4.0;
	printf("총점 : %d점", tot);
	printf("\n평균 : %.2f점", avg);

	switch ((int)(avg / 10))
	{
	case 10:case 9:
		printf("참 잘했어요");
		break;
	case 8:
		printf("잘했어요");
		break;
	case 7:
		printf("화이팅");
		break;
	default:
		printf("힘내요. 할 수 없어요");
		break;
	}
	return 0;
}

//======================================================================================

int main()
{
	int a, i;
	int l = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		if (l < a)
		{
			l = a;
		}
	}
	printf("%d", l);
	return 0;
}

//======================================================================================

int main()
{
	int n;
	int i;
	bool res = false;
	scanf("%d", &n);

	if (n == 1)
	{
		printf("소수,합성수 아님");
		return 0;
	}
	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			res = true;
			break;
		}
	}
	if (res == false)
	{
		printf("소수");
	}
	else
	{
		printf("합성수");
	}
	return 0;
}




