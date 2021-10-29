#include "CharLib.h"

namespace CharLib
{
	int length(char* buf) {
		int i = 0;
		for (;; i++) {
			if (buf[i] == '\0') return i;
		}
		return i;
	}

    char* concat(char* a, char* b, char* Result)
    {
        int stringLengthOne = length(a);
        int i = 0;
        for (;; i++)
        {
            Result[i] = a[i];
            if (a[i] == '\0') break;
        }
        i = 0;
        for (;; i++)
        {
            Result[i + stringLengthOne] = b[i];
            if (b[i] == '\0') break;
        }
        return Result;
    }

    char* copy(char* a, int b, int c, char* Result)
    {
        int stringLengthOne = length(a);
        if (c <= 0 || b >= stringLengthOne)
        {
            Result[0] = 0;
            return Result;
        }
        if (b < 0)
        {
            int i = 0;
            while (c != i)
            {
                Result[i] = a[i];
                i++;
            }
            Result[i++] = '\0';
            return Result;
        }
        else
        {
            if (stringLengthOne - b <= c)
            {
                int i = b;
                int j = 0;
                while (a[i] != '\0')
                {
                    Result[j] = a[i];
                    j++;
                    i++;
                }
                Result[j++] = '\0';
                return Result;
            }
            else
            {
                int i = 0;
                int j = b;
                while (i != c)
                {
                    Result[i] = a[j];
                    j++;
                    i++;
                }
                Result[i++] = '\0';
                return Result;
            }
        }
    }
    char* remove(char* a, int b, int c, char* Result)
    {
        int stringLengthOne = length(a);
        if (c <= 0 || b > stringLengthOne)
        {
            Result[0] = 0;
            return Result;
        }
        if (b <= 0)
        {
            int j = 0;
            int i = 0;
            if (b + c >= stringLengthOne)
            {
                Result[0] = 0;
                return Result;
            }
            else
            {
                while (c != j)
                {
                    for (i = 0; i < stringLengthOne - j; i++)
                    {
                        a[i] = a[i + 1];
                    }
                    j++;
                }
            }
        }
        else
        {
            if (stringLengthOne - b <= c)
            {
                int i = b;
                while (a[i] != '\0')
                {
                    a[i] = '\0';
                    i++;
                }
            }
            else
            {
                int i = 0;
                int z = 0;
                int j = b;
                while (z < c)
                {
                    for (i = 0; i <= c - z; i++)
                    {
                        a[j + i] = a[j + i + 1];
                    }
                    z++;
                }
            }
        }
        int z = 0;
        while (a[z] != '\0')
        {
            Result[z] = a[z];
            z++;
        }
        Result[z++] = '\0';
        return Result;
    }
    char* paste(char* a, char* b, int c, char* Result)
    {
        int stringLengthOne = length(a);
        if (c < 0)
        {
            int i = 0;
            int j = 0;
            while (b[i] != '\0')
            {
                for (j = stringLengthOne; j >= 0; j--)
                {
                    a[j + 1 + i] = a[j + i];
                }
                a[i] = b[i];
                i++;
            }
        }
        else
        {
            if (c > stringLengthOne)
            {
                int i = 0;
                while (b[i] != '\0')
                {
                    a[stringLengthOne + i] = b[i];
                    i++;
                }
                a[i + stringLengthOne] = '\0';
            }
            else
            {
                int i = 0;
                int j = 0;
                while (b[i] != '\0')
                {
                    for (j = stringLengthOne; j >= c - 1; j--)
                    {
                        a[j + 1 + i] = a[j + i];
                    }
                    a[c + i] = b[i];
                    i++;
                }
                a[i + stringLengthOne] = '\0';
            }
        }
        int z = 0;
        while (a[z] != '\0')
        {
            Result[z] = a[z];
            z++;
        }
        Result[z++] = '\0';
        return Result;
    }
    int find(char* a, char* b)
    {
        int stringLengthTwo = length(b);
        int stringLengthOne = length(a);
        int i = 0;
        int j = 0;
        int k = -1;
        for (i; i <= stringLengthOne; i++)
        {
            if (a[i] == b[j])
            {
                if (k == -1)
                {
                    k = i;
                }
                j++;
                if (j == stringLengthTwo)
                {
                    break;
                }
            }
            else
            {
                if (k != -1)
                {
                    if (stringLengthOne - i < stringLengthTwo && j != stringLengthTwo)
                    {
                        k = -1;
                        break;
                    }
                    else
                    {
                        k = -1;
                    }
                    i--;
                }
                j = 0;
            }
        }
        return k;
    }
    int findEnd(char* a, char* b)
    {
        int stringLengthTwo = length(b);
        int stringLengthOne = length(a);
        int i = 0;
        int j = 0;
        int k = -1;
        for (i; i <= stringLengthOne - stringLengthTwo; i++)
        {
            if (a[stringLengthOne - stringLengthTwo - i] == b[j])
            {
                if (k == -1)
                {
                    k = stringLengthOne - stringLengthTwo - i;
                }
                j++;
                for (k; k < stringLengthTwo; k++)
                {
                    if (a[stringLengthOne - stringLengthTwo - i + k] == b[j])
                    {
                        j++;
                    }
                    else
                    {
                        k = -1;
                        j = 0;
                    }
                }
            }
            if (k != -1)
            {
                break;
            }
        }
        return k;
    }
    char* replace(char* a, char* b, char* c, char* Result)
    {
        int stringLengthOne = length(a);
        int stringLengthTwo = length(b);
        int stringLengthThree = length(c);
        int stringStartPosition = 0;
        int k = -1;
        int j = 0;
        int z = 0;
        int stringStartPositionFour = 0;
        for (stringStartPosition; stringStartPosition <= stringLengthOne; stringStartPosition++)
        {
            if (a[stringStartPosition] == b[j])
            {
                if (k == -1)
                {
                    k = stringStartPosition;
                }
                j++;
                if (j == stringLengthTwo)
                {
                    stringStartPosition++;
                    int z = 0;
                    while (c[z] != '\0')
                    {
                        Result[stringStartPositionFour] = c[z];
                        stringStartPositionFour++;
                        z++;
                    }
                    k = -1;
                    j = 0;
                    while (a[stringStartPosition] != '\0')
                    {
                        Result[stringStartPositionFour] = a[stringStartPosition];
                        stringStartPositionFour++;
                        stringStartPosition++;
                    }
                    break;
                }
            }
            else
            {
                if (k != -1)
                {
                    stringStartPosition = k;
                    Result[stringStartPositionFour] = a[stringStartPosition];
                    stringStartPositionFour++;
                    k = -1;
                }
                else
                {
                    Result[stringStartPositionFour] = a[stringStartPosition];
                    stringStartPositionFour++;
                }
                j = 0;
            }
        }
        Result[stringStartPositionFour] = '\0';
        return Result;
    }
    char* replaceAll(char* a, char* b, char* c, char* Result)
    {
        int stringLengthOne = length(a);
        int stringLengthTwo = length(b);
        int stringLengthThree = length(c);
        int stringStartPosition = 0;
        int k = -1;
        int j = 0;
        int z = 0;
        int stringStartPositionFour = 0;
        for (stringStartPosition; stringStartPosition <= stringLengthOne; stringStartPosition++)
        {
            if (a[stringStartPosition] == b[j])
            {
                if (k == -1)
                {
                    k = stringStartPosition;
                }
                j++;
                if (j == stringLengthTwo)
                {
                    int z = 0;
                    while (c[z] != '\0')
                    {
                        Result[stringStartPositionFour] = c[z];
                        stringStartPositionFour++;
                        z++;
                    }
                    k = -1;
                    j = 0;
                }
            }
            else
            {
                if (k != -1)
                {
                    stringStartPosition = k;
                    Result[stringStartPositionFour] = a[stringStartPosition];
                    stringStartPositionFour++;
                    k = -1;
                }
                else
                {
                    Result[stringStartPositionFour] = a[stringStartPosition];
                    stringStartPositionFour++;
                }
                j = 0;
            }
        }
        Result[stringStartPositionFour] = '\0';
        return Result;
    }
}
