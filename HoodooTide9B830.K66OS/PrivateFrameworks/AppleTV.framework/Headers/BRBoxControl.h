/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class BRDividerControl;

@interface BRBoxControl : BRControl <BRContainerViewCell> {
@private
	BRControl *_content;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	float _dividerMargin;	// 56 = 0x38
	XXStruct_qlg9jA _dividerSuggestedHeight;	// 60 = 0x3c
	XXStruct_qlg9jA _space;	// 64 = 0x40
	id _loadCompletionBlock;	// 68 = 0x44
	XXStruct_40SSZC _contentSize;	// 72 = 0x48
}
@property(retain) BRControl *content;	// G=0x329c2be9; S=0x329c2bf9; converted property
@property(assign, nonatomic) XXStruct_40SSZC contentSize;	// G=0x329c3171; S=0x329c318d; @synthesize=_contentSize
@property(retain) BRDividerControl *divider;	// G=0x329c2a71; S=0x329c2ac9; converted property
@property(assign) float dividerMargin;	// G=0x329c2bd9; S=0x329c2b75; converted property
@property(assign) XXStruct_qlg9jA dividerSuggestedHeight;	// G=0x329c2b59; S=0x329c2b49; converted property
- (id)accessibilityLabel;	// 0x329c2ec9
- (void)cancelContainerViewLoad;	// 0x329c3009
// converted property getter: - (id)content;	// 0x329c2be9
// declared property getter: - (XXStruct_40SSZC)contentSize;	// 0x329c3171
- (void)controlWasDeactivated;	// 0x329c292d
- (void)dealloc;	// 0x329c28b9
- (id)description;	// 0x329c29f5
// converted property getter: - (id)divider;	// 0x329c2a71
// converted property getter: - (float)dividerMargin;	// 0x329c2bd9
// converted property getter: - (XXStruct_qlg9jA)dividerSuggestedHeight;	// 0x329c2b59
- (void)layoutSubcontrols;	// 0x329c2ca1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x329c2ee9
// converted property setter: - (void)setContent:(id)content;	// 0x329c2bf9
// declared property setter: - (void)setContentSize:(XXStruct_40SSZC)size;	// 0x329c318d
// converted property setter: - (void)setDivider:(id)divider;	// 0x329c2ac9
// converted property setter: - (void)setDividerMargin:(float)margin;	// 0x329c2b75
// converted property setter: - (void)setDividerSuggestedHeight:(XXStruct_qlg9jA)height;	// 0x329c2b49
- (void)setIdentifier:(id)identifier;	// 0x329c2a81
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x329c30cd
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x329c311d
- (void)setReadyToDisplay;	// 0x329c307d
- (void)setSpace:(XXStruct_qlg9jA)space;	// 0x329c2c91
- (void)windowMaxBoundsChanged;	// 0x329c29a1
@end

