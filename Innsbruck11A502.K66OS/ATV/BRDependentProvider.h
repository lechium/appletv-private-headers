/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRDependentProvider : XXUnknownSuperclass <BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x409401; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x409055
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x4090ad
- (void)_groupDataCountChanged:(id)changed;	// 0x409411
- (void)_providerDataSetChanged:(id)changed;	// 0x4094bd
- (void)_providerItemsModified:(id)modified;	// 0x409519
- (id)controlFactory;	// 0x409325
- (id)dataAtIndex:(long)index;	// 0x409379
- (long)dataCount;	// 0x409345
- (void)dealloc;	// 0x409295
- (id)hashForDataAtIndex:(long)index;	// 0x4093ad
- (id)providers;	// 0x4093e1
// converted property getter: - (long)threshold;	// 0x409401
@end

