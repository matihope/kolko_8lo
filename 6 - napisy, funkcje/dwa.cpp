#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    char* a = new char[n];
    char* b = new char[n];
    cin >> a >> b;

    // initial check
    int the_i = 0;
    for (int i = 0; i < n; i++){
        if (*(a+i) > *(b+i)){
            the_i = i;
            break;
        }
        else if (*(a+i) < *(b+i)){
            the_i = i;
            break;
        }
    }


    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;

        int m = min(x, y);
        int m2 = max(x, y);

        char tmp = *(a+x);
        *(a+x) = *(b+y);
        *(b+y) = tmp;

        int answer = 0;
        if (m < the_i)
        {
            if(*(a+m) > *(b+m)){
                answer = 1;
                the_i = m-1;
            }
            else if(*(a+m) < *(b+m)){
                answer = 2;
                the_i = m-1;
            }

        }
        else if(m2 < the_i){
            if(*(a+m2) > *(b+m2)){
                answer = 1;
                the_i = m2-1;
            }
            else if(*(a+m2) < *(b+m2)){
                answer = 2;
                the_i = m2-1;
            }
        }
        if (answer == 0)
        {
            for (int i = min(the_i, min(x, y)); i < n; i++){
                if (*(a+i) > *(b+i)){
                    answer = 1;
                    the_i = i-1;
                    break;
                }
                else if (*(a+i) < *(b+i)){
                    answer = 2;
                    the_i = i-1;
                    break;
                }
            }
        }
        
        printf("%i\n", answer);
    }

    delete[] a;
    delete[] b;

    return 0;

}