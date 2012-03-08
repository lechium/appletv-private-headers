/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 48 = 0x30
	UILabel *_progressMessage;	// 52 = 0x34
	UIImageView *_doneView;	// 56 = 0x38
	UIWindow *_parentWindow;	// 60 = 0x3c
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 64 = 0x40
}
- (id)initWithFrame:(CGRect)frame;	// 0x35887c7d
- (id)initWithWindow:(id)window;	// 0x35888751
- (id)_progressIndicator;	// 0x35887c6d
- (void)dealloc;	// 0x3588866d
- (void)done;	// 0x358885a1
- (void)drawRect:(CGRect)rect;	// 0x3588800d
- (void)hide;	// 0x35888551
- (void)layoutSubviews;	// 0x358880c1
- (void)setFontSize:(int)size;	// 0x35887fad
- (void)setShowsText:(BOOL)text;	// 0x35887f51
- (void)setText:(id)text;	// 0x35887ef5
- (void)show:(BOOL)show;	// 0x35888791
- (void)showInView:(id)view;	// 0x35888501
@end

