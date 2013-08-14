#ifndef _DHCP_OPTIONS_H_
#define _DHCP_OPTIONS_H_

#define DHCP_OPTIONTYPE_NONE		(1)
#define DHCP_OPTIONTYPE_INT8		(2)
#define DHCP_OPTIONTYPE_INT16		(3)
#define DHCP_OPTIONTYPE_INT32		(4)
#define DHCP_OPTIONTYPE_UINT8		(5)
#define DHCP_OPTIONTYPE_UINT16		(6)
#define DHCP_OPTIONTYPE_UINT32		(7)
#define DHCP_OPTIONTYPE_IPV4		(8)
#define DHCP_OPTIONTYPE_IPV4PAIR	(9)
#define DHCP_OPTIONTYPE_STRING		(10)
#define DHCP_OPTIONTYPE_BOOL8		(11)
#define DHCP_OPTIONTYPE_OPAQUE		(12)
#define DHCP_OPTIONTYPE_UNUSED		(13)

const char * _dhcp_optiondesc[] = { \
  "Pad",\
  "Subnet Mask",\
  "Time Offset",\
  "Router",\
  "Time Server",\
  "Name Server",\
  "Domain Server",\
  "Log Server",\
  "Quotes Server",\
  "LPR Server",\
  "Impress Server",\
  "RLP Server",\
  "Hostname",\
  "Boot File Size",\
  "Merit Dump File",\
  "Domain Name",\
  "Swap Server",\
  "Root Path",\
  "Extension File",\
  "Forwarding On/Off",\
  "SrcRte On/Off",\
  "Policy Filter",\
  "Max DG Assembly",\
  "Default IP TTL",\
  "MTU Timeout",\
  "MTU Plateau",\
  "MTU Interface",\
  "MTU Subnet",\
  "Broadcast Address",\
  "Mask Discovery",\
  "Mask Supplier",\
  "Router Discovery",\
  "Router Request",\
  "Static Route",\
  "Trailers",\
  "ARP Timeout",\
  "Ethernet",\
  "Default TCP TTL",\
  "Keepalive Time",\
  "Keepalive Data",\
  "NIS Domain",\
  "NIS Servers",\
  "NTP Servers",\
  "Vendor Specific",\
  "NETBIOS Name Srv",\
  "NETBIOS Dist Srv",\
  "NETBIOS Node Type",\
  "NETBIOS Scope",\
  "X Window Font",\
  "X Window Manager",\
  "Address Request",\
  "Address Time",\
  "Overload",\
  "DHCP Msg Type",\
  "DHCP Server Id",\
  "Parameter List",\
  "DHCP Message",\
  "DHCP Max Msg Size",\
  "Renewal Time",\
  "Rebinding Time",\
  "Class Id",\
  "Client Id",\
  "Netware/IP Domain",\
  "Netware/IP Option",\
  "NIS-Domain-Name",\
  "NIS-Server-Addr",\
  "Server-Name",\
  "Bootfile-Name",\
  "Home-Agent-Addrs",\
  "SMTP-Server",\
  "POP3-Server",\
  "NNTP-Server",\
  "WWW-Server",\
  "Finger-Server",\
  "IRC-Server",\
  "StreetTalk-Server",\
  "STDA-Server",\
  "User-Class",\
  "Directory Agent",\
  "Service Scope",\
  "Rapid Commit",\
  "Client FQDN",\
  "Relay Agent Information",\
  "iSNS",\
  "[REMOVED/Unassigned]",\
  "NDS Servers",\
  "NDS Tree Name",\
  "NDS Context",\
  "BCMCS Controller Domain Name List",\
  "BCMCS Controller IPv4 address option",\
  "Authentication",\
  "client-last-transaction-time",\
  "associated-ip",\
  "Client System",\
  "Client NDI",\
  "LDAP",\
  "[REMOVED/Unassigned]",\
  "UUID/GUID",\
  "User-Auth",\
  "GEOCONF_CIVIC",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "Unassigned",\
  "[REMOVED/Unassigned]",\
  "Unassigned",\
  "Netinfo Address",\
  "Netinfo Tag",\
  "URL",\
  "[REMOVED/Unassigned]",\
  "Auto-Config",\
  "Name Service Search",\
  "Subnet Selection",\
  "Domain Search",\
  "SIP Servers DHCP",\
  "Classless Static Route",\
  "CCC",\
  "GeoConf",\
  "V-I Vendor Class",\
  "V-I Vendor-Specific Information",\
  "[REMOVED/Unassigned]",\
  "[REMOVED/Unassigned]",\
  "PXE | Etherboot | DOCSIS | TFTP",\
  "PXE | Kernel options | Call server IP",\
  "PXE | Ethernet interface | Discrimination string",\
  "PXE | Remote statistics server IP",\
  "PXE | 802.1P VLAN ID",\
  "PXE | 802.1Q L2 Priority",\
  "PXE | Diffserv Code Point",\
  "PXE | HTTP Proxy for phone-apps",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "TFTP server | Etherboot | GRUB config path",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Etherboot",\
  "IP Telephone",\
  "Etherboot | PacketCable and CableHome",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "pxelinux.magic",\
  "pxelinux.configfile",\
  "pxelinux.pathprefix",\
  "pxelinux.reboottime",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Unassigned",\
  "Subnet Allocation",\
  "Virtual Subnet Selection",\
  "Unassigned",\
  "Unassigned",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "Private Use",\
  "End"\
};

const char * _dhcpd_conf_option[] = { 
"",
"subnet-mask",
"time-offset",
"routers",
"time-servers",
"ien116-name-servers",
"domain-name-servers",
"log-servers",
"cookie-servers",
"lpr-servers",
"impress-servers",
"resource-location-servers",
"host-name",
"boot-size",
"merit-dump",
"domain-name",
"swap-server",
"root-path",
"extensions-path",
"ip-forwarding",
"non-local-source-routing",
"policy-filter",
"max-dgram-reassembly",
"default-ip-ttl",
"path-mtu-aging-timeout",
"path-mtu-plateau-table",
"interface-mtu",
"all-subnets-local",
"broadcast-address",
"perform-mask-discovery",
"mask-supplier",
"router-discovery",
"router-solicitation-address",
"static-routes",
"trailer-encapsulation",
"arp-cache-timeout",
"ieee802-3-encapsulation",
"default-tcp-ttl",
"tcp-keepalive-interval",
"tcp-keepalive-garbage",
"nis-domain",
"nis-servers",
"ntp-servers",
"vendor-encapsulated-options",
"netbios-name-servers",
"netbios-dd-server",
"netbios-node-type",
"netbios-scope",
"font-servers",
"x-display-manager",
"dhcp-requested-address",
"dhcp-lease-time",
"dhcp-option-overload",
"dhcp-message-type",
"dhcp-server-identifier",
"dhcp-parameter-request-list",
"dhcp-message",
"dhcp-max-message-size",
"dhcp-renewal-time",
"dhcp-rebinding-time",
"vendor-class-identifier",
"dhcp-client-identifier",
"nwip-domain",
"nwip-suboptions",
"nisplus-domain",
"nisplus-servers",
"tftp-server-name",
"bootfile-name",
"mobile-ip-home-agent",
"smtp-server",
"pop-server",
"nntp-server",
"www-server",
"finger-server",
"irc-server",
"streettalk-server",
"streettalk-directory-assistance-server",
"user-class",
"slp-directory-agent",
"slp-service-scope",
"",
"fqdn",
"relay-agent-information",
"",
"",
"nds-servers",
"nds-tree-name",
"nds-context",
"",
"bcms-controller-address",
"",
"client-last-transaction-time",
"associated-ip",
"pxe-system-type",
"pxe-interface-id",
"",
"",
"pxe-client-id",
"uap-servers",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"netinfo-server-address",
"netinfo-server-tag",
"default-url",
"",
"",
"",
"subnet-selection",
"domain-search",
"",
"",
"",
"",
"vivco",
"vivso",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"tftp-server-address",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"pxelinux-magic",
"loader-configfile",
"loader-pathprefix",
"loader-reboottime",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"vss-info",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
""
};

const unsigned char _dhcp_option_valuetype[] = {\
  DHCP_OPTIONTYPE_NONE,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_INT32,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_UINT16,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_IPV4PAIR,\
  DHCP_OPTIONTYPE_UINT16,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_UINT16,\
  DHCP_OPTIONTYPE_UINT16,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4PAIR,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_BOOL8,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_UINT8,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_UINT16,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_UINT32,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_IPV4,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_STRING,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_UNUSED,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_OPAQUE,\
  DHCP_OPTIONTYPE_NONE\
};


#endif
