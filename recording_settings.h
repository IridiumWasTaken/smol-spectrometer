```cpp
#ifndef RECORDING_SETTINGS_H
#define RECORDING_SETTINGS_H

#include "spectrometer_interface.h"

class RecordingSettings {
public:
    RecordingSettings(SpectrometerInterface& spectrometer);

    void setRecordingSettings();

private:
    SpectrometerInterface& spectrometer_;
};

#endif // RECORDING_SETTINGS_H
```