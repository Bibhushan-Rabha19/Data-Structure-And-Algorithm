#include <stdio.h>
#include <stdlib.h>

int valid(char *name){
      int i;    
      for(i = 0; name[i] != '\0'; i++){
          if(!(name[i] >=65 && name[i] <=90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
            return 1;
      }  
        return 0;
}
int main(){
    char *name = "bibhushan@645";
    if(valid(name)){
        printf("invalid string name");
    }
    else{
        printf("valid string name");
    }
    return 0;
}