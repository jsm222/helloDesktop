--- xpcom/ds/StaticAtoms.py.orig	2021-11-03 16:25:15 UTC
+++ xpcom/ds/StaticAtoms.py
@@ -7,6 +7,7 @@
 from Atom import Atom, InheritingAnonBoxAtom, NonInheritingAnonBoxAtom
 from Atom import PseudoElementAtom
 from HTMLAtoms import HTML_PARSER_ATOMS
+from NativeMenuAtoms import NATIVE_MENU_ATOMS
 import sys
 
 # Static atom definitions, used to generate nsGkAtomList.h.
@@ -2514,7 +2515,7 @@ STATIC_ATOMS = [
     InheritingAnonBoxAtom("AnonBox_mozSVGForeignContent", ":-moz-svg-foreign-content"),
     InheritingAnonBoxAtom("AnonBox_mozSVGText", ":-moz-svg-text"),
     # END ATOMS
-] + HTML_PARSER_ATOMS
+] + HTML_PARSER_ATOMS + NATIVE_MENU_ATOMS
 # fmt: on
 
 
