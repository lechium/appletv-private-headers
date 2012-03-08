/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class BRProviderGroup;

@interface BRDependentProvider : NSObject <BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x330f268d; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x330f22b9
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x330f2311
- (void)_groupDataCountChanged:(id)changed;	// 0x330f269d
- (void)_providerDataSetChanged:(id)changed;	// 0x330f2761
- (void)_providerItemsModified:(id)modified;	// 0x330f27b9
- (id)controlFactory;	// 0x330f2599
- (id)dataAtIndex:(long)index;	// 0x330f25f5
- (long)dataCount;	// 0x330f25b9
- (void)dealloc;	// 0x330f2509
- (id)hashForDataAtIndex:(long)index;	// 0x330f2631
- (id)providers;	// 0x330f266d
// converted property getter: - (long)threshold;	// 0x330f268d
@end

