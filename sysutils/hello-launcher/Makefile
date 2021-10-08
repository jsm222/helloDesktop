PORTNAME=	hellodesktop-launcher
PORTVERSION=	0.10
CATEGORIES=	sysutils

MAINTAINER=     jsm@FreeBSD.org
COMMENT=        Command line tool to launch applications

LICENSE=	GPLv2

LIB_DEPENDS=	libmenu-cache.so:x11/menu-cache \
		libfm.so:x11/libfm \
		libexif.so:graphics/libexif

USES=		cmake compiler:c++14-lang gettext-runtime localbase:ldflags pkgconfig kde:5 qt:5 \
		xorg

USE_GITHUB=     yes
GH_ACCOUNT=     helloSystem
GH_PROJECT=     launch
GH_TAGNAME=	43567d6

USE_QT=		buildtools_build qmake_build core dbus gui linguisttools \
		widgets x11extras
USE_XORG=	xcb

.include <bsd.port.mk>
