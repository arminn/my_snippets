ADB over ethernet:

    setprop service.adb.tcp.port 5555
    stop adbd
    start adbd

or set in board config:

    PRODUCT_PROPERTY_OVERRIDES += service.adb.tcp.port=5555

