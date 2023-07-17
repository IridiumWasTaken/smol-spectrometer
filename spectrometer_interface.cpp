```cpp
#include "spectrometer_interface.h"
#include "spectrometer_api.h"

SpectrometerInterface::SpectrometerInterface() {
    spectrometer = nullptr;
}

SpectrometerInterface::~SpectrometerInterface() {
    if (spectrometer != nullptr) {
        delete spectrometer;
    }
}

bool SpectrometerInterface::initializeSpectrometer() {
    spectrometer = new SpectrometerAPI();
    if (spectrometer->initialize()) {
        return true;
    } else {
        std::cerr << "Error: Failed to initialize spectrometer." << std::endl;
        return false;
    }
}

bool SpectrometerInterface::isSpectrometerInitialized() {
    if (spectrometer != nullptr) {
        return spectrometer->isInitialized();
    } else {
        return false;
    }
}

SpectrometerAPI* SpectrometerInterface::getSpectrometer() {
    return spectrometer;
}
```