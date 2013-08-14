prefix		= /usr/local
exec_prefix	= ${prefix}
CC		= gcc
CFLAGS		=  -Wall
LDFLAGS		= /usr/lib/libnet.a /usr/lib/libpcap.a
BINDIR		= ${exec_prefix}/bin
MANDIR		= ${prefix}/man
INSTALL		= /usr/bin/install -c
MKINSTALLDIRS	= ./mkinstalldirs

LIBS		= 

OBJS		= dhcptool.o
SRCS		= dhcptool.c

all: dhcptool

dhcptool: ${OBJS}
	${CC} -o dhcptool ${OBJS} ${LDFLAGS} ${LIBS}

install-bin: dhcptool
	${MKINSTALLDIRS} ${BINDIR}
	${INSTALL} dhcptool ${BINDIR}

install-man:
	${MKINSTALLDIRS} ${MANDIR}/man1
	${INSTALL} dhcptool.1 ${MANDIR}/man1

install: install-bin install-man

uninstall:
	rm -f ${BINDIR}/dhcptool
	rm -f ${MANDIR}/man1/dhcptool.1*

clean:
	rm -f dhcptool *.o *.core


# DO NOT DELETE
