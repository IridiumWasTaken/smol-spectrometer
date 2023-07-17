```cpp
#ifndef SPECTROMETER_INTERFACE_H
#define SPECTROMETER_INTERFACE_H

#include "spectrometer_api.h"
#include "recording_settings.h"

class SpectrometerInterface {
public:
    SpectrometerInterface();
    ~SpectrometerInterface();

    bool connectToSpectrometer();
    void disconnectFromSpectrometer();
    bool isSpectrometerConnected();

    void setRecordingSettings(RecordingSettings settings);
    RecordingSettings getRecordingSettings();

private:
    SpectrometerAPI* spectrometerAPI;
    RecordingSettings recordingSettings;
};

#endif // SPECTROMETER_INTERFACE_H
```