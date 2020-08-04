#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int binary_to_uint(const char *b)
{
/*    unsigned int base = 2; */
    unsigned int len_b;
    unsigned int count = 0;
    unsigned int uns_int = 0;
    
    len_b = strlen(b);
    
    count = len_b - 1;
    
    if (b == NULL)
    {
        return (0);
    } 
    
    while ((b[count] != 0 || b[count] != 1) && count >= 0)
    {
      if (b[count] == '1')
        {
          uns_int = uns_int + b[count] - '0';
                  
          uns_int <<= 1;
        }     
        
        count--; 
    }
    return (uns_int);
} 
    

int main() {
unsigned int n;
 
/*    n = binary_to_uint("1");
    printf("%u\n", n);  */
    n = binary_to_uint("101"); 
    printf("%u\n", n);
 /*   n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n); */
    return (0);
}
