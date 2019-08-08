/*
 * Copyright (C) 2015-2019 Alibaba Group Holding Limited
 */

#ifndef __INFRA_STATE_H__
#define __INFRA_STATE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define STATE_BASE                                  (0x0000)

/* General: 0x0000 ~ 0x00FF */
/* API works as expected and returns sucess */
/* API �ӿڰ�Ԥ����ɹ���, �����سɹ� */
#define STATE_SUCCESS                               (STATE_BASE - 0x0000)

/* General: 0x0000 ~ 0x00FF */

/* User Input: 0x0100 ~ 0x01FF */
#define STATE_USER_INPUT_BASE                       (-0x0100)

/* User input parameters contain unacceptable NULL pointer */
/* �û����ݸ�API�Ĳ����к��в�����Ŀ�ָ����� */
#define STATE_USER_INPUT_NULL_POINTER               (STATE_USER_INPUT_BASE - 0x0001)
/* Some user input parameter(s) has value out of acceptable range */
/* �û����ݸ�API�Ĳ����к��г�������Χ��ȡֵ */
#define STATE_USER_INPUT_OUT_RANGE                  (STATE_USER_INPUT_BASE - 0x0002)
/* User input parameters contain unacceptable productKey */
/* �û����ݸ�API�Ĳ����к��в��Ϸ��Ĳ�Ʒ��ʶ(productKey) */
#define STATE_USER_INPUT_PK                         (STATE_USER_INPUT_BASE - 0x0003)
/* User input parameters contain unacceptable productSecret */
/* �û����ݸ�API�Ĳ����к��в��Ϸ��Ĳ�Ʒ��Կ(productSecret) */
#define STATE_USER_INPUT_PS                         (STATE_USER_INPUT_BASE - 0x0004)
/* User input parameters contain unacceptable deviceName */
/* �û����ݸ�API�Ĳ����к��в��Ϸ����豸����(deviceName) */
#define STATE_USER_INPUT_DN                         (STATE_USER_INPUT_BASE - 0x0005)
/* User input parameters contain unacceptable deviceSecret */
/* �û����ݸ�API�Ĳ����к��в��Ϸ����豸��Կ(deviceSecret) */
#define STATE_USER_INPUT_DS                         (STATE_USER_INPUT_BASE - 0x0006)
/* User input parameters contain unacceptable HTTP domain name */
/* �û����ݸ�API�Ĳ����к��в����������, SDK�޷��������HTTP���� */
#define STATE_USER_INPUT_HTTP_DOMAIN                (STATE_USER_INPUT_BASE - 0x0007)
/* User input parameters contain unacceptable MQTT domain name */
/* �û����ݸ�API�Ĳ����к��в����������, SDK�޷��������MQTT���� */
#define STATE_USER_INPUT_MQTT_DOMAIN                (STATE_USER_INPUT_BASE - 0x0008)
/* User input parameters contain unacceptable HTTP port */
/* �û����ݸ�API�Ĳ����к��в������HTTPĿ�Ķ˿ں� */
#define STATE_USER_INPUT_HTTP_PORT                  (STATE_USER_INPUT_BASE - 0x0009)
/* User input parameters contain unacceptable HTTP timeout */
/* �û����ݸ�API�Ĳ����к��в������HTTP��ʱʱ�� */
#define STATE_USER_INPUT_HTTP_TIMEOUT               (STATE_USER_INPUT_BASE - 0x000A)
/* User input parameters contain unacceptable HTTP options */
/* �û����ݸ�API�Ĳ����к��в������HTTP����ѡ�� */
#define STATE_USER_INPUT_HTTP_OPTION                (STATE_USER_INPUT_BASE - 0x000B)
/* User input parameters contain unacceptable post data */
/* �û����ݸ�API�Ĳ�����, ��HTTP POST���в�����ı�������, �糤��Ϊ�����ָ��� */
#define STATE_USER_INPUT_HTTP_POST_DATA             (STATE_USER_INPUT_BASE - 0x000C)
/* User input parameters contain unacceptable HTTP URL */
/* �û����ݸ�API�Ĳ����к��в������HTTPĿ��URL */
#define STATE_USER_INPUT_HTTP_URL                   (STATE_USER_INPUT_BASE - 0x000D)
/* User input parameters contain unacceptable HTTP path */
/* �û����ݸ�API�Ĳ����к��в������HTTP��Դ·�� */
#define STATE_USER_INPUT_HTTP_PATH                  (STATE_USER_INPUT_BASE - 0x000E)
/* User input parameters contain unacceptable PK/PS/DN/DS */
/* �û����ݸ�API�Ĳ����к��в�����Ĳ�Ʒ��ʶ/��Կ���豸����/��Կ */
#define STATE_USER_INPUT_META_INFO                  (STATE_USER_INPUT_BASE - 0x0010)
/* User input parameters contain unacceptable deviceID */
/* �û����ݸ�API�Ĳ����к��в������ deviceID �豸��ʶ�� */
#define STATE_USER_INPUT_DEVID                      (STATE_USER_INPUT_BASE - 0x0011)
/* User input parameters contain unacceptable device type */
/* �û����ݸ�API�Ĳ����к��в�������豸����, �Ȳ���master�ֲ���slave */
#define STATE_USER_INPUT_DEVICE_TYPE                (STATE_USER_INPUT_BASE - 0x0012)

/* User input parameters contain unacceptable value */
/* �û����ݸ�API�Ĳ����к��������������ȡֵ */
#define STATE_USER_INPUT_INVALID                    (STATE_USER_INPUT_BASE - 0x0013)
/* User Input: 0x0100 ~ 0x01FF */

/* System: 0x0200 ~ 0x02FF */
#define STATE_SYS_DEPEND_BASE                       (-0x0200)

/* SDK run into exception when invoking HAL_Malloc() */
/* SDK���õ�ϵͳ����ӿ� HAL_Malloc() �����쳣, δ�ܳɹ������ڴ� */
#define STATE_SYS_DEPEND_MALLOC                     (STATE_SYS_DEPEND_BASE - 0x0001)
/* SDK run into exception when invoking HAL_Kv_Get() */
/* SDK���õ�ϵͳ����ӿ� HAL_Kv_Get() �����쳣, δ�ܳɹ�����Key��ȡValue */
#define STATE_SYS_DEPEND_KV_GET                     (STATE_SYS_DEPEND_BASE - 0x0002)
/* SDK run into exception when invoking HAL_Kv_Set() */
/* SDK���õ�ϵͳ����ӿ� HAL_Kv_Set() �����쳣, δ�ܳɹ�����Keyд��Value */
#define STATE_SYS_DEPEND_KV_SET                     (STATE_SYS_DEPEND_BASE - 0x0003)
/* SDK run into exception when invoking HAL_Kv_Del() */
/* SDK���õ�ϵͳ����ӿ� HAL_Kv_Del() �����쳣, δ�ܳɹ�����Keyɾ��KV�� */
#define STATE_SYS_DEPEND_KV_DELETE                  (STATE_SYS_DEPEND_BASE - 0x0004)
/* SDK run into exception when invoking HAL_Timer_Create() */
/* SDK���õ�ϵͳ����ӿ� HAL_Timer_Create() �����쳣, δ�ܳɹ�����һ����ʱ�� */
#define STATE_SYS_DEPEND_TIMER_CREATE               (STATE_SYS_DEPEND_BASE - 0x0005)
/* SDK run into exception when invoking HAL_Timer_Start() */
/* SDK���õ�ϵͳ����ӿ� HAL_Timer_Start() �����쳣, δ�ܳɹ�����ָ���Ķ�ʱ���ļ�ʱ */
#define STATE_SYS_DEPEND_TIMER_START                (STATE_SYS_DEPEND_BASE - 0x0006)
/* SDK run into exception when invoking HAL_Timer_Stop() */
/* SDK���õ�ϵͳ����ӿ� HAL_Timer_Stop() �����쳣, δ�ܳɹ�ָֹͣ���Ķ�ʱ���ļ�ʱ */
#define STATE_SYS_DEPEND_TIMER_STOP                 (STATE_SYS_DEPEND_BASE - 0x0007)
/* SDK run into exception when invoking HAL_Timer_Delete() */
/* SDK���õ�ϵͳ����ӿ� HAL_Timer_Delete() �����쳣, δ������ָ���Ķ�ʱ�� */
#define STATE_SYS_DEPEND_TIMER_DELETE               (STATE_SYS_DEPEND_BASE - 0x0008)
/* SDK run into exception when invoking HAL_MutexCreate() */
/* SDK���õ�ϵͳ����ӿ� HAL_MutexCreate() �����쳣, δ�ܴ���һ�������� */
#define STATE_SYS_DEPEND_MUTEX_CREATE               (STATE_SYS_DEPEND_BASE - 0x0009)
/* SDK run into exception when invoking HAL_MutexLock() */
/* SDK���õ�ϵͳ����ӿ� HAL_MutexLock() �����쳣, δ�ܳɹ����뻥���� */
#define STATE_SYS_DEPEND_MUTEX_LOCK                 (STATE_SYS_DEPEND_BASE - 0x000A)
/* SDK run into exception when invoking HAL_MutexUnlock() */
/* SDK���õ�ϵͳ����ӿ� HAL_MutexUnlock() �����쳣, δ�ܳɹ����ͷŻ����� */
#define STATE_SYS_DEPEND_MUTEX_UNLOCK               (STATE_SYS_DEPEND_BASE - 0x000B)
/* SDK run into exception when TX or RX through lower network layer */
/* SDK���õ�ϵͳ����ӿ� HAL_TCP_Read|Write() �� HAL_SSL_Read|Write() �����쳣, �ײ������ѹرն�δ�ܳɹ����������շ� */
#define STATE_SYS_DEPEND_NWK_CLOSE                  (STATE_SYS_DEPEND_BASE - 0x000C)
/* SDK run into timeout when TX or RX through lower network layer */
/* SDK���õ�ϵͳ����ӿ� HAL_TCP_Read() �� HAL_SSL_Read() δ�ܳɹ���Ԥ�ڵ�ʱ���ڵõ������Ӧ */
#define STATE_SYS_DEPEND_NWK_TIMEOUT                (STATE_SYS_DEPEND_BASE - 0x000D)
/* SDK run into invalid handler when lookup network lower layer connection */
/* SDK���еײ������շ�ͨ��ʱ, ����ϵͳ��TCP���ӻ�TLS���ӵı�ʶ����ǷǷ��� */
#define STATE_SYS_DEPEND_NWK_INVALID_HANDLE         (STATE_SYS_DEPEND_BASE - 0x000E)
/* SDK run into exception when RX through lower network layer */
/* SDK���õ�ϵͳ����ӿ� HAL_TCP_Read() �� HAL_SSL_Read() �����쳣, δ�ܳɹ���ȡһ������ */
#define STATE_SYS_DEPEND_NWK_READ_ERROR             (STATE_SYS_DEPEND_BASE - 0x000F)

/* System: 0x0200 ~ 0x02FF */

/* MQTT: 0x0300 ~ 0x03FF */
#define STATE_MQTT_BASE                             (-0x0300)

/* Deserialized CONNACK from MQTT server says protocol version is unacceptable */
/* �豸����MQTT���������, ������Ӧ��ı��ı�ʾ���ܽ��������е�MQTTЭ��汾 */
#define STATE_MQTT_CONNACK_VERSION_UNACCEPT         (STATE_MQTT_BASE - 0x0001)
/* Deserialized CONNACK from MQTT server says identifier is rejected */
/* �豸����MQTT���������, ������Ӧ��ı��ı�ʾ���ܽ��������е��豸��ʶ�� */
#define STATE_MQTT_CONNACK_IDENT_REJECT             (STATE_MQTT_BASE - 0x0002)
/* Deserialized CONNACK from MQTT server says service is not available */
/* �豸����MQTT���������, ������Ӧ��ı��ı�ʾ��ǰMQTT���񲻿��� */
#define STATE_MQTT_CONNACK_SERVICE_NA               (STATE_MQTT_BASE - 0x0003)
/* Deserialized CONNACK from MQTT server says it failed to authorize */
/* �豸����MQTT���������, ������Ӧ��ı��ı�ʾ��ǰ�������豸δ����ɼ�Ȩ */
#define STATE_MQTT_CONNACK_NOT_AUTHORIZED           (STATE_MQTT_BASE - 0x0004)
/* Deserialized CONNACK from MQTT server says username/password is invalid */
/* �豸����MQTT���������, ������Ӧ��ı��ı�ʾ���豸��ݼ�Ȩ��ͨ�� */
#define STATE_MQTT_CONNACK_BAD_USERDATA             (STATE_MQTT_BASE - 0x0005)
/* Skip current reconnect attemption until next timer expiration */
/* ������ǰ����������, ��Ϊ��һ�ε�������ȥ��ʱ��̫��, �����ٽ������� */
#define STATE_MQTT_WAIT_RECONN_TIMER                (STATE_MQTT_BASE - 0x0006)
/* Reserved buffer is too short when generate device signature for hostname */
/* �����豸ǩ��ʱ, Ϊ����Ԥ�����ַ���������̫��, ��������������� */
#define STATE_MQTT_SIGN_HOSTNAME_BUF_SHORT          (STATE_MQTT_BASE - 0x0007)
/* Reserved buffer is too short when generate device signature for username */
/* �����豸ǩ��ʱ, ΪMQTT���û���Ԥ�����ַ���������̫��, ��������������� */
#define STATE_MQTT_SIGN_USERNAME_BUF_SHORT          (STATE_MQTT_BASE - 0x0008)
/* Reserved buffer is too short when generate device signature for clientId */
/* �����豸ǩ��ʱ, ΪMQTT��clientIdԤ�����ַ���������̫��, ��������������� */
#define STATE_MQTT_SIGN_CLIENTID_BUF_SHORT          (STATE_MQTT_BASE - 0x0009)
/* Reserved buffer is too short for signature generate source */
/* �����豸ǩ��ʱ, Ϊƴ��ǩ����Դ����Ԥ�����ַ���������̫��, ��������������� */
#define STATE_MQTT_SIGN_SOURCE_BUF_SHORT            (STATE_MQTT_BASE - 0x000A)
/* SDK run into exception when invoking lower layer wrapper_mqtt_init() */
/* SDK���õ�MQTT�����ײ�ӿ� wrapper_mqtt_init() �쳣, ��ʼ��ʧ�� */
#define STATE_MQTT_WRAPPER_INIT_FAIL                (STATE_MQTT_BASE - 0x000B)
/* Failed to serialize connect request */
/* ���л�MQTT�����������쳣 */
#define STATE_MQTT_SERIALIZE_CONN_ERROR             (STATE_MQTT_BASE - 0x000C)
/* Failed to serialize acknowledge message of publish */
/* ���л��Է��������Ʊ��ĵ�Ӧ����Ϣ�쳣 */
#define STATE_MQTT_SERIALIZE_PUBACK_ERROR           (STATE_MQTT_BASE - 0x000E)
/* Failed to serialize ping request */
/* ���л�MQTT�����������쳣 */
#define STATE_MQTT_SERIALIZE_PINGREQ_ERROR          (STATE_MQTT_BASE - 0x000F)
/* Failed to serialize subscribe request */
/* ���л�MQTT�����������쳣 */
#define STATE_MQTT_SERIALIZE_SUB_ERROR              (STATE_MQTT_BASE - 0x0010)
/* Failed to serialize unsubscribe request */
/* ���л�MQTTȡ�������������쳣 */
#define STATE_MQTT_SERIALIZE_UNSUB_ERROR            (STATE_MQTT_BASE - 0x0011)
/* Failed to serialize publish message */
/* ���л�MQTT�ϱ���Ϣ�����쳣 */
#define STATE_MQTT_SERIALIZE_PUB_ERROR              (STATE_MQTT_BASE - 0x0012)
/* Failed to deserialize connect response */
/* �����л�MQTT���������صĽ���Ӧ�����쳣 */
#define STATE_MQTT_SERIALIZE_CONNACK_ERROR          (STATE_MQTT_BASE - 0x000D)
/* Failed to deserialize subscribe response */
/* �����л�MQTT���������صĶ���Ӧ�����쳣 */
#define STATE_MQTT_DESERIALIZE_SUBACK_ERROR         (STATE_MQTT_BASE - 0x0013)
/* Failed to deserialize publish response */
/* �����л�MQTT���������Ƶ���Ϣ�����쳣 */
#define STATE_MQTT_DESERIALIZE_PUB_ERROR            (STATE_MQTT_BASE - 0x0014)
/* Failed to deserialize unsubscribe response */
/* �����л�MQTT���������ص�ȡ������Ӧ�����쳣 */
#define STATE_MQTT_DESERIALIZE_UNSUBACK_ERROR       (STATE_MQTT_BASE - 0x0015)
/* Failed to read MQTT packet from network */
/* δ�ܳɹ��������϶�ȡ�������·���MQTT�������� */
#define STATE_MQTT_PACKET_READ_ERROR                (STATE_MQTT_BASE - 0x0016)
/* Failed to interpret CONNACK from MQTT server */
/* δ�ܳɹ�������MQTT���������صĽ�������Ӧ�� */
#define STATE_MQTT_CONNACK_UNKNOWN_ERROR            (STATE_MQTT_BASE - 0x0017)
/* Reserved buffer is too short when retrieve content from network */
/* ������Э��ջ��ȡMQTT���Ʊ���ʱ, Ԥ���Ļ�����̫��, �������ɴ���ȡ���� */
#define STATE_MQTT_RX_BUFFER_TOO_SHORT              (STATE_MQTT_BASE - 0x0018)
/* Reserved buffer is too short when compose content going to network */
/* ��װMQTT�ϱ���Ϣ׼����������Э��ջʱ, Ϊ��������Ԥ���Ļ�����̫��, �������ɴ��������� */
#define STATE_MQTT_TX_BUFFER_TOO_SHORT              (STATE_MQTT_BASE - 0x0019)
/* Reserved buffer is too short when compose topic for MQTT outgoing message */
/* ��װMQTT�ϱ���Ϣ׼����������Э��ջʱ, ΪTopic�ֶ�Ԥ���Ļ�����̫��, �������ɴ��������� */
#define STATE_MQTT_TOPIC_BUF_TOO_SHORT              (STATE_MQTT_BASE - 0x001A)
/* Retried time exceeds maximum when perform IOT_MQTT_Construct() */
/* ������һ�� IOT_MQTT_Construct() �ӿڹ�����, �Ѷ��������δ���Ϸ����, ֹͣ���Է��� */
#define STATE_MQTT_CONN_RETRY_EXCEED_MAX            (STATE_MQTT_BASE - 0x001B)
/* Re-publish QoS1 message exceeds maximum */
/* ��QoS1���͵�MQTT�ϱ���Ϣ�Ѷ������, ��δ�õ�������յ��Ļ�Ӧ, �������·��� */
#define STATE_MQTT_QOS1_REPUB_EXCEED_MAX            (STATE_MQTT_BASE - 0x001C)
/* Invalid QoS input when publish MQTT message */
/* ��MQTT��Ϣ�ϱ�ʱ, �����������QoS����ȡֵ */
#define STATE_MQTT_PUB_QOS_INVALID                  (STATE_MQTT_BASE - 0x001D)
/* Skip current action because MQTT connection is break */
/* ��Ϊ��ǰMQTT�����ѶϿ�, ������ǰ���ܵķ��ͻ���ն��� */
#define STATE_MQTT_IN_OFFLINE_STATUS                (STATE_MQTT_BASE - 0x001E)
/* Receive MQTT packet from network can not be interpret */
/* ����������ȡ����MQTT����, �޷������䱨������ */
#define STATE_MQTT_RECV_UNKNOWN_PACKET              (STATE_MQTT_BASE - 0x001F)
/* MQTT connection instance exceed allowed maximum */
/* ��ǰ�Ѵ�����MQTT����������������, ���޷����½����� */
#define STATE_MQTT_CLI_EXCEED_MAX                   (STATE_MQTT_BASE - 0x0020)
/* MQTT subscribe instance exceed allowed maximum */
/* ��ǰ�Ѷ��ĵ�MQTT����������������, ���޷����½����� */
#define STATE_MQTT_SUB_EXCEED_MAX                   (STATE_MQTT_BASE - 0x0021)
/* Invalid MQTT topic can not be interpret */
/* �����������MQTT�����ʽ, �޷����ж��Ļ򷢲��ȶ��� */
#define STATE_MQTT_UNEXP_TOPIC_FORMAT               (STATE_MQTT_BASE - 0x0022)
/* Wait too long time after syncronized subscribe request sent */
/* ����ͬ���Ķ�������ʱ, �ѳ����޶�ʱ����δ�õ�����˻�Ӧ */
#define STATE_MQTT_SYNC_SUB_TIMEOUT                 (STATE_MQTT_BASE - 0x0023)
/* Last connect request has not been responsed in async protocol stack */
/* ���첽Э��ջ�Ϲ���ʱ, �ϴε�����������δ�õ�����˻�Ӧ, ������ǰ�������� */
#define STATE_MQTT_ASYNC_STACK_CONN_IN_PROG         (STATE_MQTT_BASE - 0x0024)
/* Currrent SDK configuration does not support working with async protocol stack */
/* ��ǰSDKδ������Ϊ֧�����첽Э��ջ�Ϲ��� */
#define STATE_MQTT_ASYNC_STACK_NOT_SUPPORT          (STATE_MQTT_BASE - 0x0025)
/* Got unknown event when work with async protocol stack */
/* SDK���첽Э��ջ�Ϲ���ʱ, ���յ�����Э��ջ���¼�, ��������� */
#define STATE_MQTT_ASYNC_STACK_UNKNOWN_EVENT        (STATE_MQTT_BASE - 0x0026)

/* MQTT: 0x0300 ~ 0x03FF */

/* WiFi Provision: 0x0400 ~ 0x04FF */
#define STATE_WIFI_BASE                             (-0x0400)

/* WiFi Provision: 0x0400 ~ 0x04FF */

/* COAP: 0x0500 ~ 0x05FF */
#define STATE_COAP_BASE                             (-0x0500)

/* COAP: 0x0500 ~ 0x05FF */

/* HTTP: 0x0600 ~ 0x06FF */
#define STATE_HTTP_BASE                             (-0x0600)
/* Got HTTP response from server, says dynamic register request failed */
/* ʹ�ö�̬ע��/һ��һ�ܹ���ʱ, �ӷ���˷��صı��ı�ʾ, ������Կʧ�� */
#define STATE_HTTP_DYNREG_FAIL_RESP                 (STATE_HTTP_BASE - 0x0001)
/* Got HTTP response from server, which contains invalid deviceSecret */
/* ʹ�ö�̬ע��/һ��һ�ܹ���ʱ, �ӷ���˷��صı�����, �����õ�����Կ������ */
#define STATE_HTTP_DYNREG_INVALID_DS                (STATE_HTTP_BASE - 0x0002)
/* Reserved buffer is too short when compose pre-auth HTTP request */
/* ��װԤ��֤��Ϣ׼�����������ʱ, ΪHTTP���б���Ԥ���Ļ�����̫��, �������ɴ��������� */
#define STATE_HTTP_PREAUTH_REQ_BUF_SHORT            (STATE_HTTP_BASE - 0x0003)
/* Reserved buffer is too short when retrieve pre-auth HTTP response */
/* ��ȡԤ��֤�����Ӧ����ʱ, ΪHTTP��Ӧ����Ԥ���Ļ�����̫��, �������ɴ��������� */
#define STATE_HTTP_PREAUTH_INVALID_RESP             (STATE_HTTP_BASE - 0x0004)
/* Content length field does not exist in HTTP response from server */
/* ��HTTP���������صı�����, û���ҵ� Content-Length �ֶ� */
#define STATE_USER_INPUT_HTTP_CONTENT_LEN           (STATE_HTTP_BASE - 0x000F)

/* HTTP: 0x0600 ~ 0x06FF */

/* OTA: 0x0700 ~ 0x07FF */
#define STATE_OTA_BASE                              (-0x0700)

/* OTA: 0x0700 ~ 0x07FF */

/* Bind: 0x0800 ~ 0x08FF */
#define STATE_BIND_BASE                             (-0x0800)
/* Got external token configuration */
/* �󶨹���ģ����յ������ⲿ��Token���� */
#define STATE_BIND_SET_APP_TOKEN                    (STATE_BIND_BASE - 0x0001)
/* Skip current reset report since last reset already success */
/* ������ǰ�ĸ�λ������, ��Ϊ�ϴεĸ�λ�����ѱ�����˽���, ������ɹ� */
#define STATE_BIND_ALREADY_RESET                    (STATE_BIND_BASE - 0x0002)
/* Sending bind token to cloud */
/* ���ڽ���token���͸������ */
#define STATE_BIND_REPORT_TOKEN                     (STATE_BIND_BASE - 0x0003)
/* Sent bind token to cloud does not get response before timeout */
/* ��token���͸�����˺�, �ѳ����޶���ʱ��, ��δ�õ���Ӧ */
#define STATE_BIND_REPORT_TOKEN_TIMEOUT             (STATE_BIND_BASE - 0x0004)
/* Sent bind token to cloud gets success response */
/* ��token���͸�����˺�, �ѵõ�����˳ɹ����յĻ�Ӧ */
#define STATE_BIND_REPORT_TOKEN_SUCCESS             (STATE_BIND_BASE - 0x0005)
/* Failed to initialize CoAP server in LAN */
/* �󶨹���ģ��δ�ܳɹ�����CoAP����, �÷������ھ������ڵ�token���� */
#define STATE_BIND_COAP_INIT_FAIL                   (STATE_BIND_BASE - 0x0006)
/* Sending bind token in LAN */
/* ������������token�ھ������ڹ㲥 */
#define STATE_BIND_NOTIFY_TOKEN_SENT                (STATE_BIND_BASE - 0x0007)
/* Got token query request from external devices in same LAN */
/* ���ڽ��յ�ͬһ���������������������豸��token��ѯ���� */
#define STATE_BIND_RECV_TOKEN_QUERY                 (STATE_BIND_BASE - 0x0008)
/* Responding bind token in LAN */
/* ������Ӧ�������ڵ�token��ѯ����, ��token���͸����������豸 */
#define STATE_BIND_SENT_TOKEN_RESP                  (STATE_BIND_BASE - 0x0009)
/* Skip current bind action since offline reset in progress */
/* �ݲ����е�ǰ��token����, ��Ϊ����һ��δ��ɵ�����reset���ڽ����� */
#define STATE_BIND_RST_IN_PROGRESS                  (STATE_BIND_BASE - 0x000A)
/* Got invalid MQTT respond from server after token report */
/* ����token�ϱ�������˺�, ���յ��Ļ�Ӧ���Ĳ��Ϸ� */
#define STATE_BIND_MQTT_MSG_INVALID                 (STATE_BIND_BASE - 0x000B)
/* Got invalid CoAP request from external devices in same LAN */
/* ���յ�����ͬһ�����������������豸��token��ѯ����, �������Ĳ��Ϸ� */
#define STATE_BIND_COAP_MSG_INVALID                 (STATE_BIND_BASE - 0x000C)

/* Bind: 0x0800 ~ 0x08FF */

/* Device Model: 0x0900 ~ 0x09FF */
#define STATE_DEV_MODEL_BASE                        (-0x0900)

/* Master device already open so skip current open action */
/* ���豸�Ѿ���, �����ٴγ�ʼ�� */
#define STATE_DEV_MODEL_MASTER_ALREADY_OPEN         (STATE_DEV_MODEL_BASE - 0x0001)
/* Master device already connect so skip current connect action */
/* ���豸�Ѿ����ӷ����, �����ٴ����� */
#define STATE_DEV_MODEL_MASTER_ALREADY_CONNECT      (STATE_DEV_MODEL_BASE - 0x0002)
/* Master device not open yet so skip current action */
/* ��ǰ������Ҫ���豸open�ɹ�, ������δ��� */
#define STATE_DEV_MODEL_MASTER_NOT_OPEN_YET         (STATE_DEV_MODEL_BASE - 0x0003)
/* Master device not connect yet so skip current action */
/* ��ǰ������Ҫ���豸���ӷ���˳ɹ�, ������δ��� */
#define STATE_DEV_MODEL_MASTER_NOT_CONNECT_YET      (STATE_DEV_MODEL_BASE - 0x0004)
/* Requested device already created */
/* ��ǰ���󴴽����豸�Ѿ�����, �����ٴδ��� */
#define STATE_DEV_MODEL_DEVICE_ALREADY_EXIST        (STATE_DEV_MODEL_BASE - 0x0005)
/* Requested device not found in list */
/* ��ǰ�����Ӧ���豸δ�ҵ�, �޷�������� */
#define STATE_DEV_MODEL_DEVICE_NOT_FOUND            (STATE_DEV_MODEL_BASE - 0x0006)
/* Internal error happens in device model function */
/* ��ģ��/���豸����ģ�鷢���ڲ����� */
#define STATE_DEV_MODEL_INTERNAL_ERROR              (STATE_DEV_MODEL_BASE - 0x0007)
/* Internal error about file descriptor happens in device model function */
/* ��ģ��/���豸����ģ�鷢��fd�йص��ڲ����� */
#define STATE_DEV_MODEL_INTERNAL_FD_ERROR           (STATE_DEV_MODEL_BASE - 0x0008)
/* Internal event about MQTT connect happens in device model function */
/* ��ģ��/���豸����ģ�鷢��MQTT�����Ѿ�����, �����ٴν������� */
#define STATE_DEV_MODEL_INTERNAL_MQTT_DUP_INIT      (STATE_DEV_MODEL_BASE - 0x0009)
/* Internal error about MQTT unconnect happens in device model function */
/* ��ģ��/���豸����ģ�鷢��MQTT����δ�������ڲ����� */
#define STATE_DEV_MODEL_INTERNAL_MQTT_NOT_INIT_YET  (STATE_DEV_MODEL_BASE - 0x000A)
/* Failed to open handler for cloud abstract layer */
/* ��ģ��ģ���з������ӳ�����ʼ��ʧ�� */
#define STATE_DEV_MODEL_CM_OPEN_FAILED              (STATE_DEV_MODEL_BASE - 0x000B)
/* Failed to find file descriptor in cloud abstract layer */
/* ��ģ��ģ����δ�ҵ����ӳ�����fd */
#define STATE_DEV_MODEL_CM_FD_NOT_FOUND             (STATE_DEV_MODEL_BASE - 0x000C)
/* Failed to connect MQTT in device model function */
/* ��ģ��ģ���з���MQTT���ӽ���ʧ�� */
#define STATE_DEV_MODEL_MQTT_CONNECT_FAILED         (STATE_DEV_MODEL_BASE - 0x000D)
/* Got unexpected MQTT message from server in device model */
/* ��ģ��ģ���н��յ����Է���˵�MQTT������Ϣ, ���������ݲ�����Ԥ�� */
#define STATE_DEV_MODEL_RECV_UNEXP_MQTT_PUB         (STATE_DEV_MODEL_BASE - 0x000E)
/* Got MQTT message from server but its JSON format is wrong */
/* ��ģ��ģ���н��յ����Է���˵�MQTT������Ϣ, ���������ݲ��Ǻ����JSON��ʽ */
#define STATE_DEV_MODEL_WRONG_JSON_FORMAT           (STATE_DEV_MODEL_BASE - 0x000F)
/* Service respond does not have correct request context in device model */
/* ��ģ��ģ���з��ͷ����Ӧ���ĸ������ʱ, û���ҵ���Ӧ�ķ�������������� */
#define STATE_DEV_MODEL_SERVICE_CTX_NOT_EXIST       (STATE_DEV_MODEL_BASE - 0x0010)
/* OTA service is not enabled in device model */
/* ��ģ��ģ���з���OTA����δ���� */
#define STATE_DEV_MODEL_OTA_NOT_ENABLED             (STATE_DEV_MODEL_BASE - 0x0011)
/* OTA service is not initialized correctly in device model */
/* ��ģ��ģ���з���OTA������ȷ��ʼ�� */
#define STATE_DEV_MODEL_OTA_NOT_INITED              (STATE_DEV_MODEL_BASE - 0x0012)
/* OTA service is initialized but failed in device model */
/* ��ģ��ģ���з��ֶ�OTA���ܳ�ʼ��ʧ�� */
#define STATE_DEV_MODEL_OTA_INIT_FAILED             (STATE_DEV_MODEL_BASE - 0x0013)
/* OTA for some sub-device is not finished yet so skip device switching */
/* ���豸OTAʱ, ���ڵ�ǰ�����������豸OTA��δ���, ��������ǰ���� */
#define STATE_DEV_MODEL_OTA_STILL_IN_PROGRESS       (STATE_DEV_MODEL_BASE - 0x0014)
/* OTA firmware downloaded failed to pass integrity check */
/* ��ģ��ģ���з���OTA���صĹ̼�, δ��ͨ��������У�� */
#define STATE_DEV_MODEL_OTA_IMAGE_CHECK_FAILED      (STATE_DEV_MODEL_BASE - 0x0015)
/* ALCS function failed to initialize itself */
/* ���ؿ��ƹ��ܳ�ʼ��ʧ�� */
#define STATE_DEV_MODEL_ALCS_CONSTRUCT_FAILED       (STATE_DEV_MODEL_BASE - 0x0016)
/* Gateway/Sub-device management function is not configured on */
/* SDK��ǰδ������Ϊ�����豸����/���ع��� */
#define STATE_DEV_MODEL_GATEWAY_NOT_ENABLED         (STATE_DEV_MODEL_BASE - 0x0017)

/* Device Model: 0x0900 ~ 0x09FF */

#ifdef __cplusplus
}
#endif
#endif  /* __INFRA_STATE_H__ */

