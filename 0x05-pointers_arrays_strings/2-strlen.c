/**
 * _strlen checks for the length of the string
 * @s is the string 
 * 
 */
}
int _strlen(char * s) {
    char *p = s;
    int count = 0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}


