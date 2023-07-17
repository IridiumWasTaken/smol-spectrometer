#include "spectra_reader.h"
#include "spectrometer_interface.h"

SpectraReader::SpectraReader(SpectrometerInterface* spectrometerInterface) {
    this->spectrometerInterface = spectrometerInterface;
}

std::vector<double> SpectraReader::readSpectra() {
    std::vector<double> spectraData;
    try {
        spectraData = spectrometerInterface->getSpectraData();
    } catch (std::exception& e) {
        std::cerr << "Error reading spectra: " << e.what() << std::endl;
    }
    return spectraData;
}