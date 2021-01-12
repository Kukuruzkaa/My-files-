#include <stdio.h>
#include <stdlib.h>

int strlength(char* str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}



char	*to_upper_case(char* str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i]-32;
		i++;
	}
	return str;
}



char*	concat(char* str1, char* str2)
{
	int str1len, str2len;

	str1len = strlength(str1);
	str2len = strlength(str2);

	char* str3 = (char*)malloc(sizeof(char)*(str1len + str2len));

	int i;
	i = 0;

	for (i = 0; i < str1len; i++)
		str3[i] = str1[i];

	int j;

	j = 0;

	while (str2[j] != '\0')
	{
		str3[str1len + j] = str2[j];
			j++;
	}
	str3[str1len + str2len] = '\0';
	return str3;
}

/*char*	dup_string(char* str, int n)
{
	int strlen;

	strlen = strlength(str);

	char* str1 = (char*)malloc(sizeof(char)*((n*strlen) + 1));

	int i, j;
	
	i = 0;
	for(j = 1; j <= n; j++)
		{
			for(i = 0; i < strlen; i++)
				str1[..i...] = str[i];
		}
	str1[i] = '\0';
	return str1;
}

/*
012
abc

012345678
abcabcabc
*/

char*	appendl(char* str, char ch)
{
	int strlen = strlength(str);

	char c;

	char* str2 = (char*)malloc(sizeof(char)*(strlen + 1 + 1));
	
	int i = 0;

	for (i = 0; i < strlen; i++)
		str2[i] = str[i];
	
	str2[strlen] = ch;
	str2[strlen + 1] = '\0';
	return str2;
}



char*	appendr(char* str, char ch)
{
	int strlen = strlength(str);

	char c;

	char* str2 = (char*)malloc(sizeof(char)*(1 + strlen));

	str2[0] = ch;

	int i = 0;

	for (i = 0; i < strlen; i++)
		str2[i + 1] = str[i];
	
	str2[1 + strlen] = '\0';
	return str2;
}


void  ft_split(char *s)
{
	char *word = ""; //malloc
	
	int i;

	i = 0;
	

	while (s[i] != '\0')
	{
		if(s[i] ==  ' ')
		{
			printf("%s\n", word);
			word  = ""; //malloc
		}
		else 
			word = appendl(word, s[i]);
			i++;
	}
	printf("%s\n", word);
}

//foo bar hello 123




/*int_to_str(42) -> "42"

"458"

458%10 = 8
458/10 = 45
45%10 = 5
45/10 = 4
4%10 = 4
4/10 = 0*/

char*	int_to_str(int n)
{
	char* str = malloc(sizeof(char));
	str[0] = '\0';
	char* strclean;

	while (n > 0)
	{
        strclean = str;
        str = appendr(str, n % 10 + 48);
		free(strclean);
			
		n = n /10;
	}
	return str;
}



int		main()
{
	char str [] = "ab cgc ggh  ggh ";

	ft_split(str);
	return 0;
}
