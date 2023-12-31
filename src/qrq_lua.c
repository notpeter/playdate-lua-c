#include "pd_api.h"
#include "qrq.h"

const lua_val not_Values[] = {
        (lua_val) {.name = "kLow", .type = kInt, .v = {1} },
        (lua_val) {.name = "kMedium", .type = kInt, .v = {2} },
        (lua_val) {.name = "kHigh", .type = kInt, .v = {3} },
};

void registerNot(PlaydateAPI* playdate) {
    const char* err2;
    int ok2 = playdate->lua->registerClass("note", NULL, not_Values, 0, &err2);
    if ( !ok2 )
        playdate->system->logToConsole("%s:%i: registerClass failed, %s", __FILE__, __LINE__, err2);
}
