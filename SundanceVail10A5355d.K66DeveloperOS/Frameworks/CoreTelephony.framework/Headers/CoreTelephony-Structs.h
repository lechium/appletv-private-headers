/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

typedef struct _NSZone NSZone;

typedef struct {
	int _field1;
	int _field2;
} XXStruct_K5nmsA;

typedef struct __CTCall *CTCallRef;

typedef struct __CFRuntimeBase {
	unsigned _field1;
	unsigned char _field2[4];
} CFRuntimeBase;

typedef struct dispatch_queue_s dispatch_queue_s;

typedef struct CTServerState *CTServerStateRef;

typedef struct _xpc_connection_s xpc_connection_s;

typedef struct __CTServerConnection {
	CFRuntimeBase _field1;
	dispatch_queue_s *_field2;
	CTServerStateRef _field3;
	unsigned char _field4;
	unsigned _field5;
	xpc_connection_s *_field6;
} CTServerConnection;


