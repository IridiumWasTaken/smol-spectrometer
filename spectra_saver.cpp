```cpp
#include "spectra_saver.h"
#include <fstream>

SpectraSaver::SpectraSaver(Spectrometer* spectrometer) {
    this->spectrometer = spectrometer;
}

void SpectraSaver::saveSpectra(std::string filename) {
    std::vector<double> spectraData = spectrometer->getSpectraData();

    std::ofstream file;
    file.open(filename);

    if (!file) {
        std::cerr << "Unable to open file " << filename << std::endl;
        return;
    }

    for (double data : spectraData) {
        file << data << "\n";
    }

    file.close();
}
```