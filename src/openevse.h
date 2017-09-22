#ifndef __OPENEVSE_H
#define __OPENEVSE_H

#define OPENEVSE_STATE_INVALID               -1

#define OPENEVSE_STATE_STARTING               0
#define OPENEVSE_STATE_NOT_CONNECTED          1
#define OPENEVSE_STATE_CONNECTED              2
#define OPENEVSE_STATE_CHARGING               3
#define OPENEVSE_STATE_VENT_REQUIRED          4
#define OPENEVSE_STATE_DIODE_CHECK_FAILED     5
#define OPENEVSE_STATE_GFI_FAULT              6
#define OPENEVSE_STATE_NO_EARTH_GROUND        7
#define OPENEVSE_STATE_STUCK_RELAY            8
#define OPENEVSE_STATE_GFI_SELF_TEST_FAILED   9
#define OPENEVSE_STATE_OVER_TEMPERATURE      10
#define OPENEVSE_STATE_SLEEPING             254
#define OPENEVSE_STATE_DISABLED             255

#endif