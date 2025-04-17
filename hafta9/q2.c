#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
bool isPalindrome(char *str,int start,int end)
{
	if(start>end) return true;
	if(str[start]!=str[end]) return false;
	return isPalindrome(str, start+1,end-1);
}
int main()
{
	char *str="madam1";
	if(isPalindrome(str,0,strlen(str)-1)==true) printf("%s is palindrome\n",str);
	else printf("%s is not palindrome\n",str);
	return 0;
}

