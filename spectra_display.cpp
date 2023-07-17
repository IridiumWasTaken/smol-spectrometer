```cpp
#include "spectra_display.h"
#include <iostream>

SpectraDisplay::SpectraDisplay() {}

void SpectraDisplay::displaySpectra(const Spectra& spectra) {
    std::cout << "Displaying Spectra: " << std::endl;
    for (const auto& spectrum : spectra) {
        std::cout << "Wavelength: " << spectrum.wavelength << " Intensity: " << spectrum.intensity << std::endl;
    }
}
```