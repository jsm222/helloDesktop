--- menuproxy.h.orig	2021-10-08 17:22:30 UTC
+++ menuproxy.h
@@ -29,7 +29,7 @@
 class QDBusServiceWatcher;
 class QTimer;
 
-class KDirWatch;
+//class KDirWatch;
 
 class Window;
 
@@ -69,7 +69,7 @@ private Q_SLOTS: (private)
 
     QDBusServiceWatcher *m_serviceWatcher;
 
-    KDirWatch *m_gtk2RcWatch;
+    //KDirWatch *m_gtk2RcWatch;
     QTimer *m_writeGtk2SettingsTimer;
 
     bool m_enabled = false;
