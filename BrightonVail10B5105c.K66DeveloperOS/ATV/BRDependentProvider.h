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
@property(readonly, assign) long threshold;	// G=0x35673d; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x356391
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x3563e9
- (void)_groupDataCountChanged:(id)changed;	// 0x35674d
- (void)_providerDataSetChanged:(id)changed;	// 0x3567f9
- (void)_providerItemsModified:(id)modified;	// 0x356855
- (id)controlFactory;	// 0x356661
- (id)dataAtIndex:(long)index;	// 0x3566b5
- (long)dataCount;	// 0x356681
- (void)dealloc;	// 0x3565d1
- (id)hashForDataAtIndex:(long)index;	// 0x3566e9
- (id)providers;	// 0x35671d
// converted property getter: - (long)threshold;	// 0x35673d
@end
