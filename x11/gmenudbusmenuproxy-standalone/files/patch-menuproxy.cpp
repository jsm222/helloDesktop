--- menuproxy.cpp.orig	2021-10-08 17:22:21 UTC
+++ menuproxy.cpp
@@ -33,7 +33,7 @@
 #include <QTimer>
 
 #include <KConfigGroup>
-#include <KDirWatch>
+/*#include <KDirWatch>*/
 #include <KSharedConfig>
 #include <KWindowSystem>
 
@@ -65,7 +65,7 @@ MenuProxy::MenuProxy()
     : QObject()
     , m_xConnection(QX11Info::connection())
     , m_serviceWatcher(new QDBusServiceWatcher(this))
-    , m_gtk2RcWatch(new KDirWatch(this))
+    //, m_gtk2RcWatch(new KDirWatch(this))
     , m_writeGtk2SettingsTimer(new QTimer(this))
 {
     m_serviceWatcher->setConnection(QDBusConnection::sessionBus());
@@ -105,9 +105,9 @@ MenuProxy::MenuProxy()
         }
     };
 
-    connect(m_gtk2RcWatch, &KDirWatch::created, this, startGtk2SettingsTimer);
-    connect(m_gtk2RcWatch, &KDirWatch::dirty, this, startGtk2SettingsTimer);
-    m_gtk2RcWatch->addFile(gtkRc2Path());
+    //connect(m_gtk2RcWatch, &KDirWatch::created, this, startGtk2SettingsTimer);
+    //connect(m_gtk2RcWatch, &KDirWatch::dirty, this, startGtk2SettingsTimer);
+   // m_gtk2RcWatch->addFile(gtkRc2Path());
 }
 
 MenuProxy::~MenuProxy()
@@ -220,14 +220,14 @@ void MenuProxy::writeGtk2Settings()
 
     qCDebug(DBUSMENUPROXY) << "  gtk-modules:" << gtkModules;
 
-    m_gtk2RcWatch->stopScan();
+    //m_gtk2RcWatch->stopScan();
 
     // now write the new contents of the file
     rcFile.resize(0);
     rcFile.write(content);
     rcFile.close();
 
-    m_gtk2RcWatch->startScan();
+    //m_gtk2RcWatch->startScan();
 }
 
 void MenuProxy::writeGtk3Settings()
