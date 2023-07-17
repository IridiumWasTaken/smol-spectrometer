```cpp
#include "spectra_reader.h"
#include "spectrometer_interface.h"

SpectraReader::SpectraReader(SpectrometerInterface* spectrometerInterface) {
    this->spectrometerInterface = spectrometerInterface;
}

std::vector<Spectrum> SpectraReader::readSpectra() {
    std::vector<Spectrum> spectra;
    while(spectrometerInterface->hasNextSpectrum()) {
        Spectrum spectrum = spectrometerInterface->getNextSpectrum();
        spectra.push_back(spectrum);
    }
    return spectra;
}
```