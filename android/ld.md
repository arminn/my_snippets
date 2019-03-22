**LD* Varaibles**

Some of LD* variables can be found here:
https://android.googlesource.com/platform/bionic/+/refs/heads/master/libc/bionic/libc_init_common.cpp#232


*LD_HELP*

Used to set linker debug verbosity

Use in android shell like :
`#LD_DEBUG=1 ls`

Example of putput:

03-22 17:27:56.859  2474  2474 W linker  : [ Android dynamic linker (64-bit) ]
03-22 17:27:56.859  2474  2474 W linker  : [ Linking "[vdso]" ]
03-22 17:27:56.859  2474  2474 W linker  : [ Linking "/system/bin/toybox" ]
03-22 17:27:56.861  2474  2474 W linker  : [ Linking "/system/lib64/liblog.so" ]
03-22 17:27:56.861  2474  2474 W linker  : [ Linking "/system/lib64/libselinux.so" ]
03-22 17:27:56.861  2474  2474 W linker  : [ Linking "/system/lib64/libcutils.so" ]
03-22 17:27:56.861  2474  2474 W linker  : [ Linking "/system/lib64/libcrypto.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libz.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc++.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libcrypto.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/liblog.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libpcre2.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libpackagelistparser.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc++.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/liblog.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc++.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.862  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libc++.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/liblog.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libc++.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libc.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libm.so" ]
03-22 17:27:56.863  2474  2474 W linker  : [ Linking "/system/lib64/libdl.so" ]
03-22 17:27:56.873  2474  2474 W linker  : [ Linking "/system/lib64/libnetd_client.so" ]
03-22 17:27:56.873  2474  2474 W linker  : [ Jumping to _start (0xb8664286e760)... ]

