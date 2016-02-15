/*Done using recursion*/
#include <stdio.h>
#include <string.h>
int lcs_len(char *s, char *t, int s_len, int t_len){//call it like this lcs_len(s, t, strlen(s)-1, strlen(t)-1) 
	if(s_len < 0 || t_len < 0){
		return 0;
	}
	if(s[s_len] == t[t_len])
	        return lcs_len(s, t, s_len-1, t_len-1)+1;
	return max(lcs_len(s, t, s_len-1, t_len),lcs_len(s, t, s_len, t_len-1));
}
int main(){
	char s[100],t[100];
	int store=lcs_len(s,t,strlen(s)-1,strlen(t)-1);
	printf("%d\n", store);
}
