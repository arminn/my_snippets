**Devicetree Compilation options using devicetree-tools:**

```
dtc -I dtb -O dts -o dom0.dts dom0.dtb
dtc -I dts -O dtb -o dom0.dtb dom0.dts
```