```cpp
#ifndef SPECTRA_DISPLAY_H
#define SPECTRA_DISPLAY_H

#include "spectra_reader.h"

class SpectraDisplay {
public:
    SpectraDisplay();
    ~SpectraDisplay();

    void displaySpectra(const SpectraReader::SpectraData& spectraData);

private:
    void drawSpectra(const SpectraReader::SpectraData& spectraData);
};

#endif // SPECTRA_DISPLAY_H
```