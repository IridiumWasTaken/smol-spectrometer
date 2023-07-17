```cpp
#include "spectrometer_interface.h"
#include "recording_settings.h"
#include "spectra_reader.h"
#include "spectra_display.h"
#include "spectra_saver.h"

SpectrometerInterface::SpectrometerInterface() {
    // Initialize spectrometer API
    spectrometerAPI = new SpectrometerAPI();
}

SpectrometerInterface::~SpectrometerInterface() {
    // Clean up spectrometer API
    delete spectrometerAPI;
}

void SpectrometerInterface::setRecordingSettings(RecordingSettings settings) {
    // Set the recording settings of the spectrometer
    spectrometerAPI->setRecordingSettings(settings);
}

Spectra SpectrometerInterface::readSpectra() {
    // Read measured spectra from spectrometer
    return spectrometerAPI->readSpectra();
}

void SpectrometerInterface::displaySpectra(Spectra spectra) {
    // Display read spectra
    SpectraDisplay display;
    display.showSpectra(spectra);
}

void SpectrometerInterface::saveSpectra(Spectra spectra) {
    // Save read spectra
    SpectraSaver saver;
    saver.saveSpectra(spectra);
}
```