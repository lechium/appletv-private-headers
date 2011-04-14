/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebSelection, UIWebSelectionGraph;

__attribute__((visibility("hidden")))
@interface UIWebSelectionNode : NSObject {
@private
	UIWebSelectionNode *_fromTopByExpanding;	// 4 = 0x4
	UIWebSelectionNode *_fromTopByContracting;	// 8 = 0x8
	UIWebSelectionNode *_fromBottomByExpanding;	// 12 = 0xc
	UIWebSelectionNode *_fromBottomByContracting;	// 16 = 0x10
	UIWebSelectionNode *_fromRightByExpanding;	// 20 = 0x14
	UIWebSelectionNode *_fromRightByContracting;	// 24 = 0x18
	UIWebSelectionNode *_fromLeftByExpanding;	// 28 = 0x1c
	UIWebSelectionNode *_fromLeftByContracting;	// 32 = 0x20
	UIWebSelectionGraph *_sharedGraph;	// 36 = 0x24
	UIWebSelection *_selection;	// 40 = 0x28
	BOOL _invalid;	// 44 = 0x2c
}
@property(retain) UIWebSelection *selection;	// G=0x307f10fd; S=0x307f1115; @synthesize=_selection
- (id)initWithSelection:(id)selection inGraph:(id)graph;	// 0x307f10ad
- (void)dealloc;	// 0x307f1071
- (void)invalidate;	// 0x307f0e49
- (id)nodeByMovingEdge:(int)edge outwards:(BOOL)outwards;	// 0x307f0edd
- (id *)nodeByReferenceFromEdge:(int)edge outwards:(BOOL)outwards;	// 0x307f0c25
- (int)oppositeEdge:(int)edge;	// 0x307f0c91
// declared property getter: - (id)selection;	// 0x307f10fd
// declared property setter: - (void)setSelection:(id)selection;	// 0x307f1115
@end

