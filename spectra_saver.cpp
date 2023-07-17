```cpp
#include "spectra_saver.h"
#include <fstream>

SpectraSaver::SpectraSaver(std::string filename) {
    this->filename = filename;
}

void SpectraSaver::saveSpectra(std::vector<double> spectra) {
    std::ofstream file;
    file.open(this->filename, std::ios::out | std::ios::app);
    
    if (file.is_open()) {
        for (auto &spectra_value : spectra) {
            file << spectra_value << "\n";
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << this->filename << std::endl;
    }
}
```