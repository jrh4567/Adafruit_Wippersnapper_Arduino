/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Mon Jul 19 17:43:14 2021. */

#ifndef PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_SIGNAL_V1_WIPPERSNAPPER_SIGNAL_V1_SIGNAL_PB_H_INCLUDED
#include <pb.h>
#include "wippersnapper/pin/v1/pin.pb.h"
#include "wippersnapper/i2c/v1/i2c.pb.h"
#include "wippersnapper/sensor/v1/sensor.pb.h"
#include "wippersnapper/pixel/v1/pixel.pb.h"
#include "nanopb/nanopb.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_signal_v1_CreateSignalResponse {
    pb_callback_t sensor_attach_resps;
} wippersnapper_signal_v1_CreateSignalResponse;

typedef struct _wippersnapper_signal_v1_CreateSignalRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_pin_v1_ConfigurePinRequests pin_configs;
        wippersnapper_pin_v1_PinEvents pin_events;
        wippersnapper_sensor_v1_AttachOrUpdateSensorRequests sensor_configs;
        wippersnapper_sensor_v1_SensorEventRequests sensor_events;
        wippersnapper_pin_v1_ConfigurePWMPinRequests pwm_pin_config;
        wippersnapper_pin_v1_PWMPinEvents pwm_pin_event;
        wippersnapper_pixel_v1_ConfigurePixels pixel_config;
        wippersnapper_pixel_v1_PixelEvent pixel_event;
        wippersnapper_pin_v1_PinEvent pin_event;
        wippersnapper_i2c_v1_I2CScanRequest request_i2c_scan;
        wippersnapper_i2c_v1_AHTInitRequest request_aht_init;
        wippersnapper_i2c_v1_AHTDeinitRequest request_aht_deinit;
    } payload;
} wippersnapper_signal_v1_CreateSignalRequest;

typedef struct _wippersnapper_signal_v1_I2CRequest {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_i2c_v1_I2CScanRequest req_i2c_scan;
        wippersnapper_i2c_v1_I2CSetFrequency req_i2c_set_freq;
        wippersnapper_i2c_v1_AHTInitRequest req_aht_init;
        wippersnapper_i2c_v1_AHTDeinitRequest req_aht_deinit;
    } payload;
} wippersnapper_signal_v1_I2CRequest;

typedef struct _wippersnapper_signal_v1_I2CResponse {
    pb_callback_t cb_payload;
    pb_size_t which_payload;
    union {
        wippersnapper_i2c_v1_I2CScanResponse resp_i2c_scan;
        wippersnapper_i2c_v1_AHTInitResponse resp_aht_init;
    } payload;
} wippersnapper_signal_v1_I2CResponse;

typedef struct _wippersnapper_signal_v1_SignalResponse {
    pb_size_t which_response_payload;
    union {
        wippersnapper_i2c_v1_I2CScanResponse response_i2c_scan;
        wippersnapper_i2c_v1_SensorDetails response_sensor_details;
        wippersnapper_i2c_v1_SensorEvent response_sensor_event;
        wippersnapper_i2c_v1_AHTInitResponse response_aht_init;
    } response_payload;
} wippersnapper_signal_v1_SignalResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_signal_v1_I2CRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CScanRequest_init_default}}
#define wippersnapper_signal_v1_I2CResponse_init_default {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CScanResponse_init_default}}
#define wippersnapper_signal_v1_CreateSignalRequest_init_default {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_default}}
#define wippersnapper_signal_v1_SignalResponse_init_default {0, {wippersnapper_i2c_v1_I2CScanResponse_init_default}}
#define wippersnapper_signal_v1_CreateSignalResponse_init_default {{{NULL}, NULL}}
#define wippersnapper_signal_v1_I2CRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CScanRequest_init_zero}}
#define wippersnapper_signal_v1_I2CResponse_init_zero {{{NULL}, NULL}, 0, {wippersnapper_i2c_v1_I2CScanResponse_init_zero}}
#define wippersnapper_signal_v1_CreateSignalRequest_init_zero {{{NULL}, NULL}, 0, {wippersnapper_pin_v1_ConfigurePinRequests_init_zero}}
#define wippersnapper_signal_v1_SignalResponse_init_zero {0, {wippersnapper_i2c_v1_I2CScanResponse_init_zero}}
#define wippersnapper_signal_v1_CreateSignalResponse_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_attach_resps_tag 8
#define wippersnapper_signal_v1_CreateSignalRequest_pin_configs_tag 6
#define wippersnapper_signal_v1_CreateSignalRequest_pin_events_tag 7
#define wippersnapper_signal_v1_CreateSignalRequest_sensor_configs_tag 8
#define wippersnapper_signal_v1_CreateSignalRequest_sensor_events_tag 9
#define wippersnapper_signal_v1_CreateSignalRequest_pwm_pin_config_tag 10
#define wippersnapper_signal_v1_CreateSignalRequest_pwm_pin_event_tag 12
#define wippersnapper_signal_v1_CreateSignalRequest_pixel_config_tag 13
#define wippersnapper_signal_v1_CreateSignalRequest_pixel_event_tag 14
#define wippersnapper_signal_v1_CreateSignalRequest_pin_event_tag 15
#define wippersnapper_signal_v1_CreateSignalRequest_request_i2c_scan_tag 16
#define wippersnapper_signal_v1_CreateSignalRequest_request_aht_init_tag 17
#define wippersnapper_signal_v1_CreateSignalRequest_request_aht_deinit_tag 18
#define wippersnapper_signal_v1_I2CRequest_req_i2c_scan_tag 1
#define wippersnapper_signal_v1_I2CRequest_req_i2c_set_freq_tag 2
#define wippersnapper_signal_v1_I2CRequest_req_aht_init_tag 3
#define wippersnapper_signal_v1_I2CRequest_req_aht_deinit_tag 4
#define wippersnapper_signal_v1_I2CResponse_resp_i2c_scan_tag 1
#define wippersnapper_signal_v1_I2CResponse_resp_aht_init_tag 2
#define wippersnapper_signal_v1_SignalResponse_response_i2c_scan_tag 1
#define wippersnapper_signal_v1_SignalResponse_response_sensor_details_tag 2
#define wippersnapper_signal_v1_SignalResponse_response_sensor_event_tag 3
#define wippersnapper_signal_v1_SignalResponse_response_aht_init_tag 4

/* Struct field encoding specification for nanopb */
#define wippersnapper_signal_v1_I2CRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_scan,payload.req_i2c_scan),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_i2c_set_freq,payload.req_i2c_set_freq),   2) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_aht_init,payload.req_aht_init),   3) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,req_aht_deinit,payload.req_aht_deinit),   4)
#define wippersnapper_signal_v1_I2CRequest_CALLBACK NULL
#define wippersnapper_signal_v1_I2CRequest_DEFAULT NULL
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CScanRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_i2c_set_freq_MSGTYPE wippersnapper_i2c_v1_I2CSetFrequency
#define wippersnapper_signal_v1_I2CRequest_payload_req_aht_init_MSGTYPE wippersnapper_i2c_v1_AHTInitRequest
#define wippersnapper_signal_v1_I2CRequest_payload_req_aht_deinit_MSGTYPE wippersnapper_i2c_v1_AHTDeinitRequest

#define wippersnapper_signal_v1_I2CResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_i2c_scan,payload.resp_i2c_scan),   1) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,resp_aht_init,payload.resp_aht_init),   2)
#define wippersnapper_signal_v1_I2CResponse_CALLBACK NULL
#define wippersnapper_signal_v1_I2CResponse_DEFAULT NULL
#define wippersnapper_signal_v1_I2CResponse_payload_resp_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CScanResponse
#define wippersnapper_signal_v1_I2CResponse_payload_resp_aht_init_MSGTYPE wippersnapper_i2c_v1_AHTInitResponse

#define wippersnapper_signal_v1_CreateSignalRequest_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_configs,payload.pin_configs),   6) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_events,payload.pin_events),   7) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,sensor_configs,payload.sensor_configs),   8) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,sensor_events,payload.sensor_events),   9) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pwm_pin_config,payload.pwm_pin_config),  10) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pwm_pin_event,payload.pwm_pin_event),  12) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pixel_config,payload.pixel_config),  13) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pixel_event,payload.pixel_event),  14) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,pin_event,payload.pin_event),  15) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,request_i2c_scan,payload.request_i2c_scan),  16) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,request_aht_init,payload.request_aht_init),  17) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (payload,request_aht_deinit,payload.request_aht_deinit),  18)
#define wippersnapper_signal_v1_CreateSignalRequest_CALLBACK NULL
#define wippersnapper_signal_v1_CreateSignalRequest_DEFAULT NULL
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_configs_MSGTYPE wippersnapper_pin_v1_ConfigurePinRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_events_MSGTYPE wippersnapper_pin_v1_PinEvents
#define wippersnapper_signal_v1_CreateSignalRequest_payload_sensor_configs_MSGTYPE wippersnapper_sensor_v1_AttachOrUpdateSensorRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_sensor_events_MSGTYPE wippersnapper_sensor_v1_SensorEventRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pwm_pin_config_MSGTYPE wippersnapper_pin_v1_ConfigurePWMPinRequests
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pwm_pin_event_MSGTYPE wippersnapper_pin_v1_PWMPinEvents
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pixel_config_MSGTYPE wippersnapper_pixel_v1_ConfigurePixels
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pixel_event_MSGTYPE wippersnapper_pixel_v1_PixelEvent
#define wippersnapper_signal_v1_CreateSignalRequest_payload_pin_event_MSGTYPE wippersnapper_pin_v1_PinEvent
#define wippersnapper_signal_v1_CreateSignalRequest_payload_request_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CScanRequest
#define wippersnapper_signal_v1_CreateSignalRequest_payload_request_aht_init_MSGTYPE wippersnapper_i2c_v1_AHTInitRequest
#define wippersnapper_signal_v1_CreateSignalRequest_payload_request_aht_deinit_MSGTYPE wippersnapper_i2c_v1_AHTDeinitRequest

#define wippersnapper_signal_v1_SignalResponse_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_payload,response_i2c_scan,response_payload.response_i2c_scan),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_payload,response_sensor_details,response_payload.response_sensor_details),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_payload,response_sensor_event,response_payload.response_sensor_event),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response_payload,response_aht_init,response_payload.response_aht_init),   4)
#define wippersnapper_signal_v1_SignalResponse_CALLBACK NULL
#define wippersnapper_signal_v1_SignalResponse_DEFAULT NULL
#define wippersnapper_signal_v1_SignalResponse_response_payload_response_i2c_scan_MSGTYPE wippersnapper_i2c_v1_I2CScanResponse
#define wippersnapper_signal_v1_SignalResponse_response_payload_response_sensor_details_MSGTYPE wippersnapper_i2c_v1_SensorDetails
#define wippersnapper_signal_v1_SignalResponse_response_payload_response_sensor_event_MSGTYPE wippersnapper_i2c_v1_SensorEvent
#define wippersnapper_signal_v1_SignalResponse_response_payload_response_aht_init_MSGTYPE wippersnapper_i2c_v1_AHTInitResponse

#define wippersnapper_signal_v1_CreateSignalResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  sensor_attach_resps,   8)
#define wippersnapper_signal_v1_CreateSignalResponse_CALLBACK pb_default_field_callback
#define wippersnapper_signal_v1_CreateSignalResponse_DEFAULT NULL
#define wippersnapper_signal_v1_CreateSignalResponse_sensor_attach_resps_MSGTYPE wippersnapper_sensor_v1_AttachOrUpdateSensorResponse

extern const pb_msgdesc_t wippersnapper_signal_v1_I2CRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_I2CResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_CreateSignalRequest_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_SignalResponse_msg;
extern const pb_msgdesc_t wippersnapper_signal_v1_CreateSignalResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_signal_v1_I2CRequest_fields &wippersnapper_signal_v1_I2CRequest_msg
#define wippersnapper_signal_v1_I2CResponse_fields &wippersnapper_signal_v1_I2CResponse_msg
#define wippersnapper_signal_v1_CreateSignalRequest_fields &wippersnapper_signal_v1_CreateSignalRequest_msg
#define wippersnapper_signal_v1_SignalResponse_fields &wippersnapper_signal_v1_SignalResponse_msg
#define wippersnapper_signal_v1_CreateSignalResponse_fields &wippersnapper_signal_v1_CreateSignalResponse_msg

/* Maximum encoded size of messages (where known) */
#if defined(wippersnapper_i2c_v1_I2CScanRequest_size)
union wippersnapper_signal_v1_I2CRequest_payload_size_union {char f1[(6 + wippersnapper_i2c_v1_I2CScanRequest_size)]; char f0[19];};
#define wippersnapper_signal_v1_I2CRequest_size  (0 + sizeof(union wippersnapper_signal_v1_I2CRequest_payload_size_union))
#endif
#if defined(wippersnapper_i2c_v1_AHTInitResponse_size)
union wippersnapper_signal_v1_I2CResponse_payload_size_union {char f2[(6 + wippersnapper_i2c_v1_AHTInitResponse_size)]; char f0[4];};
#define wippersnapper_signal_v1_I2CResponse_size (0 + sizeof(union wippersnapper_signal_v1_I2CResponse_payload_size_union))
#endif
#if defined(wippersnapper_pin_v1_ConfigurePinRequests_size) && defined(wippersnapper_pin_v1_PinEvents_size) && defined(wippersnapper_sensor_v1_AttachOrUpdateSensorRequests_size) && defined(wippersnapper_sensor_v1_SensorEventRequests_size) && defined(wippersnapper_pin_v1_ConfigurePWMPinRequests_size) && defined(wippersnapper_pin_v1_PWMPinEvents_size) && defined(wippersnapper_pixel_v1_ConfigurePixels_size) && defined(wippersnapper_i2c_v1_I2CScanRequest_size)
union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union {char f6[(6 + wippersnapper_pin_v1_ConfigurePinRequests_size)]; char f7[(6 + wippersnapper_pin_v1_PinEvents_size)]; char f8[(6 + wippersnapper_sensor_v1_AttachOrUpdateSensorRequests_size)]; char f9[(6 + wippersnapper_sensor_v1_SensorEventRequests_size)]; char f10[(6 + wippersnapper_pin_v1_ConfigurePWMPinRequests_size)]; char f12[(6 + wippersnapper_pin_v1_PWMPinEvents_size)]; char f13[(6 + wippersnapper_pixel_v1_ConfigurePixels_size)]; char f16[(7 + wippersnapper_i2c_v1_I2CScanRequest_size)]; char f0[28];};
#define wippersnapper_signal_v1_CreateSignalRequest_size (0 + sizeof(union wippersnapper_signal_v1_CreateSignalRequest_payload_size_union))
#endif
#if defined(wippersnapper_i2c_v1_SensorDetails_size) && defined(wippersnapper_i2c_v1_AHTInitResponse_size)
union wippersnapper_signal_v1_SignalResponse_response_payload_size_union {char f2[(6 + wippersnapper_i2c_v1_SensorDetails_size)]; char f4[(6 + wippersnapper_i2c_v1_AHTInitResponse_size)]; char f0[42];};
#define wippersnapper_signal_v1_SignalResponse_size (0 + sizeof(union wippersnapper_signal_v1_SignalResponse_response_payload_size_union))
#endif
/* wippersnapper_signal_v1_CreateSignalResponse_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
