/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIColor;

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
	UIColor *_statusBarTintColor;	// 84 = 0x54
	BOOL _actsAsTintView;	// 88 = 0x58
}
@property(assign, nonatomic, setter=_setActsAsTintView:) BOOL _actsAsTintView;	// G=0x3494512d; S=0x34945095; @synthesize
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x3494511d; S=0x34944ff9; @synthesize
+ (Class)layerClass;	// 0x34944d39
+ (id)viewWithRemoteContextID:(unsigned)remoteContextID;	// 0x34944d55
// declared property getter: - (BOOL)_actsAsTintView;	// 0x3494512d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x34945029
// declared property setter: - (void)_setActsAsTintView:(BOOL)view;	// 0x34945095
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x34944ff9
- (void)_setStatusBarTintColor:(id)color duration:(double)duration;	// 0x34944f3d
// declared property getter: - (id)_statusBarTintColor;	// 0x3494511d
- (void)applyTransformUndoingRemoteRootLayerTransform:(CGAffineTransform)transform frame:(CGRect)frame;	// 0x34944e35
- (void)dealloc;	// 0x34944de9
@end
