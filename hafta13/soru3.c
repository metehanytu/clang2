char convert2Lower(char x)
{
  if(x>='A' && x<='Z') x+=32;
  return x;
}
int countVowels(char *str)
{
  char ch=convert2Lower(*str);
  if(*str=='\0') return 0;
  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
   return 1+countVowels(str+1);
  return countVowels(str+1);
}
