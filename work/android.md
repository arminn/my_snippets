**Logcat via ethernet(ip from ics-dhcp)**

```
adb connect `systemctl -n 1 status isc-dhcp-server | tail -n1 | awk ' {print $8} '`
```