/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSProxy.h"


@interface NSProtocolChecker : NSProxy {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3551a081
+ (id)protocolCheckerWithTarget:(id)target protocol:(id)protocol;	// 0x355c3e81
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x355c3ec5
- (const char *)_localClassNameForClass;	// 0x355c3da1
- (BOOL)conformsToProtocol:(id)protocol;	// 0x355c3cdd
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x355c3c09
- (void)forwardInvocation:(id)invocation;	// 0x355c3dc9
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x355c3cfd
- (objc_method_description *)methodDescriptionForSelector:(SEL)selector;	// 0x3551a21d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3551a1dd
- (id)protocol;	// 0x355c3bc1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x355c3c51
- (id)target;	// 0x355c3be5
@end

