/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FOUNDATION_EVENT_CESFWK_KITS_NATIVE_INCLUDE_COMMON_EVENT_SUPPORT_H
#define FOUNDATION_EVENT_CESFWK_KITS_NATIVE_INCLUDE_COMMON_EVENT_SUPPORT_H

#include <string>
#include <vector>

namespace OHOS {
namespace EventFwk {
class CommonEventSupport {
public:
    /**
     * Indicate the action of a common event that the user has finished booting and the system has been loaded.
     * To subscribe to this common event, your application must have the ohos.permission.RECEIVER_STARTUP_COMPLETED
     * permission.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_BOOT_COMPLETED;
    /**
     * Indicate the action of a common event that the user has finished booting and the system has been loaded but the
     * screen is still locked.
     * To subscribe to this common event, your application must have the ohos.permission.RECEIVER_STARTUP_COMPLETED
     * permission.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_LOCKED_BOOT_COMPLETED;
    /**
     * Indicate the action of a common event that the device is being shut down and the final shutdown will proceed.
     * This is different from sleeping. All unsaved data will be lost after shut down.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_SHUTDOWN;
    /**
     * Indicate the action of a common event that the charging state, level, and other information about the battery
     * have changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_BATTERY_CHANGED;
    /**
     * Indicate the action of a common event that the battery level is low.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_BATTERY_LOW;
    /**
     * Indicate the action of a common event that the battery exit the low state.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_BATTERY_OKAY;
    /**
     * Indicate the action of a common event that the device is connected to the external power.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_POWER_CONNECTED;
    /**
     * Indicate the action of a common event that the device is disconnected from the external power.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_POWER_DISCONNECTED;

    /**
     * Indicate the action of a common event that the device screen is off and the device is sleeping.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_SCREEN_OFF;
    /**
     * Indicate the action of a common event that the device screen is on and the device is interactive.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_SCREEN_ON;
    /**
     * Indicate the action of a common event that the user unlocks the device.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_USER_PRESENT;

    /**
     * Indicate the action of a common event that the system time has changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_TIME_TICK;
    /**
     * Indicate the action of a common event that the system time is set.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_TIME_CHANGED;
    /**
     * Indicate the action of a common event that the system date has changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_DATE_CHANGED;
    /**
     * Indicate the action of a common event that the system time zone has changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_TIMEZONE_CHANGED;

    /**
     * Indicate the action of a common event that a user closes a temporary system dialog box.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_CLOSE_SYSTEM_DIALOGS;

    /**
     * Indicate the action of a common event that a new application package has been installed on the device.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_ADDED;
    /**
     * Indicate the action of a common event that a new version of an installed application package has replaced
     * the previous one on the device.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_REPLACED;
    /**
     * Indicate the action of a common event that a new version of your application package has replaced
     * the previous one. This common event is sent only to the application that was replaced.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_MY_PACKAGE_REPLACED;
    /**
     * Indicate the action of a common event that an installed application has been uninstalled from the device
     * with the application data remained.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_REMOVED;
    /**
     * Indicate the action of a common event that an installed application, including both the application data and
     * code, have been completely uninstalled from the device.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_FULLY_REMOVED;
    /**
     * Indicate the action of a common event that an application package has been changed
     * (for example, a component in the package has been enabled or disabled).
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_CHANGED;
    /**
     * Indicate the action of a common event that the user has restarted the application package and killed all its
     * processes.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_RESTARTED;
    /**
     * Indicate the action of a common event that the user has cleared the application package data.
     * This common event is published after COMMON_EVENT_PACKAGE_RESTARTED is triggered and the data has been cleared.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_DATA_CLEARED;
    /**
     * Indicate the action of a common event that application packages have been suspended.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGES_SUSPENDED;
    /**
     * Indicate the action of a common event that application packages have not been suspended.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGES_UNSUSPENDED;
    /**
     * Indicate the action of a common event that an application package has been suspended.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_MY_PACKAGE_SUSPENDED;
    /**
     * Indicate the action of a common event that an application package has not been suspended.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_MY_PACKAGE_UNSUSPENDED;
    /**
     * Indicate the action of a common event that a user ID has been removed from the system.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_UID_REMOVED;
    /**
     * Indicate the action of a common event that an installed application is started for the first time.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_FIRST_LAUNCH;
    /**
     * Indicate the action of a common event that an application requires system verification.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_NEEDS_VERIFICATION;
    /**
     * Indicate the action of a common event that an application has been verified by the system.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_PACKAGE_VERIFIED;

    /**
     * Indicate the action of a common event that applications installed on the external storage become
     * available for the system.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_EXTERNAL_APPLICATIONS_AVAILABLE;
    /**
     * Indicate the action of a common event that applications installed on the external storage become unavailable for
     * the system.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_EXTERNAL_APPLICATIONS_UNAVAILABLE;

    /**
     * Indicates the action of a common event that the device state (for example, orientation and locale) has changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_CONFIGURATION_CHANGED;
    /**
     * Indicate the action of a common event that the device locale has changed.
     * This common event can only be published by the system.
     */
    static const std::string COMMON_EVENT_LOCALE_CHANGED;

    /**
     * Indicate the action of a common event that the device storage is insufficient.
     */
    static const std::string COMMON_EVENT_MANAGE_PACKAGE_STORAGE;

    /**
     * Indicate the action of a common event that the system is in driving mode.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_DRIVE_MODE;
    /**
     * Indicate the action of a common event that the system is in home mode.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_HOME_MODE;
    /**
     * Indicate the action of a common event that the system is in office mode.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_OFFICE_MODE;

    /**
     * Indicate the action of a common event that the user has been started.
     */
    static const std::string COMMON_EVENT_USER_STARTED;
    /**
     * Indicate the action of a common event that the user has been brought to the background.
     */
    static const std::string COMMON_EVENT_USER_BACKGROUND;
    /**
     * Indicate the action of a common event that the user has been brought to the foreground.
     */
    static const std::string COMMON_EVENT_USER_FOREGROUND;
    /**
     * Indicate the action of a common event that a user switch is happening.
     * To subscribe to this common event, your application must have the ohos.permission.MANAGE_USERS permission.
     */
    static const std::string COMMON_EVENT_USER_SWITCHED;
    /**
     * Indicate the action of a common event that the user is going to be started.
     * To subscribe to this common event, your application must have the ohos.permission.INTERACT_ACROSS_USERS
     * permission.
     */
    static const std::string COMMON_EVENT_USER_STARTING;
    /**
     * Indicate the action of a common event that the credential-encrypted storage has become unlocked
     * for the current user when the device is unlocked after being restarted.
     */
    static const std::string COMMON_EVENT_USER_UNLOCKED;
    /**
     * Indicate the action of a common event that the user is going to be stopped.
     * To subscribe to this common event, your application must have the ohos.permission.INTERACT_ACROSS_USERS
     * permission.
     */
    static const std::string COMMON_EVENT_USER_STOPPING;
    /**
     * Indicate the action of a common event that the user has been stopped.
     */
    static const std::string COMMON_EVENT_USER_STOPPED;
    /**
     * Indicate the action of a common event about a login of a user with account ID.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_HWID_LOGIN;
    /**
     * Indicate the action of a common event about a logout of a user with account ID.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_HWID_LOGOUT;
    /**
     * Indicate the action of a common event that the account ID is invalid.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_HWID_TOKEN_INVALID;
    /**
     * Indicate the action of a common event about a logoff of a account ID.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_HWID_LOGOFF;

    /**
     * Indicate the action of a common event about the Wi-Fi state, such as enabled and disabled.
     */
    static const std::string COMMON_EVENT_WIFI_POWER_STATE;

    /**
     * Indicate the action of a common event that the Wi-Fi access point has been scanned and proven to be available.
     * To subscribe to this common event, your application must have the ohos.permission.LOCATION permission.
     */
    static const std::string COMMON_EVENT_WIFI_SCAN_FINISHED;

    /**
     * Indicate the action of a common event that the Wi-Fi signal strength (RSSI) has changed.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_RSSI_VALUE;

    /**
     * Indicate the action of a common event that the Wi-Fi connection state has changed.
     */
    static const std::string COMMON_EVENT_WIFI_CONN_STATE;

    /**
     * Indicate the action of a common event about the Wi-Fi hotspot state, such as enabled or disabled.
     */
    static const std::string COMMON_EVENT_WIFI_HOTSPOT_STATE;

    /**
     * Indicates the action of a common event that a client has joined the Wi-Fi hotspot of the current device. You can
     * register this common event to listen for information about the clients joining your hotspot.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_AP_STA_JOIN;

    /**
     * Indicates the action of a common event that a client has dropped connection to the Wi-Fi hotspot of the current
     * device. You can register this common event to listen for information about the clients leaving your hotspot.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_AP_STA_LEAVE;

    /**
     * Indicate the action of a common event that the state of MPLink (an enhanced Wi-Fi feature) has changed.
     * To subscribe to this common event, your application must have the ohos.permission.MPLINK_CHANGE_STATE permission.
     */
    static const std::string COMMON_EVENT_WIFI_MPLINK_STATE_CHANGE;

    /**
     * Indicate the action of a common event that the Wi-Fi P2P connection state has changed.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO and
     * ohos.permission.LOCATION permissions.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_CONN_STATE;

    /**
     * Indicate the action of a common event about the Wi-Fi P2P state, such as enabled and disabled.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_STATE_CHANGED;

    /**
     * Indicate that the Wi-Fi P2P peers state change.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_PEERS_STATE_CHANGED;

    /**
     * Indicate that the Wi-Fi P2P discovery state change.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_PEERS_DISCOVERY_STATE_CHANGED;

    /**
     * Indicate that the Wi-Fi P2P current device state change.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_CURRENT_DEVICE_STATE_CHANGED;

    /**
     * Indicate that the Wi-Fi P2P group info is changed.
     * To subscribe to this common event, your application must have the ohos.permission.GET_WIFI_INFO permission.
     */
    static const std::string COMMON_EVENT_WIFI_P2P_GROUP_STATE_CHANGED;

    /**
     * Indicate the action of a common event about the connection state of Bluetooth handsfree communication.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREE_AG_CONNECT_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the device connected to the Bluetooth handsfree is active.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREE_AG_CURRENT_DEVICE_UPDATE;

    /**
     * Indicate the action of a common event that the connection state of Bluetooth A2DP has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREE_AG_AUDIO_STATE_UPDATE;

    /**
     * Indicate the action of a common event about the connection state of Bluetooth A2DP.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSOURCE_CONNECT_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the device connected using Bluetooth A2DP is active.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSOURCE_CURRENT_DEVICE_UPDATE;

    /**
     * Indicate the action of a common event that the playing state of Bluetooth A2DP has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSOURCE_PLAYING_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the AVRCP connection state of Bluetooth A2DP has changed.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSOURCE_AVRCP_CONNECT_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the audio codec state of Bluetooth A2DP has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSOURCE_CODEC_VALUE_UPDATE;

    /**
     * Indicate the action of a common event that a remote Bluetooth device has been discovered.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH and
     * ohos.permission.LOCATION permissions.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_DISCOVERED;

    /**
     * Indicate the action of a common event that the Bluetooth class of a remote Bluetooth device has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_CLASS_VALUE_UPDATE;

    /**
     * Indicate the action of a common event that a low level (ACL) connection has been established with a remote
     * Bluetooth device.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_ACL_CONNECTED;

    /**
     * Indicate the action of a common event that a low level (ACL) connection has been disconnected from a remote
     * Bluetooth device.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_ACL_DISCONNECTED;

    /**
     * Indicate the action of a common event that the friendly name of a remote Bluetooth device has been retrieved for
     * the first time or has been changed since the last retrieval.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_NAME_UPDATE;

    /**
     * Indicate the action of a common event that the connection state of a remote Bluetooth device has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_PAIR_STATE;

    /**
     * Indicate the action of a common event that the battery level of a remote Bluetooth device has been retrieved
     * for the first time or has been changed since the last retrieval.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_BATTERY_VALUE_UPDATE;

    /**
     * Indicate the action of a common event about the SDP state of a remote Bluetooth device.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_SDP_RESULT;

    /**
     * Indicate the action of a common event about the UUID connection state of a remote Bluetooth device.
     * To subscribe to this common event, your application must have the ohos.permission.DISCOVER_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_UUID_VALUE;

    /**
     * Indicate the action of a common event about the pairing request from a remote Bluetooth device.
     * To subscribe to this common event, your application must have the ohos.permission.DISCOVER_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_PAIRING_REQ;

    /**
     * Indicate the action of a common event that Bluetooth pairing is canceled.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_PAIRING_CANCEL;

    /**
     * Indicate the action of a common event about the connection request from a remote Bluetooth device.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_CONNECT_REQ;

    /**
     * Indicate the action of a common event about the response to the connection request from a remote Bluetooth
     * device.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_CONNECT_REPLY;

    /**
     * Indicate the action of a common event that the connection to a remote Bluetooth device has been canceled.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_REMOTEDEVICE_CONNECT_CANCEL;

    /**
     * Indicate the action of a common event that the connection state of a Bluetooth handsfree has changed.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREEUNIT_CONNECT_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the audio state of a Bluetooth handsfree has changed.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREEUNIT_AUDIO_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the audio gateway state of a Bluetooth handsfree has changed.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREEUNIT_AG_COMMON_EVENT;

    /**
     * Indicate the action of a common event that the calling state of a Bluetooth handsfree has changed.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HANDSFREEUNIT_AG_CALL_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the state of a Bluetooth adapter has been changed, for example,
     * Bluetooth has been turned on or off.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_STATE_UPDATE;

    /**
     * Indicate the action of a common event about the requests for the user to allow Bluetooth to be scanned.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_REQ_DISCOVERABLE;

    /**
     * Indicate the action of a common event about the requests for the user to turn on Bluetooth.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_REQ_ENABLE;

    /**
     * Indicate the action of a common event about the requests for the user to turn off Bluetooth.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_REQ_DISABLE;

    /**
     * Indicate the action of a common event that the Bluetooth scanning mode of a device has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_SCAN_MODE_UPDATE;

    /**
     * Indicate the action of a common event that the Bluetooth scanning has been started on the device.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_DISCOVERY_STARTED;

    /**
     * Indicate the action of a common event that the Bluetooth scanning is finished on the device.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_DISCOVERY_FINISHED;

    /**
     * Indicate the action of a common event that the Bluetooth adapter name of the device has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_HOST_NAME_UPDATE;

    /**
     * Indicate the action of a common event that the connection state of Bluetooth A2DP Sink has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSINK_CONNECT_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the playing state of Bluetooth A2DP Sink has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSINK_PLAYING_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the audio state of Bluetooth A2DP Sink has changed.
     * To subscribe to this common event, your application must have the ohos.permission.USE_BLUETOOTH permission.
     */
    static const std::string COMMON_EVENT_BLUETOOTH_A2DPSINK_AUDIO_STATE_UPDATE;

    /**
     * Indicate the action of a common event that the state of the device NFC adapter has changed.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_NFC_ACTION_ADAPTER_STATE_CHANGED;

    /**
     * Indicate the action of a common event that the NFC RF field is detected to be in the enabled state.
     * To subscribe to this common event, your application must have the ohos.permission.MANAGE_SECURE_SETTINGS
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_NFC_ACTION_RF_FIELD_ON_DETECTED;

    /**
     * Indicate the action of a common event that the NFC RF field is detected to be in the disabled state.
     * To subscribe to this common event, your application must have the ohos.permission.MANAGE_SECURE_SETTINGS
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_NFC_ACTION_RF_FIELD_OFF_DETECTED;

    /**
     * Indicate the action of a common event that the system stops charging the battery.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_DISCHARGING;

    /**
     * Indicate the action of a common event that the system starts charging the battery.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_CHARGING;

    /**
     * Indicate the action of a common event that the system idle mode has changed.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_DEVICE_IDLE_MODE_CHANGED;

    /**
     * Indicate the action of a common event that the power save mode of the system has changed.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_POWER_SAVE_MODE_CHANGED;

    /**
     * Indicate the action of a common event that a user has been added to the system.
     * To subscribe to this common event, your application must have the ohos.permission.MANAGE_USERS permission.
     */
    static const std::string COMMON_EVENT_USER_ADDED;
    /**
     * Indicate the action of a common event that a user has been removed from the system.
     * To subscribe to this common event, your application must have the ohos.permission.MANAGE_USERS permission.
     */
    static const std::string COMMON_EVENT_USER_REMOVED;

    /**
     * Indicate the action of a common event that an ability has been added.
     * To subscribe to this common event, your application must have the ohos.permission.LISTEN_BUNDLE_CHANGE
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_ABILITY_ADDED;

    /**
     * Indicate the action of a common event that an ability has been removed.
     * To subscribe to this common event, your application must have the ohos.permission.LISTEN_BUNDLE_CHANGE
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_ABILITY_REMOVED;

    /**
     * Indicate the action of a common event that an ability has been updated.
     * To subscribe to this common event, your application must have the ohos.permission.LISTEN_BUNDLE_CHANGE
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_ABILITY_UPDATED;

    /**
     * Indicate the action of a common event that the location mode of the system has changed.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_LOCATION_MODE_STATE_CHANGED;

    /**
     * Indicate the action of a common event that the in-vehicle infotainment (IVI) system of a vehicle is sleeping.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_SLEEP;

    /**
     * The ivi is slept and notify the app stop playing.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_IVI_PAUSE;

    /**
     * Indicate the action of a common event that a third-party application is instructed to pause the current work.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_STANDBY;

    /**
     * Indicate the action of a common event that a third-party application is instructed to save its last mode.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_LASTMODE_SAVE;

    /**
     * Indicate the action of a common event that the voltage of the vehicle power system is abnormal.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_VOLTAGE_ABNORMAL;

    /**
     * The ivi temperature is too high.
     * This is a protected common event that can only be sent by system.
     * This common event will be delete later, please use COMMON_EVENT_IVI_TEMPERATURE_ABNORMAL.
     */
    static const std::string COMMON_EVENT_IVI_HIGH_TEMPERATURE;

    /**
     * The ivi temperature is extreme high.
     * This is a protected common event that can only be sent by system.
     * This common event will be delete later, please use COMMON_EVENT_IVI_TEMPERATURE_ABNORMAL.
     */
    static const std::string COMMON_EVENT_IVI_EXTREME_TEMPERATURE;

    /**
     * Indicate the action of a common event that the in-vehicle system has an extreme temperature.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_TEMPERATURE_ABNORMAL;

    /**
     * Indicate the action of a common event that the voltage of the vehicle power system is restored to normal.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_VOLTAGE_RECOVERY;

    /**
     * Indicate the action of a common event that the temperature of the in-vehicle system is restored to normal.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_TEMPERATURE_RECOVERY;

    /**
     * Indicate the action of a common event that the battery service is active.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_IVI_ACTIVE;

    /**
     * The usb state changed.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_USB_STATE;

    /**
     * The usb port changed.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_USB_PORT_CHANGED;

    /**
     * Indicate the action of a common event that a USB device has been attached when the user device functions as a USB
     * host.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_USB_DEVICE_ATTACHED;

    /**
     * Indicate the action of a common event that a USB device has been detached when the user device functions as a USB
     * host.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_USB_DEVICE_DETACHED;

    /**
     * Indicate the action of a common event that a USB accessory has been attached.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_USB_ACCESSORY_ATTACHED;

    /**
     * Indicate the action of a common event that a USB accessory has been detached.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_USB_ACCESSORY_DETACHED;

    /**
     * The storage space is low.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_DEVICE_STORAGE_LOW;

    /**
     * The storage space is normal.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_DEVICE_STORAGE_OK;

    /**
     * The storage space is full.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_DEVICE_STORAGE_FULL;

    /**
     * The network connection was changed.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_CONNECTIVITY_CHANGE;

    /**
     * Indicate the action of a common event that an external storage device was removed.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_REMOVED;

    /**
     * Indicate the action of a common event that an external storage device was unmounted.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_UNMOUNTED;

    /**
     * Indicate the action of a common event that an external storage device was mounted.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_MOUNTED;

    /**
     * Indicate the action of a common event that an external storage device was removed without being unmounted.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_BAD_REMOVAL;

    /**
     * Indicate the action of a common event that an external storage device becomes unmountable.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_UNMOUNTABLE;

    /**
     * Indicate the action of a common event that an external storage device was ejected.
     * To subscribe to this common event, your application must have the ohos.permission.WRITE_USER_STORAGE or
     * ohos.permission.READ_USER_STORAGE permission.
     * This common event can be published only by system applications.
     */
    static const std::string COMMON_EVENT_DISK_EJECT;

    /**
     * Indicate the action of a common event that the account visible changed.
     * To subscribe to this common event, your application must have the ohos.permission.GET_APP_ACCOUNTS permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_VISIBLE_ACCOUNTS_UPDATED;

    /**
     * Indicate the action of a common event that the account is deleted.
     * To subscribe to this common event, your application must have the ohos.permission.INTERACT_ACROSS_LOCAL_ACCOUNTS
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_ACCOUNT_DELETED;

    /**
     * Indicate the action of a common event that the foundation is ready.
     * To subscribe to this common event, your application must have the ohos.permission.RECEIVER_STARTUP_COMPLETED
     * permission.
     * This is a protected common event, which can be sent only by the system.
     */
    static const std::string COMMON_EVENT_FOUNDATION_READY;

    /**
     * Indicates the action of a common event that the phone SIM card state has changed.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_SIM_CARD_DEFAULT_VOICE_SUBSCRIPTION_CHANGED;

    /**
     * Indicates the action of a common event that the phone SIM card state has changed.
     * This is a protected common event that can only be sent by system.
     */
    static const std::string COMMON_EVENT_SIM_STATE_CHANGED;

    /**
     * Indicate the action of a common event that the airplane mode of the device has changed.
     * This common event can be triggered only by system applications.
     */
    static const std::string COMMON_EVENT_AIRPLANE_MODE_CHANGED;

    /**
     * Indicate the action of a common event that a new sms bas been received by the device.
     * This common event can be triggered only by system applications.
     */
    static const std::string COMMON_EVENT_SMS_RECEIVE_COMPLETED;

    /**
     * Indicate the action of a common event that the spn display information has been updated.
     * This common event can be triggered only by system applications.
     */
    static const std::string COMMON_EVENT_SPN_INFO_UPDATED;

    /**
     * Only for test case.
     */
    static const std::string COMMON_EVENT_TEST_ACTION1;

    /**
     * Only for test case.
     */
    static const std::string COMMON_EVENT_TEST_ACTION2;

public:
    /**
     * Default constructor used to create an empty CommonEventSupport instance.
     */
    CommonEventSupport();

    /**
     * Default deconstructor used to deconstruct.
     */
    virtual ~CommonEventSupport();

    /**
     * Check whether the current common event is a system common event.
     * @param str the action of a common event.
     * @return whether the current common event is a system common event or not.
     */
    bool IsSystemEvent(std::string &str);

private:
    void Init();

private:
    std::vector<std::string> commonEventSupport_;
};
}  // namespace EventFwk
}  // namespace OHOS

#endif  // FOUNDATION_EVENT_CESFWK_KITS_NATIVE_INCLUDE_COMMON_EVENT_SUPPORT_H