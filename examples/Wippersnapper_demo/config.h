/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME "YOUR_IO_USERNAME"
#define IO_KEY "YOUR_IO_KEY"

/******************************* WIFI **************************************/
#include "Wippersnapper_Networking.h"

/*** Network Configuration ***/
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASS "YOUR_SSID_PASS"

/** Uncomment the network interface you're using **/
#define USE_AIRLIFT
#if defined(USE_AIRLIFT) || defined(ADAFRUIT_METRO_M4_AIRLIFT_LITE) ||         \
    defined(ADAFRUIT_PYPORTAL)

    // Configure the pins used for the ESP32 connection
    #if !defined(SPIWIFI_SS) // if the wifi definition isnt in the board variant
        // Don't change the names of these #define's! they match the variant ones
        #define SPIWIFI SPI
        #define SPIWIFI_SS 10 // Chip select pin
        #define NINA_ACK 7   // a.k.a BUSY or READY pin
        #define NINA_RESETN 5 // Reset pin
        #define NINA_GPIO0 6 // Not connected
    #endif

    Wippersnapper_WiFi ws(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS, SPIWIFI_SS,
                    NINA_ACK, NINA_RESETN, NINA_GPIO0, &SPIWIFI);
    #else
    Wippersnapper_WiFi ws(WIFI_SSID, WIFI_PASS);
#endif