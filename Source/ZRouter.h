/**************************************************************************************************

 DESCRIPTION:
  --

 CREATED: 23/08/2016, by Paolo Achdjian

 FILE: TemperatureSensor.h

***************************************************************************************************/


#ifndef TEMPERATURE_SENSOR__H__
#define TEMPERATURE_SENSOR__H__

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */
#include "zcl.h"

/*********************************************************************
 * CONSTANTS
 */
#define ENDPOINT            13


extern void zRouterInit( byte task_id );
extern UINT16 zRouterEventLoop( byte task_id, UINT16 events );



#ifdef __cplusplus
}
#endif

#endif /* TEMPERATURE_SENSOR__H__ */
