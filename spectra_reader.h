```cpp
#ifndef SPECTRA_READER_H
#define SPECTRA_READER_H

#include "spectrometer_interface.h"
#include "recording_settings.h"

class SpectraReader {
public:
    SpectraReader(SpectrometerInterface* spectrometer, RecordingSettings* settings);
    ~SpectraReader();

    // Function to read spectra from the spectrometer
    void readSpectra();

private:
    SpectrometerInterface* spectrometer_;
    RecordingSettings* settings_;
};

#endif // SPECTRA_READER_H
```