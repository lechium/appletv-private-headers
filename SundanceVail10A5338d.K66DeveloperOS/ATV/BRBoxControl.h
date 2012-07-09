/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRBoxControl : BRControl <BRContainerViewCell> {
	BRControl *_content;	// 80 = 0x50
	BRHorizontalDividerControl *_divider;	// 84 = 0x54
	float _dividerMargin;	// 88 = 0x58
	XXStruct_qlg9jA _dividerSuggestedHeight;	// 92 = 0x5c
	XXStruct_qlg9jA _space;	// 96 = 0x60
	id _loadCompletionBlock;	// 100 = 0x64
	XXStruct_40SSZC _contentSize;	// 104 = 0x68
}
@property(retain) BRControl *content;	// G=0x294009; S=0x294019; converted property
@property(assign, nonatomic) XXStruct_40SSZC contentSize;	// G=0x294571; S=0x294589; @synthesize=_contentSize
@property(retain) BRHorizontalDividerControl *divider;	// G=0x293e89; S=0x293ee1; converted property
@property(assign) float dividerMargin;	// G=0x293ff9; S=0x293f9d; converted property
@property(assign) XXStruct_qlg9jA dividerSuggestedHeight;	// G=0x293f81; S=0x293f71; converted property
- (id)accessibilityLabel;	// 0x2942d5
- (void)cancelContainerViewLoad;	// 0x29440d
// converted property getter: - (id)content;	// 0x294009
// declared property getter: - (XXStruct_40SSZC)contentSize;	// 0x294571
- (void)controlWasDeactivated;	// 0x293d4d
- (void)dealloc;	// 0x293cd5
- (id)description;	// 0x293e0d
// converted property getter: - (id)divider;	// 0x293e89
// converted property getter: - (float)dividerMargin;	// 0x293ff9
// converted property getter: - (XXStruct_qlg9jA)dividerSuggestedHeight;	// 0x293f81
- (void)layoutSubcontrols;	// 0x2940b9
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x2942f5
// converted property setter: - (void)setContent:(id)content;	// 0x294019
// declared property setter: - (void)setContentSize:(XXStruct_40SSZC)size;	// 0x294589
// converted property setter: - (void)setDivider:(id)divider;	// 0x293ee1
// converted property setter: - (void)setDividerMargin:(float)margin;	// 0x293f9d
// converted property setter: - (void)setDividerSuggestedHeight:(XXStruct_qlg9jA)height;	// 0x293f71
- (void)setIdentifier:(id)identifier;	// 0x293e99
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x2944cd
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x29451d
- (void)setReadyToDisplay;	// 0x29447d
- (void)setSpace:(XXStruct_qlg9jA)space;	// 0x2940a9
- (void)windowMaxBoundsChanged;	// 0x293dbd
@end
