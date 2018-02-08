/*
Edgar Cruz
4/30/15
CS 111 
myStrCharFunc.h
*/

//implement strcpy (dest, source)
void myStrcpy(char dest[], const char source[])
{ 
  int i;
  for(i = 0; source[i] != '\0'; i++)
    dest[i] = source[i];

  dest[i] = '\0';

}
//implement char toupper(char)
// toupper(.a.) returns .A.
// toupper(.A.) return .A.
char myToUpper(char let)
{
  if ('a' <= let && let <= 'z')
    let -=32;//let = (char) (let -32);
  return let;
}
//implement int starlen(char[])
int myStrlen(char cstr[])
{
  int i;
  for(i=0; cstr[i] != '\0';i++)
    ;//nothing in the for ;.
  return i;
}
