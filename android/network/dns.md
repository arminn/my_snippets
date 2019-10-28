To get all information regarding DNS:

`dumpsys netd`

There will be networks like:
99 LOCAL
51 DUMMY dummy0
100 PHYSICAL eth0

For some of them DNS will be set, for some - no :

    99 LOCAL
        No DNS servers defined

    100 PHYSICAL eth0
        Required permission: NONE
        DNS servers: # IP (total, successes, errors, timeouts, internal errors, RTT avg, last sample)
          10.10.0.10 (64, 0, 0, 64, 0, -1ms, 6s)

You can use ndc to set-up DNS for specific network:

`ndc resolver setnetdns <netId> <domains> <dns1> <dns2>`

I.e. for eth0:

`ndc resolver setnetdns 100 _your_search_domain.com 10.10.0.4 10.10.0.3`

Please refer more details to
https://github.com/bparmentier/DNSSetter/wiki/ndc-resolver-commands


