/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRProvider.h"
#import "BRControlFactory.h"

@class BRDividerControl;

@interface BRDividerProvider : NSObject <BRControlFactory, BRControlHeightFactory, BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRDividerControl *_topDivider;	// 8 = 0x8
	BOOL _dividerHidden;	// 12 = 0xc
	BOOL _showDivider;	// 13 = 0xd
}
@property(assign) BOOL dividerHidden;	// G=0x3029b085; S=0x3029b055; converted property
+ (id)providerWithProvider:(id)provider;	// 0x3029af01
- (id)initWithProvider:(id)provider;	// 0x3029ad6d
- (void)_providerDataSetChanged:(id)changed;	// 0x3029b3d9
- (void)_providerItemsModified:(id)modified;	// 0x3029b365
- (id)_shiftRangesDown:(id)down;	// 0x3029b285
- (BOOL)_shouldShowDivider;	// 0x3029b235
- (void)_updateTopDividerControl;	// 0x3029b195
- (id)accessibilityLabel;	// 0x3029b441
- (void)addDividerWithLabel:(id)label;	// 0x3029af5d
- (void)addDividerWithLabel:(id)label andOrientation:(int)orientation;	// 0x3029af71
- (id)controlFactory;	// 0x3029b0b5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3029b461
- (id)dataAtIndex:(long)index;	// 0x3029b0f9
- (long)dataCount;	// 0x3029b0b9
- (void)dealloc;	// 0x3029ae71
- (id)divider;	// 0x3029b0a5
// converted property getter: - (BOOL)dividerHidden;	// 0x3029b085
- (BOOL)dividerVisible;	// 0x3029b095
- (id)hashForDataAtIndex:(long)index;	// 0x3029b14d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x3029b4bd
- (id)provider;	// 0x3029af4d
- (void)removeDivider;	// 0x3029b015
// converted property setter: - (void)setDividerHidden:(BOOL)hidden;	// 0x3029b055
@end

