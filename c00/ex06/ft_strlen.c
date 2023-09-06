#include <stdio.h>
#include <unistd.h>

 int ft_strlen(char *str)
{
	int i;
	
	i = 0;

	while (str[i] != '\0')
{
	i++;
}
	return (i);
}

int main ()
{
	char a[] = "sadasas";
	int b = ft_strlen(a)+'0';
	write(1,&b,1);
}

