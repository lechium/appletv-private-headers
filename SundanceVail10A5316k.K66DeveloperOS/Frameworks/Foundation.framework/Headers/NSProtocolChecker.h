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
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a029b5
+ (id)protocolCheckerWithTarget:(id)target protocol:(id)protocol;	// 0x31aa1519
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x31aa155d
- (const char *)_localClassNameForClass;	// 0x31aa1439
- (BOOL)conformsToProtocol:(id)protocol;	// 0x31aa1375
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x31aa12a1
- (void)forwardInvocation:(id)invocation;	// 0x31aa1461
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x31aa1395
- (objc_method_description *)methodDescriptionForSelector:(SEL)selector;	// 0x31a09ab5
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31a09a75
- (id)protocol;	// 0x31aa1259
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31aa12e9
- (id)target;	// 0x31aa127d
@end
