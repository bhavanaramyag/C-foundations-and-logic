#include<stdio.h>
int main()
{
  char ch;
  printf("enter a character=");
  scanf("%c", &ch);
  if(ch>='A' && ch<='Z')
  {
    printf("convert to small case=%c", ch+32);
  }
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("VOWEL\n");
  }
  else if(ch>='a' && ch<='z')
  {
    printf("CONSONENT\n");
  }
  else
  {
    printf("it is NOT a letter!");
  }
    return 0;
}

/*
  Program: Case Conversion, Vowel/Consonant Check & Character Analysis
  
  Sample Input & Output 1 (Uppercase Input):
  enter a character=M
  convert to small case=m

  Sample Input & Output 2 (Lowercase Vowel Input):
  enter a character=e
  CONSONENT  <-- (Note: see quick logic tip below!)

  Sample Input & Output 3 (Non-letter Input):
  enter a character=7
  it is NOT a letter!
*/
