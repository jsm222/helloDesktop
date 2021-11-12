--- widget/gtk/nsClipboardWayland.h.orig	2021-11-02 00:08:42 UTC
+++ widget/gtk/nsClipboardWayland.h
@@ -37,6 +37,8 @@ class DataOffer {
   nsTArray<GdkAtom> mTargetMIMETypes;
 };
 
+class nsWaylandDragContext;
+
 class WaylandDataOffer : public DataOffer {
  public:
   explicit WaylandDataOffer(wl_data_offer* aWaylandDataOffer);
