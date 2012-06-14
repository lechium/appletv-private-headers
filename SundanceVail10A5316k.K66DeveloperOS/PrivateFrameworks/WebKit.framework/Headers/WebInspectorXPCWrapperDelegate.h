/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol WebInspectorXPCWrapperDelegate <NSObject>
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;
- (void)xpcConnectionFailed:(id)failed;
@optional
- (void)xpcConnectionUnhandledMessage:(id)message;
@end

