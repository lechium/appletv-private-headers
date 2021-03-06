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
+ (id)allocWithZone:(NSZone *)zone;	// 0x318c6889
+ (id)protocolCheckerWithTarget:(id)target protocol:(id)protocol;	// 0x31970689
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x319706cd
- (const char *)_localClassNameForClass;	// 0x319705a9
- (BOOL)conformsToProtocol:(id)protocol;	// 0x319704e5
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x31970411
- (void)forwardInvocation:(id)invocation;	// 0x319705d1
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x31970505
- (objc_method_description *)methodDescriptionForSelector:(SEL)selector;	// 0x318c6a25
- (id)methodSignatureForSelector:(SEL)selector;	// 0x318c69e5
- (id)protocol;	// 0x319703c9
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31970459
- (id)target;	// 0x319703ed
@end

