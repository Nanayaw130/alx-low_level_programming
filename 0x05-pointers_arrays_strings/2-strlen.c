/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the character array.
 * Return: length of the string
 */
int _strlen(char *s)
 {
   char *p = s;
   int count = 0;
   while(*p != '\0')
   {
   	count++;
  	 p++;
    }
    return count;
}


