#include <stdio.h>

int Validate(char A[])
{  
  
  for(int i=0 ; A[i]!='\0' ; i++)
  {
    if( (A[i]>='A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') || (A[i]>=48 && A[i]<=57) ) 
    {}
    else
    {
      return 0;
    }
    
    // if( !(A[i]>='A' && A[i]<='Z') && !(A[i]>='a' && A[i]<='z') && !(A[i]>=48 && A[i]<=57) ) 
    // {
    //     return 0;
    // }

  }
  return 1 ;
}




int main()
{

  //   char  s[] = { 'A' , 'k' , 'A' , 'I' , 'N' , 'U' , '\0'};
  char s[] = "AKAINU";
  

  printf("********************************2-Length***************************************\n");
  int i = 0;
  while (s[i] != '\0')
  {
    i++;
  }
  printf("Length of string is %d \n ", i);

  printf("********************************3-Inetrchanging the case of char***************************************\n");
  char B[] = "AKaInU100";
  for (int j = 0; B[j] != '\0'; j++)
  {
    if (B[j] >= 65 && B[j] <= 90)
    {
      B[j] = B[j] + 32;
    }
    else if (B[j] >= 'a' && B[j] <= 122)
    {
      B[j] = B[j] - 32;
    }
  }
  printf("%s \n", B);


  printf("*******************************4-Counting vovels, consonents and word  ****************************************\n");
  char C[] = "How are you   doing?"; 
  // char C[] = "AKaInU"; 
  int Vcount = 0;
  int Ccount = 0;
  for (int j = 0; C[j] != '\0'; j++)
  {

    if (C[j] == 65 || C[j] == 69 || C[j] == 73 || C[j] == 79 || C[j] == 85 || C[j] == 97 || C[j] == 101 || C[j] == 105 || C[j] == 111 || C[j] == 117)
    {
      Vcount++;
    }
    else if( (C[j]>='A' && C[j]<='Z') || (C[j]>='a' && C[j]<='z') )
    // else if( (C[i]>=65 && C[i]<=90) || (C[i]>=97 && C[i]<=122) )
    {
       Ccount++;
    }
  }
  printf("%d\n" , Vcount);
  printf("%d\n" , Ccount);
  int spacecount=0;  
  for(int j=0 ; C[j]!='\0' ; j++)
  {
    if(C[j]==' ' && C[j-1]!=' ')
    {
       spacecount++;
    }
  }
   printf("Total word(s) are : %d \n" , spacecount+1);
  

  printf("********************************5-Validate***************************************\n");

  char A[] = "Anil123";
  if( (Validate(A)) )
  {
    printf("Valid string \n");
  }
  else
  printf("Invalid string\n");
  

  return 0;
}