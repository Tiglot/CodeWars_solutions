#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidWalk(const char *walk) {
    size_t length = strlen(walk);
    int ns= 0;
    int ew = 0;

    if (length == 10) {
        for (size_t i = 0; walk[i] != '\0'; i++) {
            switch (walk[i]) {
                case 'n':
                    ns++;
                    break;
                case 's':
                    ns--;
                    break;
                case 'e':
                    ew++;
                    break;
                case 'w':
                    ew--;
                    break;
                default:
                    break;
            }
        }
        if (ns== 0 && ew == 0) 
          return true;
        else 
          return false; 
    } 
    else  
      return false;

}
int main(int argc, char *argv[])
{
    isValidWalk("nnssnnssnn");
    isValidWalk("nsnsnsnsns");
    isValidWalk("nnsswwnnee");
    isValidWalk("nnnssseeeww");
    isValidWalk("nsnsnsnsns");

    return 0;
}
