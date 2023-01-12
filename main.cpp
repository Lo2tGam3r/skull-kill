#include <iostream>
#include <string>
#include<windows.h>
 int shutdowntime = 10;

/*std::string skull_1[] = {
"         _,.-------.,_",
"     ,;~'             '~;,",
"   ,;                     ;,",
"  ;                         ;",
" ,'                         ',",
",;                           ;,",
"; ;      .           .      ; ;",
"| ;   ______       ______   ; |",
"|  `/~"     ~" . "~     "~\'  |",
"|  ~  ,-~~~^~, | ,~^~~~-,  ~  |",
" |   |        }:{        |   |",
" |   l       / | \       !   |",
" .~  (__,.--" .^. "--.,__)  ~.",
" |     ---;' / | \ `;---     |",
"  \__.       \/^\/       .__/",
"   V| \                 / |V",
"    | |T~\___!___!___/~T| |",
"    | |`IIII_I_I_I_IIII'| |",
"    |  \,III I I I III,/  |",
"     \   `~~~~~~~~~~'    /",
"       \   .       .   /",
"         \.    ^    ./",
"           ^~~~^~~~^"}*/

std::string skull_1 = R"(
          _,.-------.,_
      ,;~'             '~;,
    ,;                     ;,
   ;                         ;
  ,'                         ',
 ,;                           ;,
 ; ;      .           .      ; ;
 | ;   ______       ______   ; |
 |  `/~"     ~" . "~     "~\'  |
 |  ~  ,-~~~^~, | ,~^~~~-,  ~  |
  |   |        }:{        |   |
  |   l       / | \       !   |
  .~  (__,.--" .^. "--.,__)  ~.
  |     ---;' / | \ `;---     |
   \__.       \/^\/       .__/
    V| \                 / |V
     | |T~\___!___!___/~T| |
     | |`IIII_I_I_I_IIII'| |
     |  \,III I I I III,/  |
      \   `~~~~~~~~~~'    /
        \   .       .   /
          \.    ^    ./
            ^~~~^~~~^)";
std::string skull_2 = R"(
          _,.-------.,_
      ,;~'             '~;,
    ,;                     ;,
   ;                         ;
  ,'                         ',
 ,;                           ;,
 ; ;      .           .      ; ;
 | ;   ______       ______   ; |
 |  `/~"     ~" . "~     "~\'  |
 |  ~  ,-~~~^~, | ,~^~~~-,  ~  |
  |   |        }:{        |   |
  |   l       / | \       !   |
  .~  (__,.--" .^. "--.,__)  ~.
  |     ---;' / | \ `;---     |
   \__.       \/^\/       .__/
    V| \                 / |V
     | |T~\___!___!___/~T| |
     | |`IIII_I_I_I_IIII'| |
     |                     |
     |  \,III I I I III,/  |
      \   `~~~~~~~~~~'    /
        \   .       .   /
          \.    ^    ./
            ^~~~^~~~^)";

int main(){
    while(true){
        for(int i = 0;i<2;i++){
            system("cls");
            std::cout << "\n      PC SHUTDOWN IN:" << shutdowntime << std::endl;
            std::cout << skull_1 ;
            Sleep(200);
            system("cls");
            std::cout << "\n      PC SHUTDOWN IN:" << shutdowntime << std::endl;
            std::cout << skull_2;
            Sleep(200);
        }
        shutdowntime--;
        if(shutdowntime <=0){
            system("C:\\Windows\\System32\\shutdown /s /t 0");
        }
    }
    return(0);
}
