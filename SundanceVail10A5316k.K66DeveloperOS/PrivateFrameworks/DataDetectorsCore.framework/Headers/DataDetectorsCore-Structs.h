/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

typedef struct __DDExpressionPosition {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
} DDExpressionPosition;

typedef struct __DDScanner *DDScannerRef;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __CFRuntimeBase {
	unsigned _field1;
	unsigned char _field2[4];
} CFRuntimeBase;

typedef struct __DDQueryOffset {
	int _field1;
	int _field2;
} DDQueryOffset;

typedef struct __DDQueryRange {
	DDQueryOffset _field1;
	DDQueryOffset _field2;
} DDQueryRange;

typedef struct __CFArray *CFArrayRef;

typedef struct __CFString *CFStringRef;

typedef struct __DDResult {
	CFRuntimeBase _field1;
	DDQueryRange _field2;
	DDQueryOffset _field3;
	int _field4;
	CFArrayRef _field5;
	CFStringRef _field6;
	CFStringRef _field7;
	void *_field8;
	void *_field9;
} DDResult;

typedef struct _NSZone NSZone;


