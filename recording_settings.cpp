```cpp
#include "recording_settings.h"
#include "spectrometer_interface.h"

RecordingSettings::RecordingSettings() {
    // Initialize default settings
    this->integrationTime = 1000; // in microseconds
    this->scansToAverage = 1;
    this->boxcarWidth = 1;
}

void RecordingSettings::setIntegrationTime(int integrationTime) {
    this->integrationTime = integrationTime;
    SpectrometerInterface::getInstance().setIntegrationTime(integrationTime);
}

void RecordingSettings::setScansToAverage(int scansToAverage) {
    this->scansToAverage = scansToAverage;
    SpectrometerInterface::getInstance().setScansToAverage(scansToAverage);
}

void RecordingSettings::setBoxcarWidth(int boxcarWidth) {
    this->boxcarWidth = boxcarWidth;
    SpectrometerInterface::getInstance().setBoxcarWidth(boxcarWidth);
}

int RecordingSettings::getIntegrationTime() {
    return this->integrationTime;
}

int RecordingSettings::getScansToAverage() {
    return this->scansToAverage;
}

int RecordingSettings::getBoxcarWidth() {
    return this->boxcarWidth;
}
```