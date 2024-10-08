/**
 * Copyright (C) 2024 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#define BTIF_STORAGE_SECTION_ADAPTER "Adapter"
#define BTIF_STORAGE_SECTION_INFO "Info"
#define BTIF_STORAGE_SECTION_METRICS "Metrics"

#define BTIF_STORAGE_KEY_ADDR_TYPE "AddrType"
#define BTIF_STORAGE_KEY_ADDRESS "Address"
#define BTIF_STORAGE_KEY_ALIAS "Aliase"
#define BTIF_STORAGE_KEY_APPEARANCE "Appearance"
#define BTIF_STORAGE_KEY_AV_REM_CTRL_FEATURES "AvrcpPeerFeatures"
#define BTIF_STORAGE_KEY_AVDTP_VERSION "AvdtpVersion"
#define BTIF_STORAGE_KEY_AVRCP_CONTROLLER_VERSION "AvrcpControllerVersion"
#define BTIF_STORAGE_KEY_CLOCK_OFFSET "ClockOffset"
#define BTIF_STORAGE_KEY_CSIS_AUTOCONNECT "CsisAutoconnect"
#define BTIF_STORAGE_KEY_CSIS_SET_INFO_BIN "CsisSetInfoBin"
#define BTIF_STORAGE_KEY_DEV_CLASS "DevClass"
#define BTIF_STORAGE_KEY_DEV_TYPE "DevType"
#define BTIF_STORAGE_KEY_DEVICE_GROUP_BIN "DeviceGroupBin"
#define BTIF_STORAGE_KEY_DIS_MODEL_NUM "ModelName"
#define BTIF_STORAGE_KEY_DISC_TIMEOUT "DiscoveryTimeout"
#define BTIF_STORAGE_KEY_GATT_CLIENT_DB_HASH "GattClientDatabaseHash"
#define BTIF_STORAGE_KEY_GATT_CLIENT_SUPPORTED "GattClientSupportedFeatures"
#define BTIF_STORAGE_KEY_GATT_SERVER_SUPPORTED "GattServerSupportedFeatures"
#define BTIF_STORAGE_KEY_HEARING_AID_AUDIO_CONTROL_POINT "HearingAidAudioControlPoint"
#define BTIF_STORAGE_KEY_HEARING_AID_AUDIO_STATUS_CCC_HANDLE "HearingAidAudioStatusCccHandle"
#define BTIF_STORAGE_KEY_HEARING_AID_AUDIO_STATUS_HANDLE "HearingAidAudioStatusHandle"
#define BTIF_STORAGE_KEY_HEARING_AID_CAPABILITIES "HearingAidCapabilities"
#define BTIF_STORAGE_KEY_HEARING_AID_CODECS "HearingAidCodecs"
#define BTIF_STORAGE_KEY_HEARING_AID_IS_ACCEPTLISTED "HearingAidIsAcceptlisted"
#define BTIF_STORAGE_KEY_HEARING_AID_PREPARATION_DELAY "HearingAidPreparationDelay"
#define BTIF_STORAGE_KEY_HEARING_AID_READ_PSM_HANDLE "HearingAidReadPsmHandle"
#define BTIF_STORAGE_KEY_HEARING_AID_RENDER_DELAY "HearingAidRenderDelay"
#define BTIF_STORAGE_KEY_HEARING_AID_SERVICE_CHANGED_CCC_HANDLE "HearingAidServiceChangedCccHandle"
#define BTIF_STORAGE_KEY_HEARING_AID_SYNC_ID "HearingAidSyncId"
#define BTIF_STORAGE_KEY_HEARING_AID_VOLUME_HANDLE "HearingAidVolumeHandle"
#define BTIF_STORAGE_KEY_HFP_SDP_FEATURES "HfpSdpFeatures"
#define BTIF_STORAGE_KEY_HFP_VERSION "HfpVersion"
#define BTIF_STORAGE_KEY_HID_APP_ID "HidAppId"
#define BTIF_STORAGE_KEY_HID_ATTR_MASK "HidAttrMask"
#define BTIF_STORAGE_KEY_HID_COUNTRY_CODE "HidCountryCode"
#define BTIF_STORAGE_KEY_HID_DESCRIPTOR "HidDescriptor"
#define BTIF_STORAGE_KEY_HID_DEVICE_CABLED "HidDeviceCabled"
#define BTIF_STORAGE_KEY_HID_PRODUCT_ID "HidProductId"
#define BTIF_STORAGE_KEY_HID_RECONNECT_ALLOWED "HidReConnectAllowed"
#define BTIF_STORAGE_KEY_HID_REPORT "HidReport"
#define BTIF_STORAGE_KEY_HID_REPORT_VERSION "HidReportVersion"
#define BTIF_STORAGE_KEY_HID_SSR_MAX_LATENCY "HidSSRMaxLatency"
#define BTIF_STORAGE_KEY_HID_SSR_MIN_TIMEOUT "HidSSRMinTimeout"
#define BTIF_STORAGE_KEY_HID_SUB_CLASS "HidSubClass"
#define BTIF_STORAGE_KEY_HID_VENDOR_ID "HidVendorId"
#define BTIF_STORAGE_KEY_HID_VERSION "HidVersion"
#define BTIF_STORAGE_KEY_LE_KEY_LCSRK "LE_KEY_LCSRK"
#define BTIF_STORAGE_KEY_LE_KEY_LENC "LE_KEY_LENC"
#define BTIF_STORAGE_KEY_LE_KEY_LID "LE_KEY_LID"
#define BTIF_STORAGE_KEY_LE_KEY_PCSRK "LE_KEY_PCSRK"
#define BTIF_STORAGE_KEY_LE_KEY_PENC "LE_KEY_PENC"
#define BTIF_STORAGE_KEY_LE_KEY_PID "LE_KEY_PID"
#define BTIF_STORAGE_KEY_LE_LOCAL_KEY_DHK "LE_LOCAL_KEY_DHK"
#define BTIF_STORAGE_KEY_LE_LOCAL_KEY_ER "LE_LOCAL_KEY_ER"
#define BTIF_STORAGE_KEY_LE_LOCAL_KEY_IR "LE_LOCAL_KEY_IR"
#define BTIF_STORAGE_KEY_LE_LOCAL_KEY_IRK "LE_LOCAL_KEY_IRK"
#define BTIF_STORAGE_KEY_LEAUDIO_ASES_BIN "AsesBin"
#define BTIF_STORAGE_KEY_LEAUDIO_AUTOCONNECT "LeAudioAutoconnect"
#define BTIF_STORAGE_KEY_LEAUDIO_HANDLES_BIN "LeAudioHandlesBin"
#define BTIF_STORAGE_KEY_LEAUDIO_HAS_ACTIVE_PRESET "LeAudioHasActivePreset"
#define BTIF_STORAGE_KEY_LEAUDIO_HAS_FLAGS "LeAudioHasFlags"
#define BTIF_STORAGE_KEY_LEAUDIO_HAS_IS_ACCEPTLISTED "LeAudioHasIsAcceptlisted"
#define BTIF_STORAGE_KEY_LEAUDIO_HAS_SERIALIZED_PRESETS "LeAudioHasSerializedPresets"
#define BTIF_STORAGE_KEY_LEAUDIO_SINK_AUDIOLOCATION "SinkAudioLocation"
#define BTIF_STORAGE_KEY_LEAUDIO_SINK_PACS_BIN "SinkPacsBin"
#define BTIF_STORAGE_KEY_LEAUDIO_SINK_SUPPORTED_CONTEXT_TYPE "SinkSupportedContextType"
#define BTIF_STORAGE_KEY_LEAUDIO_SOURCE_AUDIOLOCATION "SourceAudioLocation"
#define BTIF_STORAGE_KEY_LEAUDIO_SOURCE_PACS_BIN "SourcePacsBin"
#define BTIF_STORAGE_KEY_LEAUDIO_SOURCE_SUPPORTED_CONTEXT_TYPE "SourceSupportedContextType"
#define BTIF_STORAGE_KEY_LINK_KEY "LinkKey"
#define BTIF_STORAGE_KEY_LINK_KEY_TYPE "LinkKeyType"
#define BTIF_STORAGE_KEY_LOCAL_IO_CAPS "LocalIOCaps"
#define BTIF_STORAGE_KEY_MAX_SESSION_KEY_SIZE "MaxSessionKeySize"
#define BTIF_STORAGE_KEY_METRICS_ID_KEY "MetricsId"
#define BTIF_STORAGE_KEY_METRICS_SALT_256BIT "Salt256Bit"
#define BTIF_STORAGE_KEY_NAME "Name"
#define BTIF_STORAGE_KEY_PBAP_PCE_VERSION "PbapPceVersion"
#define BTIF_STORAGE_KEY_PIN_LENGTH "PinLength"
#define BTIF_STORAGE_KEY_PRODUCT_ID "ProductId"
#define BTIF_STORAGE_KEY_REMOTE_SERVICE "Service"
#define BTIF_STORAGE_KEY_REMOTE_VER_MFCT "Manufacturer"
#define BTIF_STORAGE_KEY_REMOTE_VER_SUBVER "LmpSubVer"
#define BTIF_STORAGE_KEY_REMOTE_VER_VER "LmpVer"
#define BTIF_STORAGE_KEY_RESTRICTED "Restricted"
#define BTIF_STORAGE_KEY_SCANMODE "ScanMode"
#define BTIF_STORAGE_KEY_SDP_DI_HW_VERSION "SdpDiHardwareVersion"
#define BTIF_STORAGE_KEY_SDP_DI_MANUFACTURER "SdpDiManufacturer"
#define BTIF_STORAGE_KEY_SDP_DI_MODEL "SdpDiModel"
#define BTIF_STORAGE_KEY_SDP_DI_VENDOR_ID_SRC "SdpDiVendorIdSource"
#define BTIF_STORAGE_KEY_SECURE_CONNECTIONS_SUPPORTED "SecureConnectionsSupported"
#define BTIF_STORAGE_KEY_TIMESTAMP "Timestamp"
#define BTIF_STORAGE_KEY_VENDOR_ID "VendorId"
#define BTIF_STORAGE_KEY_VENDOR_ID_SOURCE "VendorIdSource"
#define BTIF_STORAGE_KEY_VERSION "ProductVersion"
