#pragma once
namespace CharLib
{
	int length(char* a);
	char* concat(char* a, char* b, char* Result);
	char* copy(char* a, int b, int c, char* Result);
	char* remove(char* a, int b, int c, char* Result);
	char* paste(char* a, char* b, int c, char* Result);
	int find(char* a, char* b);
	int findEnd(char* a, char* b);
	char* replace(char* a, char* b, char* c, char* Result);
	char* replaceAll(char* a, char* b, char* c, char* Result);
}
