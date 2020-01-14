**Regarding some Android images**

*Unwrap the ramdisk.img:*

`cp ramdisk.img ramdisk.gz`
`gunzip -c ramdisk.gz | cpio -i`



*Unwrap the (boot|recovry).img:*

`wget https://storage.googleapis.com/google-code-archive-downloads/v2/code.google.com/android-serialport-api/android_bootimg_tools.tar.gz`

`./unpackbootimg -i boot.img -o <out path>`

`gunzip -c boot.img-ramdisk.gz | cpio -i`

as alternative:
`abootimg -x (boot|recovery).img`