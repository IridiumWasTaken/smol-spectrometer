1. Spectrometer API: This is the API provided by the spectrometer manufacturer that allows the software to interface with the spectrometer. It will be used in "spectrometer_interface.h" and "spectrometer_interface.cpp".

2. Spectrometer Object: This is the object that represents the spectrometer in the software. It will be used in "main.cpp", "spectrometer_interface.h", "spectrometer_interface.cpp", "recording_settings.h", "recording_settings.cpp", "spectra_reader.h", "spectra_reader.cpp", "spectra_display.h", "spectra_display.cpp", "spectra_saver.h", "spectra_saver.cpp".

3. Recording Settings: These are the settings that control how the spectrometer records data. They will be used in "main.cpp", "recording_settings.h", "recording_settings.cpp", "spectra_reader.h", "spectra_reader.cpp".

4. Spectra Data: This is the data that is read from the spectrometer. It will be used in "main.cpp", "spectra_reader.h", "spectra_reader.cpp", "spectra_display.h", "spectra_display.cpp", "spectra_saver.h", "spectra_saver.cpp".

5. Function Names: The following function names will be shared across multiple files:
   - initializeSpectrometer(): Used in "main.cpp" and "spectrometer_interface.cpp".
   - setRecordingSettings(): Used in "main.cpp" and "recording_settings.cpp".
   - readSpectra(): Used in "main.cpp" and "spectra_reader.cpp".
   - displaySpectra(): Used in "main.cpp" and "spectra_display.cpp".
   - saveSpectra(): Used in "main.cpp" and "spectra_saver.cpp".

6. Error Messages: Error messages will be shared across all files to handle and report errors in a consistent manner.