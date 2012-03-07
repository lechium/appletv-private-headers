/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"
#import "BRControlHeightFactory.h"

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x33a91215; S=0x33a911e5; converted property
+ (id)providerWithProvider:(id)provider;	// 0x33a91091
- (id)initWithProvider:(id)provider;	// 0x33a90efd
- (void)_providerDataSetChanged:(id)changed;	// 0x33a91569
- (void)_providerItemsModified:(id)modified;	// 0x33a914f5
- (id)_shiftRangesDown:(id)down;	// 0x33a91415
- (BOOL)_shouldShowDivider;	// 0x33a913c5
- (void)_updateTopDividerControl;	// 0x33a91325
- (id)accessibilityLabel;	// 0x33a915d1
- (void)addDividerWithLabel:(id)label;	// 0x33a910ed
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x33a91101
- (id)controlFactory;	// 0x33a91245
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33a915f1
- (id)dataAtIndex:(long)index;	// 0x33a91289
- (long)dataCount;	// 0x33a91249
- (void)dealloc;	// 0x33a91001
- (id)divider;	// 0x33a91235
// converted property getter: - (BOOL)dividerHidden;	// 0x33a91215
- (BOOL)dividerVisible;	// 0x33a91225
- (id)hashForDataAtIndex:(long)index;	// 0x33a912dd
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33a9164d
- (id)provider;	// 0x33a910dd
- (void)removeDivider;	// 0x33a911a5
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x33a911e5
@end
