#include "spectra_display.h"
#include <iostream>

void SpectraDisplay::displaySpectra(const SpectraData& spectraData) {
    std::cout << "Displaying Spectra Data:\n";

    for (const auto& data : spectraData) {
        std::cout << "Wavelength: " << data.first << " Intensity: " << data.second << "\n";
    }
}