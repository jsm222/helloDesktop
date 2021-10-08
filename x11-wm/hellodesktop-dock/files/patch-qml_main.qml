--- qml/main.qml.orig	2021-10-07 21:40:04 UTC
+++ qml/main.qml
@@ -60,7 +60,7 @@ Rectangle {
         iconName: "user-trash-empty"
 
         onClicked: {
-            process.start("launch", ["Filer", "trash:///"])
+            process.start("launch", ["filer-qt", "trash:///"])
         }
     }
 }
