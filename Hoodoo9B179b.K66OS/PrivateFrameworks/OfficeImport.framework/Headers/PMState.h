/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMState.h"

@class OADTablePartStyle, CMOutlineState;

__attribute__((visibility("hidden")))
@interface PMState : CMState {
@private
	CMOutlineState *mListState;	// 40 = 0x28
	OADTablePartStyle *mCurrentRowStyle;	// 44 = 0x2c
}
@property(retain) id currentRowStyle;	// G=0x3273a595; S=0x3290f09d; converted property
- (id)init;	// 0x327f9349
// converted property getter: - (id)currentRowStyle;	// 0x3273a595
- (void)dealloc;	// 0x327c4b0d
- (id)listState;	// 0x327385c9
// converted property setter: - (void)setCurrentRowStyle:(id)style;	// 0x3290f09d
@end

