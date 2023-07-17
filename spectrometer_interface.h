```cpp
#ifndef SPECTROMETER_INTERFACE_H
#define SPECTROMETER_INTERFACE_H

#include "spectrometer_api.h"
#include "recording_settings.h"

class SpectrometerInterface {
public:
    SpectrometerInterface();
    ~SpectrometerInterface();

    bool initializeSpectrometer();
    void setRecordingSettings(const RecordingSettings& settings);

private:
    SpectrometerAPI m_spectrometerAPI;
    RecordingSettings m_recordingSettings;
};

#endif // SPECTROMETER_INTERFACE_H
```