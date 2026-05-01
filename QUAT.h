#ifndef _QUAT_H_
#define _QUAT_H_

#include <SinricProDevice.h>
#include <Capabilities/PowerStateController.h>

class QUAT 
: public SinricProDevice
, public PowerStateController<QUAT> {
  friend class PowerStateController<QUAT>;
public:
  QUAT(const String &deviceId) : SinricProDevice(deviceId, "QUAT") {};
};

#endif
