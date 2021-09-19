Get meaningful weston logs:

```
-lscope1,scope2, --logger-scopes=scope1,scope2
Specify to which log scopes should subscribe to. When no scopes are supplied, the log "log" scope will be subscribed by default. Useful to control which streams to write data into the logger and can be helpful in diagnosing early start-up code.
```

The scopes could be:

```
Currently, Weston has the following debug scopes:

log - a debug scope for generic logging.
proto - debug scope that displays the protocol communication. It is similar to WAYLAND_DEBUG=server environmental variable but has the ability to distinguish multiple clients.
scene-graph - an one-shot debug scope which describes the current scene graph comprising of layers (containers of views), views (which represent a window), their surfaces, sub-surfaces, buffer type and format, both in DRM_FOURCC[1] type and human-friendly form.
drm-backend - Weston uses DRM (Direct Rendering Manager) as one of its backends and this debug scope display information related to that: details the transitions of a view as it takes before being assigned to a hardware plane or to a renderer, current assignments of views, the compositing mode Weston is using for rendering the scene-graph, describes the current hardware plane properties like CRTC_ID, FB_ID, FORMAT when doing a commit or a page-flip. It incorporates the scene-graph scope as well.
xwm-wm-x11 - a scope for the X11 window manager in Weston for supporting Xwayland, printing some X11 protocol actions.
```

See more at:

```
https://www.collabora.com/news-and-blog/blog/2019/04/24/weston-debugging-and-tracing-on-the-fly/
``