/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <WAKView.h> // Unknown library

@class UIWebDocumentView, CALayer, UIView;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView {
@private
	UIWebDocumentView *_webView;	// 68 = 0x44
	CALayer *_hostingLayer;	// 72 = 0x48
	UIView *_uiView;	// 76 = 0x4c
	CFRunLoopObserverRef _mainRunLoopDrawObserver;	// 80 = 0x50
	BOOL _isFullScreen;	// 84 = 0x54
	BOOL _parentedInLayer;	// 85 = 0x55
	BOOL _isQuickTimePlugIn;	// 86 = 0x56
	BOOL _isMapViewPlugIn;	// 87 = 0x57
}
@property(assign, nonatomic) BOOL isMapViewPlugIn;	// G=0x307317f1; S=0x30698b51; @synthesize=_isMapViewPlugIn
@property(assign, nonatomic) BOOL isQuickTimePlugIn;	// G=0x30731801; S=0x30698b41; @synthesize=_isQuickTimePlugIn
@property(assign, nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;	// G=0x30698d81; S=0x3069973d; @synthesize=_parentedInLayer
- (id)initWithWebView:(id)webView plugInView:(id)view;	// 0x306989f5
- (void)_attachPluginLayerOnMainThread;	// 0x30698c59
- (void)_reshapeOnMainThread;	// 0x30699291
- (void)_viewDidMoveToWindowOnMainThread;	// 0x30699501
- (void)attachPluginLayer;	// 0x30698be1
- (void)dealloc;	// 0x3069995d
- (void)drawRect:(CGRect)rect;	// 0x3069975d
- (void)forwardInvocation:(id)invocation;	// 0x30731965
- (void)invalidateGState;	// 0x30699201
// declared property getter: - (BOOL)isMapViewPlugIn;	// 0x307317f1
- (BOOL)isParented;	// 0x30699449
// declared property getter: - (BOOL)isParentedInLayer;	// 0x30698d81
// declared property getter: - (BOOL)isQuickTimePlugIn;	// 0x30731801
- (void)layout;	// 0x307318bd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30698c11
- (void)mouseDown:(id)down;	// 0x30731aad
- (void)mouseUp:(id)up;	// 0x30731a75
- (id)objectForWebScript;	// 0x30731879
- (id)plugInView;	// 0x30698e9d
- (id)pluginLayer;	// 0x30731811
- (void)reshape;	// 0x3069923d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x30698b61
- (void)setFrame:(CGRect)frame;	// 0x3069947d
- (void)setFrameSize:(CGSize)size;	// 0x307319ed
// declared property setter: - (void)setIsMapViewPlugIn:(BOOL)anIn;	// 0x30698b51
// declared property setter: - (void)setIsQuickTimePlugIn:(BOOL)anIn;	// 0x30698b41
// declared property setter: - (void)setParentedInLayer:(BOOL)layer;	// 0x3069973d
- (void)setWebView:(id)view;	// 0x30731839
- (void)viewDidMoveToWindow;	// 0x30698d91
- (void)webPlugInDestroy;	// 0x3069991d
- (void)webPlugInInitialize;	// 0x30698ead
- (void)webPlugInStart;	// 0x30698eed
- (void)webPlugInStop;	// 0x306998dd
- (BOOL)willProvidePluginLayer;	// 0x30698bb9
@end

