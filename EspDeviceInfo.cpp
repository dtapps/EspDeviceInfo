#include "<EspDeviceInfo.h>"

// 获取设备编号 开始
#ifdef ESP8266
String EspDeviceInfo::GetDeviceId()
{
  uint32_t chip_id = ESP.getChipId();
  return String(chip_id, HEX);
}
#endif
#ifdef ESP32
String EspDeviceInfo::GetDeviceId()
{
  uint64_t chip_id = ESP.getEfuseMac();
  return String(chip_id, HEX);
}
#endif
// 获取设备编号 结束

// 获取设备名称 开始
#ifdef ESP8266
String EspDeviceInfo::GetDeviceName()
{
  return WiFi.hostname();
}
#endif
#ifdef ESP32
String EspDeviceInfo::GetDeviceName()
{
  return WiFi.getHostname();
}
#endif
// 获取设备名称 结束

// 获取系统SDK版本 开始
#ifdef ESP8266
String EspDeviceInfo::GetSystemSdkVersion()
{
  return system_get_sdk_version();
}
#endif
#ifdef ESP32
String EspDeviceInfo::GetSystemSdkVersion()
{
  return esp_get_idf_version();
}
#endif
// 获取系统SDK版本 结束

// 获取系统在线时长 开始
#ifdef ESP8266
long EspDeviceInfo::GetSystemUptime()
{
  return millis() / 1000;
}
#endif
#ifdef ESP32
long EspDeviceInfo::GetSystemUptime()
{
  return esp_log_timestamp() / 1000;
}
#endif
// 获取系统在线时长 结束

// 获取系统空间大小
float EspDeviceInfo::GetSystemSpaceSize()
{
  return ESP.getSketchSize();
}

// 获取系统可用空间大小
float EspDeviceInfo::GetSystemFreeSpaceSize()
{
  return ESP.getFreeSketchSpace();
}

// 获取系统内存大小 开始
#ifdef ESP8266
float EspDeviceInfo::GetSystemFlashSize()
{
  return ESP.getFlashChipSize();
}
#endif
#ifdef ESP32
float EspDeviceInfo::GetSystemFlashSize()
{
  return spi_flash_get_chip_size();
}
#endif
// 获取系统内存大小 结束

// 获取系统可用内存大小 开始
#ifdef ESP8266
float EspDeviceInfo::GetSystemFreeFlashSize()
{
  return ESP.getFreeHeap();
}
#endif
#ifdef ESP32
float EspDeviceInfo::GetSystemFreeFlashSize()
{
  return esp_get_free_heap_size();
}
#endif
// 获取系统可用内存大小 结束

// 获取系统CPU频率
float EspDeviceInfo::GetSystemCpuFreq()
{
  return ESP.getCpuFreqMHz();
}

// 获取WiFi信号强度
float EspDeviceInfo::GetWiFiSignalStrength()
{
  return WiFi.RSSI();
}

// 获取WiFiMAC地址
String EspDeviceInfo::GetWiFiMacAddress()
{
  return WiFi.macAddress();
}

// 获取IP地址
String EspDeviceInfo::GetWiFiIpAddress()
{
  return WiFi.localIP().toString();
}

// 获取WiFiBSSID
String EspDeviceInfo::GetWifiBssid()
{
  return WiFi.BSSIDstr();
}

// 获取WiFi频道
uint8_t EspDeviceInfo::GetWifiChannel()
{
  return WiFi.channel();
}

// 获取WiFi网关
String EspDeviceInfo::GetWifiGatewayIp()
{
  return WiFi.gatewayIP().toString();
}

// 获取WiFi子网掩码
String EspDeviceInfo::GetWifiSubnetMask()
{
  return WiFi.subnetMask().toString();
}
