--- dom/xul/XULPopupElement.cpp.orig	2021-11-02 00:06:45 UTC
+++ dom/xul/XULPopupElement.cpp
@@ -207,6 +207,10 @@ void XULPopupElement::GetState(nsString& aState) {
   // set this here in case there's no frame for the popup
   aState.AssignLiteral("closed");
 
+#ifdef MOZ_WIDGET_GTK
+  nsAutoString nativeState;
+#endif
+
   if (nsXULPopupManager* pm = nsXULPopupManager::GetInstance()) {
     switch (pm->GetPopupState(this)) {
       case ePopupShown:
@@ -229,6 +233,11 @@ void XULPopupElement::GetState(nsString& aState) {
         break;
     }
   }
+#ifdef MOZ_WIDGET_GTK
+  else if (GetAttr(kNameSpaceID_None, nsGkAtoms::_moz_nativemenupopupstate, nativeState)) {
+    aState = nativeState;
+  }
+#endif
 }
 
 nsINode* XULPopupElement::GetTriggerNode() const {
