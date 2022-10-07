/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Tue May 10 16:30:13 2022. */

#ifndef PB_WIPPERSNAPPER_DS18X20_V1_WIPPERSNAPPER_DS18X20_V1_DS18X20_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_DS18X20_V1_WIPPERSNAPPER_DS18X20_V1_DS18X20_PB_H_INCLUDED
#include <pb.h>
#include "wippersnapper/i2c/v1/i2c.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_ds18x20_v1_Ds18x20DeInitRequest {
    int32_t onewire_pin;
} wippersnapper_ds18x20_v1_Ds18x20DeInitRequest;


typedef struct _wippersnapper_ds18x20_v1_Ds18x20DeInitResponse {
    bool is_de_init;
} wippersnapper_ds18x20_v1_Ds18x20DeInitResponse;

typedef struct _wippersnapper_ds18x20_v1_Ds18x20DeviceEvent {
    int32_t onewire_pin;
    bool has_sensor_event;
    wippersnapper_i2c_v1_SensorEvent sensor_event;
} wippersnapper_ds18x20_v1_Ds18x20DeviceEvent;

typedef struct _wippersnapper_ds18x20_v1_Ds18x20InitRequest {
    int32_t onewire_pin;
    uint32_t sensor_period;
    int32_t sensor_resolution;
} wippersnapper_ds18x20_v1_Ds18x20InitRequest;

typedef struct _wippersnapper_ds18x20_v1_Ds18x20InitResponse {
    bool is_initialized;
    int32_t onewire_pin;
} wippersnapper_ds18x20_v1_Ds18x20InitResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_init_default {0, 0, 0}
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_init_default {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_init_default {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_init_default {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_init_default {0, false, wippersnapper_i2c_v1_SensorEvent_init_default}
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_init_zero {0, 0, 0}
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_init_zero {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_init_zero {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_init_zero {0}
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_init_zero {0, false, wippersnapper_i2c_v1_SensorEvent_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_onewire_pin_tag 1
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_is_de_init_tag 1
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_onewire_pin_tag 2

/* Struct field encoding specification for nanopb */
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    onewire_pin,       1) \
X(a, STATIC,   SINGULAR, UINT32,   sensor_period,     2) \
X(a, STATIC,   SINGULAR, INT32,    sensor_resolution,   3)
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_CALLBACK NULL
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_DEFAULT NULL

#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_FIELDLIST(X, a) \

X(a, STATIC,   SINGULAR, BOOL,     is_initialized,    1)
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_CALLBACK NULL
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_DEFAULT NULL

#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    onewire_pin,       1)
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_CALLBACK NULL
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_DEFAULT NULL


#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     is_de_init,        1)
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_CALLBACK NULL
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_DEFAULT NULL


#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    onewire_pin,       1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  sensor_event,      2)
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_CALLBACK NULL
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_DEFAULT NULL
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_sensor_event_MSGTYPE wippersnapper_i2c_v1_SensorEvent

extern const pb_msgdesc_t wippersnapper_ds18x20_v1_Ds18x20InitRequest_msg;
extern const pb_msgdesc_t wippersnapper_ds18x20_v1_Ds18x20InitResponse_msg;
extern const pb_msgdesc_t wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_msg;
extern const pb_msgdesc_t wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_msg;
extern const pb_msgdesc_t wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_fields &wippersnapper_ds18x20_v1_Ds18x20InitRequest_msg
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_fields &wippersnapper_ds18x20_v1_Ds18x20InitResponse_msg
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_fields &wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_msg
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_fields &wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_msg
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_fields &wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_ds18x20_v1_Ds18x20InitRequest_size 28
#define wippersnapper_ds18x20_v1_Ds18x20InitResponse_size 2
#define wippersnapper_ds18x20_v1_Ds18x20DeInitRequest_size 11
#define wippersnapper_ds18x20_v1_Ds18x20DeInitResponse_size 2
#define wippersnapper_ds18x20_v1_Ds18x20DeviceEvent_size 20

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
