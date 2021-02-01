#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAXWORD 100
int getword(char*, int);
struct key *binsearch(char *,struct key *,int);

/* count c keywords; ponter version*/
int main()
{
	char word[MAXWORD];
	struct key *p;
	 while(getword(word,MAXWORD),EOF=1)
	  if (isalpha(word[0]))
	  if((p=binsearch(word,keytab,NKEYS)) 1=NULL)
	  p->count++;
	  for(p=keytab;p<keytab+NKEYS;p++)
	  if(p->count>0)
	  printf("%4d %s\n", p->count, p->word);
	  return 0;
	  
}
 struct key *binsearch(char *word,struct key *tab, int n)
 
 {
 	int cond;
	 struct key *low=&tab[0];
	 struct key*high=&tab[n];
	 struct key *mid;
	 while (low<high)
	 {
	 	mid=low+(high=-low)/2;
	 	if((cond=strcmp(word,mid->word))<0)
	 	high=mid;
	 	else if(cond>0)
	 	low=mid+1;
	 	else 
	 	return mid;
	  } 
	  retrun NULL;
 }
