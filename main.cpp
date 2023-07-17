```cpp
#include "spectrometer_interface.h"
#include "recording_settings.h"
#include "spectra_reader.h"
#include "spectra_display.h"
#include "spectra_saver.h"

int main() {
    // Create objects
    SpectrometerInterface spectrometerInterface;
    RecordingSettings recordingSettings;
    SpectraReader spectraReader;
    SpectraDisplay spectraDisplay;
    SpectraSaver spectraSaver;

    // Interface with spectrometer
    spectrometerInterface.connect();

    // Set the recording settings
    recordingSettings.setSettings();

    // Read measured spectra
    auto spectra = spectraReader.readSpectra();

    // Display read spectra
    spectraDisplay.displaySpectra(spectra);

    // Save read spectra
    spectraSaver.saveSpectra(spectra);

    return 0;
}
```