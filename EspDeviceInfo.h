#ifndef ESP_DEVICE_INFO_H
#define ESP_DEVICE_INFO_H

class ESP_DEVICE_INFO
{
public:
  void GetDeviceId();
  void GetDeviceName();
  void GetSystemSdkVersion();
  void GetSystemUptime();
  void GetSystemSpaceSize();
  void GetSystemFreeSpaceSize();
  void GetSystemFlashSize();
  void GetSystemFreeFlashSize();
  void GetSystemCpuFreq();
  void GetWiFiSignalStrength();
  void GetWiFiMacAddress();
  void GetWiFiIpAddress();
  void GetWifiBssid();
  void GetWifiChannel();
  void GetWifiGatewayIp();
  void GetWifiSubnetMask();
};

#endif
