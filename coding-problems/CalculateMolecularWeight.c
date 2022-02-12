#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
/*
 need to -lm to add fmax to the optimised compilation
 
 To find the molecular weight of the string 
 
 H2O
 
 output 
 
 18
 
*/
int main()
{
	char s[51];scanf("%s",s);
	
	int i=0,ans=0;
	
	int mass()
	{
		return islower(s[i+1])?(i++,s[i]=='e' ? 4: s[i]=='g'? 24:
		s[i]=='a'?40:63): s[i]=='H'?1:s[i]=='C'?12:s[i]=='N'?14:
		s[i]=='O'?16:32;
	}
	int count()
	{
		int ans=0;
		while(s[++i] && isdigit(s[i]))
			ans=ans*10 + s[i]-'0';
		return fmax(ans,1);
	}
	while(s[i])
		ans+=mass()*count();
	return printf("%d",ans);
}
