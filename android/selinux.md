Set permissive from cmadline:

`androidboot.selinux=permissive`

Check audit log:

    POLICY=/tmp/policy.tmp
    adb connect
    adb pull /sys/fs/selinux/policy ${POLICY}
    adb shell su root dmesg | grep 'avc: ' | audit2allow -p ${POLICY}


