/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarItemView.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIStatusBarActivityItemView : UIStatusBarItemView {
@private
	UIActivityIndicatorView *_activityIndicator;	// 76 = 0x4c
	BOOL _slowActivity;	// 80 = 0x50
	BOOL _syncActivity;	// 81 = 0x51
}
- (int)_activityIndicatorStyle;	// 0x330052c1
- (void)dealloc;	// 0x3300a275
- (void)setVisible:(BOOL)visible;	// 0x33005395
- (float)shadowPaddingForStyle:(int)style;	// 0x33005471
- (float)updateContentsAndWidth;	// 0x33005065
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x33005009
@end

