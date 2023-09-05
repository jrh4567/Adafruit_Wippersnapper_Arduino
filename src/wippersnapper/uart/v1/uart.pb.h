/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5-dev at Tue Sep  5 19:31:00 2023. */

#ifndef PB_WIPPERSNAPPER_UART_V1_WIPPERSNAPPER_UART_V1_UART_PB_H_INCLUDED
#define PB_WIPPERSNAPPER_UART_V1_WIPPERSNAPPER_UART_V1_UART_PB_H_INCLUDED
#include <pb.h>
#include "nanopb/nanopb.pb.h"
#include "wippersnapper/i2c/v1/i2c.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _wippersnapper_uart_v1_UARTBusData {
    int32_t baudrate;
    char pin_rx[6];
    char pin_tx[6];
    bool is_invert;
} wippersnapper_uart_v1_UARTBusData;

typedef struct _wippersnapper_uart_v1_UARTDeviceAttachResponse {
    char device_id[15];
    bool is_success;
} wippersnapper_uart_v1_UARTDeviceAttachResponse;

typedef struct _wippersnapper_uart_v1_UARTDeviceEvent {
    char device_id[15];
    pb_size_t sensor_event_count;
    wippersnapper_i2c_v1_SensorEvent sensor_event[15];
} wippersnapper_uart_v1_UARTDeviceEvent;

typedef struct _wippersnapper_uart_v1_UARTDeviceAttachRequest {
    bool has_bus_info;
    wippersnapper_uart_v1_UARTBusData bus_info;
    char device_id[15];
    int32_t polling_interval;
} wippersnapper_uart_v1_UARTDeviceAttachRequest;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define wippersnapper_uart_v1_UARTBusData_init_default {0, "", "", 0}
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_init_default {false, wippersnapper_uart_v1_UARTBusData_init_default, "", 0}
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_init_default {"", 0}
#define wippersnapper_uart_v1_UARTDeviceEvent_init_default {"", 0, {wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default, wippersnapper_i2c_v1_SensorEvent_init_default}}
#define wippersnapper_uart_v1_UARTBusData_init_zero {0, "", "", 0}
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_init_zero {false, wippersnapper_uart_v1_UARTBusData_init_zero, "", 0}
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_init_zero {"", 0}
#define wippersnapper_uart_v1_UARTDeviceEvent_init_zero {"", 0, {wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero, wippersnapper_i2c_v1_SensorEvent_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define wippersnapper_uart_v1_UARTBusData_baudrate_tag 1
#define wippersnapper_uart_v1_UARTBusData_pin_rx_tag 2
#define wippersnapper_uart_v1_UARTBusData_pin_tx_tag 3
#define wippersnapper_uart_v1_UARTBusData_is_invert_tag 4
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_device_id_tag 1
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_is_success_tag 2
#define wippersnapper_uart_v1_UARTDeviceEvent_device_id_tag 1
#define wippersnapper_uart_v1_UARTDeviceEvent_sensor_event_tag 2
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_bus_info_tag 1
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_device_id_tag 2
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_polling_interval_tag 3

/* Struct field encoding specification for nanopb */
#define wippersnapper_uart_v1_UARTBusData_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    baudrate,          1) \
X(a, STATIC,   SINGULAR, STRING,   pin_rx,            2) \
X(a, STATIC,   SINGULAR, STRING,   pin_tx,            3) \
X(a, STATIC,   SINGULAR, BOOL,     is_invert,         4)
#define wippersnapper_uart_v1_UARTBusData_CALLBACK NULL
#define wippersnapper_uart_v1_UARTBusData_DEFAULT NULL

#define wippersnapper_uart_v1_UARTDeviceAttachRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  bus_info,          1) \
X(a, STATIC,   SINGULAR, STRING,   device_id,         2) \
X(a, STATIC,   SINGULAR, INT32,    polling_interval,   3)
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_CALLBACK NULL
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_DEFAULT NULL
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_bus_info_MSGTYPE wippersnapper_uart_v1_UARTBusData

#define wippersnapper_uart_v1_UARTDeviceAttachResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   device_id,         1) \
X(a, STATIC,   SINGULAR, BOOL,     is_success,        2)
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_CALLBACK NULL
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_DEFAULT NULL

#define wippersnapper_uart_v1_UARTDeviceEvent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   device_id,         1) \
X(a, STATIC,   REPEATED, MESSAGE,  sensor_event,      2)
#define wippersnapper_uart_v1_UARTDeviceEvent_CALLBACK NULL
#define wippersnapper_uart_v1_UARTDeviceEvent_DEFAULT NULL
#define wippersnapper_uart_v1_UARTDeviceEvent_sensor_event_MSGTYPE wippersnapper_i2c_v1_SensorEvent

extern const pb_msgdesc_t wippersnapper_uart_v1_UARTBusData_msg;
extern const pb_msgdesc_t wippersnapper_uart_v1_UARTDeviceAttachRequest_msg;
extern const pb_msgdesc_t wippersnapper_uart_v1_UARTDeviceAttachResponse_msg;
extern const pb_msgdesc_t wippersnapper_uart_v1_UARTDeviceEvent_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define wippersnapper_uart_v1_UARTBusData_fields &wippersnapper_uart_v1_UARTBusData_msg
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_fields &wippersnapper_uart_v1_UARTDeviceAttachRequest_msg
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_fields &wippersnapper_uart_v1_UARTDeviceAttachResponse_msg
#define wippersnapper_uart_v1_UARTDeviceEvent_fields &wippersnapper_uart_v1_UARTDeviceEvent_msg

/* Maximum encoded size of messages (where known) */
#define wippersnapper_uart_v1_UARTBusData_size   27
#define wippersnapper_uart_v1_UARTDeviceAttachRequest_size 56
#define wippersnapper_uart_v1_UARTDeviceAttachResponse_size 18
#define wippersnapper_uart_v1_UARTDeviceEvent_size 151

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
