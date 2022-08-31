#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max_len=1001;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int j,count;
    char s[max_len],i;
    scanf("%s",s);
    int string_length = strlen(s);
    for(i=48;i<58;i++){ //Asci value of zero = 48
        count=0;
        for(j=0 ; j<string_length ; j++){
            if (i==s[j])
            count ++;
        }
        printf("%d ", count);
    }  
    return 0;
}

