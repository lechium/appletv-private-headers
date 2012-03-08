/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class HighlightLayer, WebNodeHighlightView, WAKView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlight : NSObject {
@private
	WAKView *_targetView;	// 4 = 0x4
	HighlightLayer *_highlightLayer;	// 8 = 0x8
	WebNodeHighlightView *_highlightView;	// 12 = 0xc
	InspectorController *_inspectorController;	// 16 = 0x10
	id _delegate;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x303025bd; S=0x303025dd; converted property
@property(readonly, retain) WebNodeHighlightView *highlightView;	// G=0x303025cd; converted property
@property(readonly, assign) InspectorController *inspectorController;	// G=0x303025fd; converted property
@property(readonly, retain) WAKView *targetView;	// G=0x303025ed; converted property
- (id)initWithTargetView:(id)targetView inspectorController:(InspectorController *)controller;	// 0x30302915
- (void)attach;	// 0x3030286d
- (void)dealloc;	// 0x303026d5
// converted property getter: - (id)delegate;	// 0x303025bd
- (void)detach;	// 0x30302799
// converted property getter: - (id)highlightView;	// 0x303025cd
// converted property getter: - (InspectorController *)inspectorController;	// 0x303025fd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x303025dd
- (void)setNeedsDisplay;	// 0x30302701
// converted property getter: - (id)targetView;	// 0x303025ed
@end

