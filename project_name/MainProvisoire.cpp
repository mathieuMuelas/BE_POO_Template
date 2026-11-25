#include "Application.h"

Application myApplication;

int main()
{
    myApplication.init();

    while (true)
    {
        myApplication.run();
    }

    return 0;
}