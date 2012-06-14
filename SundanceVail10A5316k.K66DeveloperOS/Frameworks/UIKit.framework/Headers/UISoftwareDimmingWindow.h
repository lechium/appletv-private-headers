/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


__attribute__((visibility("hidden")))
@interface UISoftwareDimmingWindow : UIWindow {
@private
	float _overlayLevel;	// 188 = 0xbc
}
@property(assign, nonatomic) float overlayLevel;	// G=0x302c4afd; S=0x302c4a25; @synthesize=_overlayLevel
- (id)initWithFrame:(CGRect)frame;	// 0x302c4929
- (BOOL)_ignoresHitTest;	// 0x302c49bd
// declared property getter: - (float)overlayLevel;	// 0x302c4afd
// declared property setter: - (void)setOverlayLevel:(float)level;	// 0x302c4a25
- (void)updateOverlayColor;	// 0x302c49c1
@end

