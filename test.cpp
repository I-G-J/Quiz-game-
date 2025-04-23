#include <sapi.h> // Include Speech API header
#include <iostream>

int main() {
    // Initialize COM library
    HRESULT hr = CoInitialize(NULL);
    if (FAILED(hr)) {
        std::cout << "COM library initialization failed." << std::endl;
        return 1;
    }

    ISpVoice* pVoice = NULL;

    // Create an instance of the voice
    hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
    if (SUCCEEDED(hr)) {
        pVoice->Speak(L"Hello! This is a text-to-speech demo in C++.", 0, NULL); // Text to be spoken
        pVoice->Release();
        pVoice = NULL;
    } else {
        std::cout << "Failed to initialize speech interface." << std::endl;
    }

    // Clean up and uninitialize COM
    CoUninitialize();
    return 0;
}
