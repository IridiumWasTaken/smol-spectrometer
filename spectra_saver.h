```cpp
#ifndef SPECTRA_SAVER_H
#define SPECTRA_SAVER_H

#include <string>
#include "spectrometer_interface.h"

class SpectraSaver {
public:
    SpectraSaver(SpectrometerInterface* spectrometerInterface);
    ~SpectraSaver();

    void saveSpectra(const std::string& filename);

private:
    SpectrometerInterface* m_spectrometerInterface;
};

#endif // SPECTRA_SAVER_H
```