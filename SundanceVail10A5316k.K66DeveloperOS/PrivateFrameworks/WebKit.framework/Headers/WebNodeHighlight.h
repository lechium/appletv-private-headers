/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class HighlightLayer, WAKView, WebNodeHighlightView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlight : NSObject {
@private
	WAKView *_targetView;	// 4 = 0x4
	HighlightLayer *_highlightLayer;	// 8 = 0x8
	WebNodeHighlightView *_highlightView;	// 12 = 0xc
	InspectorController *_inspectorController;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x350688e5; S=0x350689d5; converted property
@property(readonly, retain) WebNodeHighlightView *highlightView;	// G=0x350689c5; converted property
@property(readonly, assign) InspectorController *inspectorController;	// G=0x35068a41; converted property
@property(readonly, retain) WAKView *targetView;	// G=0x35068a31; converted property
- (id)initWithTargetView:(id)targetView inspectorController:(InspectorController *)controller;	// 0x350686d9
- (void)attach;	// 0x35068839
- (void)dealloc;	// 0x3506880d
// converted property getter: - (id)delegate;	// 0x350688e5
- (void)detach;	// 0x350688f5
// converted property getter: - (id)highlightView;	// 0x350689c5
// converted property getter: - (InspectorController *)inspectorController;	// 0x35068a41
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x350689d5
- (void)setNeedsDisplay;	// 0x350689e5
// converted property getter: - (id)targetView;	// 0x35068a31
@end

