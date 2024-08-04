#include<stdio.h>
#include<string.h>

int strCompare(char *str1, char *str2, char *word){
	if(strlen(str1) != strlen(str2) || strlen(str1) != strlen(word)) return 0;
	
	
	int n = strlen(str1);
	for(int i = 0; i < n; i++){
		int d1 = str1[i] - str2[i];
		if(d1 == 0 || d1 == -32 || d1 == 32) continue;
		else return 0;
	}
	
	for(int i = 0; i < n; i++){
		int d1 = str1[i] - word[i]; 
		if(d1 == 0 || d1 == -32 || d1 == 32) continue;
		else return 0;
	}
	return 1;
}
void strDelDup(char *str, char *word){
	char res[100]; //to store the resultant string
	char *p1 = strtok(str, " ");
	
	while( p1 != NULL){
		char *p2 = strtok(NULL, " ");
		if(p2 == NULL){
			strcat(res, p1);
			break;
		}
		else if(strCompare(p1, p2, word)) {
			continue;
		}
		else{
			strcat(res, p1);
			strcat(res, " ");
		}
		p1 = p2;
	}
	//print
	printf("Output : %s\n", res);
}
int main(){
	char str[] = "A a is duplicate but a is not.";
	printf("Input  : %s\n", str);
	strDelDup(str, "a");
	return 0;
	
}

