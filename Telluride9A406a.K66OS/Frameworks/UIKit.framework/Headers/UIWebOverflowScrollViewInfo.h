/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
	UIView *_oldSuperview;	// 8 = 0x8
}
@property(retain, nonatomic) UIView *oldSuperview;	// G=0x358a67e9; S=0x358a67f9; @synthesize=_oldSuperview
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView;	// G=0x358a67b5; S=0x358a67c5; @synthesize=_scrollView
- (id)initWithScrollView:(id)scrollView;	// 0x358a66d9
- (void)dealloc;	// 0x358a6755
// declared property getter: - (id)oldSuperview;	// 0x358a67e9
// declared property getter: - (id)scrollView;	// 0x358a67b5
// declared property setter: - (void)setOldSuperview:(id)superview;	// 0x358a67f9
// declared property setter: - (void)setScrollView:(id)view;	// 0x358a67c5
@end

