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
@property(retain) BRControl *content;	// G=0x3027ff81; S=0x3027ff91; converted property
@property(assign, nonatomic) XXStruct_40SSZC contentSize;	// G=0x30280509; S=0x30280525; @synthesize=_contentSize
@property(retain) BRDividerControl *divider;	// G=0x3027fe09; S=0x3027fe61; converted property
@property(assign) float dividerMargin;	// G=0x3027ff71; S=0x3027ff0d; converted property
@property(assign) XXStruct_qlg9jA dividerSuggestedHeight;	// G=0x3027fef1; S=0x3027fee1; converted property
- (id)accessibilityLabel;	// 0x30280261
- (void)cancelContainerViewLoad;	// 0x302803a1
// converted property getter: - (id)content;	// 0x3027ff81
// declared property getter: - (XXStruct_40SSZC)contentSize;	// 0x30280509
- (void)controlWasDeactivated;	// 0x3027fcc5
- (void)dealloc;	// 0x3027fc51
- (id)description;	// 0x3027fd8d
// converted property getter: - (id)divider;	// 0x3027fe09
// converted property getter: - (float)dividerMargin;	// 0x3027ff71
// converted property getter: - (XXStruct_qlg9jA)dividerSuggestedHeight;	// 0x3027fef1
- (void)layoutSubcontrols;	// 0x30280039
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x30280281
// converted property setter: - (void)setContent:(id)content;	// 0x3027ff91
// declared property setter: - (void)setContentSize:(XXStruct_40SSZC)size;	// 0x30280525
// converted property setter: - (void)setDivider:(id)divider;	// 0x3027fe61
// converted property setter: - (void)setDividerMargin:(float)margin;	// 0x3027ff0d
// converted property setter: - (void)setDividerSuggestedHeight:(XXStruct_qlg9jA)height;	// 0x3027fee1
- (void)setIdentifier:(id)identifier;	// 0x3027fe19
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x30280465
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x302804b5
- (void)setReadyToDisplay;	// 0x30280415
- (void)setSpace:(XXStruct_qlg9jA)space;	// 0x30280029
- (void)windowMaxBoundsChanged;	// 0x3027fd39
@end

