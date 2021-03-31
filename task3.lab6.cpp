#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "stdafx.h"
using namespace std;
 
int main()
{    
   const int n = 3;
   int i,j,sum=0,v=0,maxsum=0;   
        int a[n][n],s[2*n];
        printf ("Kak vvodit' elementi?\n0 - random\n1 - s klaviaturi\n");
        scanf ("%i", &v);
        srand(time(0));
        switch (v)
        {
        case 0://random
                for (i=0; i<n; i++)
                        for (j=0; j<n; j++) 
                                a[i][j] = rand()%20;
                break;
        case 1:// sklavi
                for (i=0; i<n; i++)
                        for (j=0; j<n; j++)
                        {
                                printf ("a[%i][%i]= ", i+1, j+1);
                                scanf ("%i", &a[i][j]);
                        }
        }
   for (i=0; i<n; i++)
        {
                for (j=0; j<n; j++)
                {
                        printf ("%i ", a[i][j]);
                }
                printf ("\n");
        }
  system("PAUSE");
 /////////////////////////////////////////////////////// 
 for (j=0;j<(2*n);j++) s[j]=0;
  for (i=0;i<n;i++)
  {
      for (j=0;j+i<n;j++)
      {
          s[j]+=a[i][i+j];
          s[n+j]+=a[i+j][i]; 
      }      
  }
  for (j=0;j<n;j++) printf("%d\n",s[j]);
  for (j=n+1;j<(2*n);j++) printf("%d\n",s[j]);
  maxsum=-1000;
  for (j=1;j<n;j++)
      if (maxsum<s[j]) 
          maxsum=s[j];
  cout<<"Max sum"<<endl;
  printf("%d\n",maxsum);
        
  system("PAUSE");  
  return 0;
  }
