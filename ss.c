
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#define INT_MAX <span class="skype_c2c_print_container notranslate">2147483647</span><span id="skype_c2c_container" class="skype_c2c_container notranslate" dir="ltr" tabindex="-1" onmouseover="SkypeClick2Call.MenuInjectionHandler.showMenu(this, event)" onmouseout="SkypeClick2Call.MenuInjectionHandler.hideMenu(this, event)" onclick="SkypeClick2Call.MenuInjectionHandler.makeCall(this, event)" data-numbertocall="+912147483647" data-numbertype="paid" data-isfreecall="false" data-isrtl="false" data-ismobile="false"><span class="skype_c2c_highlighting_inactive_common" dir="ltr" skypeaction="skype_dropdown"><span class="skype_c2c_textarea_span" id="non_free_num_ui"><img width="0" height="0" class="skype_c2c_logo_img" src="chrome-extension://lifbcibllhkdhoafpjfnlhfpfgnpldfl/call_skype_logo.png"><span class="skype_c2c_text_span">2147483647</span><span class="skype_c2c_free_text_span"></span></span></span></span>
#define INT_MIN -<span class="skype_c2c_print_container notranslate">2147483647</span><span id="skype_c2c_container" class="skype_c2c_container notranslate" dir="ltr" tabindex="-1" onmouseover="SkypeClick2Call.MenuInjectionHandler.showMenu(this, event)" onmouseout="SkypeClick2Call.MenuInjectionHandler.hideMenu(this, event)" onclick="SkypeClick2Call.MenuInjectionHandler.makeCall(this, event)" data-numbertocall="+912147483647" data-numbertype="paid" data-isfreecall="false" data-isrtl="false" data-ismobile="false"><span class="skype_c2c_highlighting_inactive_common" dir="ltr" skypeaction="skype_dropdown"><span class="skype_c2c_textarea_span" id="non_free_num_ui"><img width="0" height="0" class="skype_c2c_logo_img" src="chrome-extension://lifbcibllhkdhoafpjfnlhfpfgnpldfl/call_skype_logo.png"><span class="skype_c2c_text_span">2147483647</span><span class="skype_c2c_free_text_span"></span></span></span></span>
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;
 
struct square {
    int sq;
    int a;
    int b;
} s [50000];
 
bool isPerfectSquare (int p)
{
    int sqr = sqrt (p);
 
    if ( sqr * sqr == p ) return true;
    return false;
}
 
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
 
    int len_s = 0;
 
    for ( int i = 0; i < 225; i++ ) {
        for ( int j = i; j < 225; j++ ) {
            s [len_s].sq = i * i + j * j;
            s [len_s].a = i;
            s [len_s].b = j;
            len_s++;
        }
    }
 
    while ( testCase-- ) {
        int k;
        scanf ("%d", &k);
 
        //printf ("%d\n", len_s);
 
        bool printed = false;
 
        for ( int i = 0; i < len_s; i++ ) {
            if ( isPerfectSquare (k - s [i].sq) ) {
                int output [3];
                output [0] = s [i].a;
                output [1] = s [i].b;
                output [2] = (int) sqrt (k - s [i].sq);
                sort (output, output + 3);
                printf ("%d %d %d\n", output [0], output [1], output [2]);
                printed = true;
                break;
            }
        }
 
        if ( !printed ) printf ("-1\n");
 
    }
 
    return 0;
}
