--- widget/nsWidgetsCID.h.orig	2021-11-02 00:08:25 UTC
+++ widget/nsWidgetsCID.h
@@ -66,6 +66,14 @@
 // Menus
 //-----------------------------------------------------------
 
+// {0B3FE5AA-BC72-4303-85AE-76365DF1251D}
+#define NS_NATIVEMENUSERVICE_CID                     \
+  {                                                  \
+    0x0B3FE5AA, 0xBC72, 0x4303, {                    \
+      0x85, 0xAE, 0x76, 0x36, 0x5D, 0xF1, 0x25, 0x1D \
+    }                                                \
+  }
+
 // {F6CD4F21-53AF-11d2-8DC4-00609703C14E}
 #define NS_POPUPMENU_CID                           \
   {                                                \
