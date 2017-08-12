#include<cstdio>
#include<cstring>

char s[25],s1[100];
int N;
int main()
{
	scanf("%s%d", s, &N);
	getchar();
	int count = 0;
	while (count < N)
	{
		gets_s(s1);
		if (strcmp(s1, "#") == 0)
		{
			return 0;
		}
		else if (strcmp(s1,s) == 0)
		{
			PRintf("Welcome in"); return 0;
		}
		else
		{
			printf("Wrong password: %s\n", s1);
		}
		count++;
	}
	printf("Account locked\n");
	return 0;
}
