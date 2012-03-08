/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
@property(assign) id delegate;	// G=0x35e68bf9; S=0x35e68bd5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e056c9
+ (id)port;	// 0x35e68afd
+ (id)portWithMachPort:(unsigned)machPort;	// 0x35e68b39
- (id)initWithCoder:(id)coder;	// 0x35e68ca9
- (id)initWithMachPort:(unsigned)machPort;	// 0x35e68b85
- (Class)classForCoder;	// 0x35e68c51
- (Class)classForPortCoder;	// 0x35e68c35
- (id)copyWithZone:(NSZone *)zone;	// 0x35e68c21
// converted property getter: - (id)delegate;	// 0x35e68bf9
- (void)encodeWithCoder:(id)coder;	// 0x35e68cd9
- (void)invalidate;	// 0x35e68b89
- (BOOL)isValid;	// 0x35e68bad
- (unsigned)machPort;	// 0x35e68bd1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x35e68d29
- (id)replacementObjectForCoder:(id)coder;	// 0x35e68c31
- (unsigned)reservedSpaceLength;	// 0x35e68c1d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x35e68d25
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x35e68cdd
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x35e68d01
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35e68bd5
@end

