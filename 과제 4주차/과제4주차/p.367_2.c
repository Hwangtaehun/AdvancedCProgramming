#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char check_alpha(char alpha);

int main()
{
	char alpaha;

	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf("%c", &alpaha);

		if (alpaha >= 'a' && alpaha <= 'z')
		{
			alpaha = check_alpha(alpaha);
			printf("%c�� ���ĺ� �����Դϴ�.", alpaha);
			break;
		}
		printf("�ٽ� �Է����ּ���");
	}

	return 0;
}

char check_alpha(char alpha)
{
	int change = 0;
	change = 'a' - 'A';
	alpha -= change;
	//printf("%c�� ���ĺ� �����Դϴ�.", alpha);
}