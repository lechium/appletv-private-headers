/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMachPort : NSPort {
@private
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	unsigned _machPort;	// 12 = 0xc
	unsigned _reserved;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x31034885; S=0x310348f1; converted property
@property(readonly, assign) unsigned machPort;	// G=0x3104cd01; converted property
+ (void)_fixNSMachPortLeak;	// 0x31097e91
+ (id)port;	// 0x31097d21
+ (id)portWithMachPort:(unsigned)machPort;	// 0x31097d5d
+ (id)portWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x31097d9d
+ (void)resetAllPorts;	// 0x31097d1d
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x31098001
- (id)init;	// 0x310986e9
- (id)initWithMachPort:(unsigned)machPort;	// 0x3103470d
- (id)initWithMachPort:(unsigned)machPort options:(unsigned)options;	// 0x31034721
- (unsigned long)_cfTypeID;	// 0x31097de1
- (BOOL)_isDeallocating;	// 0x31097e95
- (BOOL)_tryRetain;	// 0x31097e99
- (void)dealloc;	// 0x31098761
// converted property getter: - (id)delegate;	// 0x31034885
- (void)finalize;	// 0x3109878d
- (unsigned)hash;	// 0x31097e3d
- (void)invalidate;	// 0x31049091
- (BOOL)isEqual:(id)equal;	// 0x31097de5
- (BOOL)isKindOfClass:(Class)aClass;	// 0x31097ef1
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x31097f79
- (BOOL)isValid;	// 0x31034a21
// converted property getter: - (unsigned)machPort;	// 0x3104cd01
- (oneway void)release;	// 0x31036139
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x310985f9
- (id)retain;	// 0x31049241
- (unsigned)retainCount;	// 0x31097e9d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31034989
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31098531
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31098591
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x310984d1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x310348f1
@end

