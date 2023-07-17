```cpp
#ifndef SPECTRA_READER_H
#define SPECTRA_READER_H

#include "spectrometer_interface.h"
#include "recording_settings.h"

class SpectraReader {
public:
    SpectraReader(SpectrometerInterface* spectrometerInterface, RecordingSettings* recordingSettings);
    ~SpectraReader();

    void readSpectra();

private:
    SpectrometerInterface* m_spectrometerInterface;
    RecordingSettings* m_recordingSettings;
};

#endif // SPECTRA_READER_H
```