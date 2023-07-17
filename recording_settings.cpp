#include "recording_settings.h"

RecordingSettings::RecordingSettings() {
    // Initialize default settings
    this->integrationTime = 1000; // in microseconds
    this->scansToAverage = 1;
    this->boxcarWidth = 1;
}

void RecordingSettings::setIntegrationTime(int integrationTime) {
    if (integrationTime < 0) {
        throw std::invalid_argument("Integration time cannot be negative.");
    }
    this->integrationTime = integrationTime;
}

void RecordingSettings::setScansToAverage(int scansToAverage) {
    if (scansToAverage < 1) {
        throw std::invalid_argument("Scans to average must be at least 1.");
    }
    this->scansToAverage = scansToAverage;
}

void RecordingSettings::setBoxcarWidth(int boxcarWidth) {
    if (boxcarWidth < 0) {
        throw std::invalid_argument("Boxcar width cannot be negative.");
    }
    this->boxcarWidth = boxcarWidth;
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

void RecordingSettings::applySettings(Spectrometer& spectrometer) {
    spectrometer.setIntegrationTime(this->integrationTime);
    spectrometer.setScansToAverage(this->scansToAverage);
    spectrometer.setBoxcarWidth(this->boxcarWidth);
}