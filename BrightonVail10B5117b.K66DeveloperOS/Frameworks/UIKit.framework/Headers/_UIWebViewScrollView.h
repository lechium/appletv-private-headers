/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebScrollView.h"

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView {
	_UIWebViewScrollViewDelegateForwarder *_forwarder;	// 396 = 0x18c
	BOOL _bouncesSetExplicitly;	// 400 = 0x190
	UIWebBrowserView *_browserView;	// 404 = 0x194
}
@property(assign) id delegate;	// G=0x32ef3795; S=0x32ef3731; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32ef356d
- (void)_setWebView:(id)view;	// 0x32ef37b5
- (void)_weaklySetBouncesHorizontally:(BOOL)horizontally;	// 0x32ef3635
- (void)dealloc;	// 0x32ef35e5
// converted property getter: - (id)delegate;	// 0x32ef3795
- (void)setBounces:(BOOL)bounces;	// 0x32ef3671
- (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x32ef36f1
- (void)setBouncesVertically:(BOOL)vertically;	// 0x32ef36b1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32ef3731
@end

