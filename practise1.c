// Write a program in C to input a string and print it.

/*
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[50];

    printf("\n\nAccept a string from keyboard :\n");
    printf("-----------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
    printf("The string you entered is : %s\n", str);
}
*/

// Write a program in C to find the length of a string without using library function.

/*
#include <stdio.h>
#include <stdlib.h>

void main(){
  char str[100];
  int l = 0;
  printf("Input the string: ");
  fgets(str, sizeof str, stdin);
  while (str[l]!='\0'){
    l++;
  }
  printf("Length of the string is: %d\n\n", l-1);
}
*/

// Write a program in C to separate the individual characters from a string.

/*
#include <stdio.h>
#include <stdlib.h>

void main(){
  char str[100];
  int l = 0;
  printf("Input the string: ");
  fgets(str, sizeof str, stdin);
  printf("The characters of the string are: \n");
  while (str[l]!=0){
    printf("%c ", str[l]);
    l++;
  }
  printf("\n");
}
*/

// Write a program in C to print individual characters of string in reverse order.

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
  char str[100];
  int l, i;
  printf("Input the given string:\n");
  fgets(str, sizeof str, stdin);
  l = strlen(str);
  printf("The characters of the string in the reverse order is: \n");
  for (i = l; i >= 0; i--){
    printf("%c ", str[i]);
  }
  printf("\n");
}
*/

// Write a program in C to count the total number of words in a string.

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100

void main(){
  char str[str_size];
  int i, wrd;
  printf("Input the string: ");
  fgets(str, sizeof str, stdin);
  i = 0;
  wrd = 1;
  while (str[i]!='\0'){
    if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
      wrd++;
    }
    i++;
  }
  printf("Total number of words in the string is: %d\n", wrd-1);
}
*/

// Write a program in C to compare two strings without using string library functions.

/*
#include <stdio.h>
#define str_size 100
int test(char* s1, char* s2){
  int flag = 0;
  while (*s1 != '\0' || *s2 != 0){
    if (*s1 == *s2){
      s1++;
      s2++;
    }
    else if((*s1 == '\0' && *s2 != '\0') || (*s1!='\0' && *s2 == '\0') || *s1 != *s2){
      flag = 1;
      break;
    }
  }
  return flag;
}

int main(void){
  char str1[str_size], str2[str_size];
  int flag = 0;
  printf("\nInput the 1st string : ");
   fgets(str1, sizeof str1, stdin);
   printf("Input the 2nd string : ");
   fgets(str2, sizeof str2, stdin);
   printf("\nString1: %s", str1);
   printf("String2: %s", str2);
   flag = test(str1, str2);
    if(flag == 0)
   {
       printf("\nStrings are equal.\n");
   }
   else if(flag == 1)
   {
      printf("\nStrings are not equal.");
   }
         return 0;
}
*/

// Write a program in C to count total number of alphabets, digits and special characters in a string.

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("--------------------------------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
while (str[i] != '\0')
{
  if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
  {
    alp++;
  }
  else if (str[i] >= '0' && str[i] <= '9')
  {
    digit++;
  }
  else
  {
    splch++;
  }

  i++;
}

printf("Number of Alphabets in the string is : %d\n", alp);
printf("Number of Digits in the string is : %d\n", digit);
printf("Number of Special characters in the string is : %d\n\n", splch);
}
*/

// Write a program in C to copy one string to another string.

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
  char str1[100], str2[100];
  int i;
  printf("Input the string: ");
  fgets(str1, sizeof str1, stdin);
  i = 0;
  while (str1[i]!='\0'){
    str2[i] = str1[i];
    i++;
  }
  str2[i] = '\0';
  printf("\nThe First string is : %s\n", str1);
  printf("The Second string is : %s\n", str2);
  printf("Number of characters copied : %d\n\n", i);
}
*/

// Write a program in C to find maximum occurring character in a string.

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100
#define chr_no 255

void main(){
  char str[str_size];
  int ch_fre[chr_no];
  int i = 0, max;
  int ascii;

  printf("Input the string: ");
  fgets(str, sizeof str, stdin);

  for (i = 0; i < chr_no; i++){
    ch_fre[i] = 0;
  }

  i = 0;
  while (str[i]!='\0'){
    ascii = (int)str[i];
    ch_fre[ascii] = ch_fre[ascii] + 1;
    i++;
  }

  max = 0;
  for (i = 0; i < chr_no; i++){
    if(i!=32){
      if(ch_fre[i]>ch_fre[max]){
        max = i;
      }
    }
  }
  printf("The highest frequency of character '%c' appears number of times: %d \n\n", max, ch_fre[max]);
}
*/

// Write a C program to sort a string array in ascending order.

/*
#include <stdio.h>
#include <string.h>
void main()
{
  char str[100],ch;
  int i,j,l;

       printf("\n\nSort a string array in ascending order :\n");
       printf("--------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
  l=strlen(str);

for (i = 1; i < l; i++)
  for (j = 0; j < l - i; j++)
    if (str[j] > str[j + 1])
    {
      ch = str[j];
      str[j] = str[j + 1];
      str[j + 1] = ch;
    }
printf("After sorting the string appears like : \n");
printf("%s\n\n", str);
}

*/

// Write a C program to concatenate two strings:

/*
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100], i, j,l,m,k;

       printf("\n\nConcatenate Two Strings Manually :\n");
       printf("-------------------------------------\n");

  printf("Input the first string : ");
    fgets(str1,sizeof str1,stdin);
  printf("Input the second string : ");
    fgets(str2,sizeof str2,stdin);
    l=strlen(str1);
    m=strlen(str2);
    for(i=0; i<l-1; ++i);  
str1[i] = ' '; 
i++;           

for (j = 0; j < m - 1; ++j, ++i)
{
  str1[i] = str2[j];
}
k = strlen(str1);

printf("After concatenation the string is : \n ");
for (i = 0; i < k; ++i)
{
  printf("%c", str1[i]);
}
printf("\n\n");
}

*/

// Write a program in C to convert a string to uppercase.

/*
#include <stdio.h>
#include <ctype.h>

int main(){
  int ctr = 0;
  int str_char;
  char str[100];

  printf("Input the string in lowercase: ");
  fgets(str, sizeof str, stdin);
  printf("Here is the above string in uppercase: \n ");

  while (str[ctr]){
    str_char = str[ctr];
    putchar(toupper(str_char));
    ctr++;
  }
  printf("\n\n");
  return 0;
}
*/

// Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

/*
#include <stdio.h>

void main(){
  int m, n;
  printf("Input the value of m: ");
  scanf("%d", &m);
  if (m!=0)
    if(m>0)
  n = 1;
    else
      n = -1;
    else
    n = 0;
  printf("The value of m = %d\n", m);
  printf("The value of n = %d\n", n);
}
*/

// Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.

/*
#include <stdio.h>
#include <string.h>

void main()
{
    int rl,phy,che,ca,total;
    float per;
    char nm[20],div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&phy,&che,&ca);
    total = phy+che+ca;
    per = total/3.0;
    if (per>=60)
   strcpy(div,"First");
    else
  if (per<60&&per>=48)
      strcpy(div,"Second");
  else
      if (per<48&&per>=36)
    strcpy(div,"Pass");
       else
    strcpy(div,"Fail");

       printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n",phy,che,ca);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
*/

// Write a C program to check whether a character is an alphabet, digit or special character.

/*
#include <stdio.h>
int main(){
  char sing_ch;
  printf("Input a character: ");
  scanf('%c', &sing_ch);

  if ((sing_ch >= 'a' && sing_ch <= 'z') || (sing_ch >= 'A' && sing_ch <= 'Z')){
    printf("This is an alphabet.\n");
  }
  else if(sing_ch >= '0' && sing_ch <= '9'){
    printf("This is a digit.\n");
  }
  else{
    printf("This is a special character.\n");
  }
}
*/

// Write a program in C to read any digit, display in the word.

/*
#include <stdio.h>
void main()
{
   int cdigit;

   printf("Input Digit(0-9) : ");
   scanf("%d",&cdigit);
   switch(cdigit)
   {
   case 0:
         printf("Zero\n");
         break;

   case 1:
         printf("one\n");
         break;
  case 2:
         printf("Two\n");
         break;
  case 3:
         printf("Three\n");
         break;
  case 4:
         printf("Four\n");
         break;
  case 5:
         printf("Five\n");
         break;
  case 6:
         printf("Six\n");
         break;
  case 7:
         printf("Seven\n");
         break;
  case 8:
         printf("Eight\n");
         break;
  case 9:
         printf("Nine\n");
         break;
  default:
         printf("invalid digit. \nPlease try again ....\n");
         break;
      }
}
*/