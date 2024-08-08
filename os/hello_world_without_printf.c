#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main()
{
	string s = "";
	int a = open("a.txt" , O_RDONLY);
	int rd = read(a, s, 11);

}
