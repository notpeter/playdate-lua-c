#include <stdio.h>
#include <stdlib.h>

#include "pd_api.h"
#include "qrq.h"

#ifdef _WINDLL
__declspec(dllexport)
#endif

int eventHandler(PlaydateAPI* playdate, PDSystemEvent event, uint32_t arg) {
    if (event == kEventInitLua) {
        registerNot(playdate);
    }
    return 0;
}
