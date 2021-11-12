From cea8e6a01bb03bbe565c9bf5dd4f439f30ca953f Mon Sep 17 00:00:00 2001
From: Jan Beich <jbeich@FreeBSD.org>
Date: Fri, 28 Feb 2020 16:49:38 +0000
Subject: Bug 1618914 - [Wayland] Fall back to ftruncate if posix_fallocate isn't supported by filesystem.

--- widget/gtk/WaylandBuffer.cpp.orig	2021-11-12 13:22:46 UTC
+++ widget/gtk/WaylandBuffer.cpp
@@ -259,7 +259,7 @@ void WaylandBufferSHM::DumpToFile(const char* aHint) {
 
 /* static */
 RefPtr<WaylandBufferDMABUF> WaylandBufferDMABUF::Create(
-    const LayoutDeviceIntSize& aSize, GLContext* aGL) {
+    const LayoutDeviceIntSize& aSize, gl::GLContext* aGL) {
   RefPtr<WaylandBufferDMABUF> buffer = new WaylandBufferDMABUF(aSize);
 
   const auto flags =
