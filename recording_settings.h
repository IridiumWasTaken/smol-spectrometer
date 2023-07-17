```cpp
#ifndef RECORDING_SETTINGS_H
#define RECORDING_SETTINGS_H

class RecordingSettings {
public:
    RecordingSettings();
    ~RecordingSettings();

    void setRecordingSettings(int integrationTime, int scansToAverage, int boxcarWidth);
    int getIntegrationTime();
    int getScansToAverage();
    int getBoxcarWidth();

private:
    int integrationTime;
    int scansToAverage;
    int boxcarWidth;
};

#endif //RECORDING_SETTINGS_H
```