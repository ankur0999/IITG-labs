
#include <stdio.h>
int Handshakes(int);
int main() {
int n;
printf("Enter the number of people: ");
scanf("%d", &n);
printf("Total handshakes: %d\n", Handshakes(n));
return 0;
}
int Handshakes(int n) {
static int count = 0;
printf("No of recursive calls:%d\n", ++count);
if (n == 0 || n == 1)
return 0; // No handshakes are possible with 0 or 1 person
else
return (n - 1) + Handshakes(n - 1);
}
