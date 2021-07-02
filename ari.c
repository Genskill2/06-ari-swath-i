#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>

string ari(string s)
{
 int i=0;
 float chcnt=0, wrdcnt=0, sentcnt=0;
 
 while(s[i]!='\0')
 {
  if(isalnum(s[i]))
   {chcnt++;}
   
   if(s[i]==' ')
    {wrdcnt++;}
    
   if(s[i]== '.' || s[i]== '!' || s[i]== '?')
    {sentcnt++;}
    
    i++;
  }
  
  
  int ar= ceil( ( 4.71 * (chcnt/wrdcnt)) + ( 0.5* (wrdcnt/sentcnt)) - 21.43 ) ;
  string sret;
  
  switch(ar)
   {
    case 1: sret= "Kindergarten";
    break;
    case 2: sret = "First/Second Grade";
    break;
    case 3: sret = "Third Grade";
    break;
    case 4: sret = "Fourth Grade";
    break;
    case 5: sret = "Fifth Grade"; 
    break;
    case 6: sret = "Sixth Grade";
    break;
    case 7: sret = "Seventh Grade";
    break;
    case 8: sret = "Eighth Grade";
    break;
    case 9: sret = "Ninth Grade";
    break;
    case 10: sret = "Tenth Grade";
    break;
    case 11: sret = "Eleventh Grade";
    break;
    case 12: sret = "Twelfth Grade";
    break;
    case 13: sret = "College student";
    break;
    case 14: sret = "Professor";
    break;
    
    default:break;
    }
    
    return sret;

 }
