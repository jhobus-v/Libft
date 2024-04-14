#include <stdio.h>

void *ft_memcpy(void *dest, const void * src, size_t n)
{
  size_t pepe;
  int gugu;
  
  gugu = sizeof(dest);
  pepe = 0;
  unsigned char* textbeingcopied = src;
  unsigned char* destination = dest;
  while (pepe < n)
  {
    destination[pepe] = textbeingcopied[pepe];
    pepe++;
  }
}

int main(void)
{
  char  destination[] = "iliketurtles";
  char  source[] = "carsarecoolerthanyouthink";
  printf("%s", destination);
  printf("\n");
  ft_memcpy(destination, source, sizeof(source));
  printf("%s", destination);
  return (0);
}
