/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "Foundation-Structs.h"

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x31ae94b1
+ (id)allocWithZone:(NSZone *)zone;	// 0x31ae9491
+ (void)forwardInvocation:(id)invocation;	// 0x31ae94c5
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x31ae96d9
- (BOOL)_isDeallocating;	// 0x31ae9849
- (BOOL)_tryRetain;	// 0x31ae9845
- (id)autorelease;	// 0x31ae984d
- (id)copy;	// 0x31ae977d
- (id)copyWithZone:(NSZone *)zone;	// 0x31ae9739
- (void)dealloc;	// 0x31ae9885
- (void)forwardInvocation:(id)invocation;	// 0x31ae9511
- (BOOL)isProxy;	// 0x31ae98b1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31ae9689
- (void)reallyDealloc;	// 0x31ae9791
- (void)release;	// 0x31ae9819
- (id)retain;	// 0x31ae9805
- (unsigned)retainCount;	// 0x31ae9875
@end

