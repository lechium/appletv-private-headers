/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"

@class WDParagraph, WXState, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WXOAVState : OAVState {
@private
	WXState *mWxState;	// 28 = 0x1c
	WDParagraph *mParagraph;	// 32 = 0x20
	NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;	// 36 = 0x24
}
@property(retain) id currentParagraph;	// G=0x312c1bf9; S=0x310f5515; converted property
- (id)initWithWXState:(id)wxstate;	// 0x310dd7ad
// converted property getter: - (id)currentParagraph;	// 0x312c1bf9
- (void)dealloc;	// 0x310fb479
- (id)nextVmlShapeIdToTextBoxMap;	// 0x310fafe1
// converted property setter: - (void)setCurrentParagraph:(id)paragraph;	// 0x310f5515
- (id)wxState;	// 0x310fa0f9
@end

