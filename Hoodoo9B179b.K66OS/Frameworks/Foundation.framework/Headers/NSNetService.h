/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSNetService : NSObject {
@private
	id _netService;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _reserved;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x310cfd5d; S=0x310cfd6d; converted property
+ (id)dataFromTXTRecordDictionary:(id)txtrecordDictionary;	// 0x310d0f91
+ (id)dictionaryFromTXTRecordData:(id)txtrecordData;	// 0x310d0ef5
- (id)initWithCFNetService:(CFNetServiceRef)cfnetService;	// 0x310cfa1d
- (id)initWithDomain:(id)domain type:(id)type name:(id)name;	// 0x310cfd39
- (id)initWithDomain:(id)domain type:(id)type name:(id)name port:(int)port;	// 0x310cfbc9
- (id)TXTRecordData;	// 0x310d0e91
- (void)_dispatchCallBackWithError:(XXStruct_K5nmsA)error;	// 0x310d0435
- (CFNetServiceRef)_internalNetService;	// 0x310d099d
- (id)_monitors;	// 0x310d0d31
- (void)_scheduleInDefaultRunLoopForMode:(id)mode;	// 0x310cfd7d
- (id)addresses;	// 0x310d00ad
- (void)dealloc;	// 0x310d077d
// converted property getter: - (id)delegate;	// 0x310cfd5d
- (id)description;	// 0x310d09ad
- (id)domain;	// 0x310cffed
- (void)finalize;	// 0x310d0899
- (BOOL)getInputStream:(id *)stream outputStream:(id *)stream2;	// 0x310d0abd
- (unsigned)hash;	// 0x310d0a39
- (id)hostName;	// 0x310d007d
- (BOOL)isEqual:(id)equal;	// 0x310d0a4d
- (id)name;	// 0x310d004d
- (int)port;	// 0x310d0119
- (void)publish;	// 0x310d0375
- (void)publishWithOptions:(unsigned)options;	// 0x310d013d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x310cff19
- (void)resolve;	// 0x310d0d19
- (void)resolveWithTimeout:(double)timeout;	// 0x310d0b81
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x310cfe45
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x310cfd6d
- (BOOL)setTXTRecordData:(id)data;	// 0x310d0e71
- (void)startMonitoring;	// 0x310d0d41
- (void)stop;	// 0x310d03c5
- (void)stopMonitoring;	// 0x310d0dd9
- (id)type;	// 0x310d001d
@end

