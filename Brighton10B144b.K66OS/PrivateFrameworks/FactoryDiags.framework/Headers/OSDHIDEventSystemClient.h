/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;

@interface OSDHIDEventSystemClient : NSObject {
	IOHIDEventSystemClientRef _hidClient;	// 4 = 0x4
	/*function-pointer*/ void *_callback;	// 8 = 0x8
	SEL _callbackSel;	// 12 = 0xc
	void *_cbTarget;	// 16 = 0x10
	void *_cbContext;	// 20 = 0x14
	NSMutableArray *_matchingServices;	// 24 = 0x18
	int _eventState;	// 28 = 0x1c
	BOOL __unitTest_timedOut;	// 32 = 0x20
}
@property(readonly, assign) IOHIDEventSystemClientRef ioHIDClient;	// G=0x33ef8459; @synthesize=_hidClient
@property(readonly, assign) NSArray *matchedServices;	// G=0x33ef7ad1; @dynamic
+ (id)hidClient;	// 0x33ef7be9
- (id)init;	// 0x33ef7afd
- (id)__unitTest;	// 0x33ef84e1
- (void)__unitTestCallback:(id)callback;	// 0x33ef846d
- (void)__unitTestTimeout;	// 0x33ef84b1
- (void)_callbackBounceWithEvent:(id)event;	// 0x33ef7a41
- (void)_resetMatchingServices;	// 0x33ef7a9d
- (BOOL)_setProperty:(CFStringRef)property forService:(IOHIDServiceClientRef)service withValue:(void *)value;	// 0x33ef7a79
- (void)addAllAppleServicesForMatching;	// 0x33ef7dc5
- (void)addAppleServiceForMatching:(unsigned long)matching;	// 0x33ef7dad
- (void)addUsagePage:(unsigned long)page andServiceForMatching:(unsigned long)matching;	// 0x33ef7cd5
- (void)dealloc;	// 0x33ef7c21
- (IOHIDServiceClientRef)getAppleServiceForUsage:(unsigned long)usage;	// 0x33ef7eb1
- (id)getProperty:(id)property;	// 0x33ef8041
- (id)getProperty:(id)property forService:(IOHIDServiceClientRef)service;	// 0x33ef8015
- (IOHIDServiceClientRef)getServiceForPrimaryUsage:(unsigned long)primaryUsage andUsage:(unsigned long)usage;	// 0x33ef7ec9
// declared property getter: - (IOHIDEventSystemClientRef)ioHIDClient;	// 0x33ef8459
// declared property getter: - (id)matchedServices;	// 0x33ef7ad1
- (void)removeAllMatchedServices;	// 0x33ef7c99
- (BOOL)service:(IOHIDServiceClientRef)service matchesAppleUsage:(unsigned long)usage;	// 0x33ef7df9
- (BOOL)service:(IOHIDServiceClientRef)service matchesPrimaryUsage:(unsigned long)usage andUsage:(unsigned long)usage3;	// 0x33ef7e19
- (BOOL)setProperty:(id)property withValue:(id)value;	// 0x33ef8075
- (BOOL)setProperty:(id)property withValue:(id)value forService:(IOHIDServiceClientRef)service;	// 0x33ef80a1
- (BOOL)setReportInterval:(long)interval forAppleUsagePage:(unsigned long)appleUsagePage;	// 0x33ef80c1
- (BOOL)setReportInterval:(long)interval forService:(IOHIDServiceClientRef)service;	// 0x33ef80f5
- (id)startEventsWithCallback:(/*function-pointer*/ void *)callback target:(void *)target andContext:(void *)context;	// 0x33ef8251
- (id)startEventsWithCallback:(SEL)callback withTarget:(id)target;	// 0x33ef8141
- (void)stopEvents;	// 0x33ef83f9
@end
