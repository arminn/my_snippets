**Enable DRM debug**

```
echo 8 > /proc/sys/kernel/printk
echo 7 > /sys/module/drm/parameters/debug
```
https://01.org/linuxgraphics/gfx-docs/drm/drm-kms-init.html

