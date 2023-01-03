#include<stdio.h>
#include<stdio.h>
void encrypted_form(char encrypted[ ] );
void decrypted_form(char decrypted[ ] );
int main()
{
 	char string[50];
	printf("Enter a string: ");
	gets(string);
	encrypted_form(string);
	decrypted_form(string);
}

void encrypted_form(char encrypted[])
{
	for(int i=0 ;( i < 100 && encrypted[i] != '\0' ); i++ )
		encrypted[i] = encrypted[i] + 3;
		
		printf("Encrypted Form: %s\n",encrypted);
}

void decrypted_form(char decrypted[])
{
	for (int i=0 ;( i < 100 && decrypted[i] != '\0' ); i++)
		decrypted[i] = decrypted[i] - 3;
		
		printf("Decrypted Form: %s\n",decrypted);
}


