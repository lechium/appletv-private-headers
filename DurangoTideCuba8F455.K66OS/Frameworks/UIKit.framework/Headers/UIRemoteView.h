/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIRemoteWindow, NSString;

@interface UIRemoteView : UIView {
	NSString *_remoteViewIdentifier;	// 44 = 0x2c
	UIRemoteWindow *_remoteWindow;	// 48 = 0x30
	BOOL _captureAllWindows;	// 52 = 0x34
	BOOL _remoteViewOpaque;	// 53 = 0x35
}
@property(readonly, retain) NSString *remoteViewIdentifier;	// G=0x302a83c9; converted property
- (id)initWithFrame:(CGRect)frame captureAllWindows:(BOOL)windows;	// 0x302a83d9
- (void)dealloc;	// 0x302a8435
- (void)registerWithIdentifier:(id)identifier;	// 0x302a84d5
// converted property getter: - (id)remoteViewIdentifier;	// 0x302a83c9
- (void)setRemoteViewOpaque:(BOOL)opaque;	// 0x302a83b9
- (void)unregister;	// 0x302a87b1
@end

