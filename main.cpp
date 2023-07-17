```cpp
#include "spectrometer_interface.h"
#include "recording_settings.h"
#include "spectra_reader.h"
#include "spectra_display.h"
#include "spectra_saver.h"

int main() {
    SpectrometerInterface spectrometerInterface;
    RecordingSettings recordingSettings;
    SpectraReader spectraReader;
    SpectraDisplay spectraDisplay;
    SpectraSaver spectraSaver;

    try {
        spectrometerInterface.initializeSpectrometer();
        recordingSettings.setRecordingSettings(spectrometerInterface.getSpectrometer());
        spectraReader.readSpectra(spectrometerInterface.getSpectrometer());
        spectraDisplay.displaySpectra(spectraReader.getSpectraData());
        spectraSaver.saveSpectra(spectraReader.getSpectraData());
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
```