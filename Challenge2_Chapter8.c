#include <stdio.h>
#include <string.h>

void main(){
    char *text = "When the going gets tough, the tough stay put!";
    char *find1 = "Going”";
    char *find2 = "tou";
    char *find3 = "ay put!";
    
    printf("Searching the String on the following text:\n");
    printf("\"%s\"\n\n",text);
    
    printf("The occurrence for '%s' is: %s\n",find1,strstr(text,find1));
    printf("The occurrence for '%s' is: %s\n",find2,strstr(text,find2));
    printf("The occurrence for '%s' is: %s\n",find3,strstr(text,find3));
}