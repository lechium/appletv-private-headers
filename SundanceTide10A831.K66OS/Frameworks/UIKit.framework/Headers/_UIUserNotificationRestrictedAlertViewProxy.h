/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "UIAlertViewDelegate.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x3201e615; S=0x3201e625; converted property
+ (id)restrictedProxyForAlertView:(id)alertView;	// 0x3201e5e9
// converted property getter: - (id)delegate;	// 0x3201e615
- (void)forwardInvocation:(id)invocation;	// 0x3201e75d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3201e681
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3201e711
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3201e625
@end
