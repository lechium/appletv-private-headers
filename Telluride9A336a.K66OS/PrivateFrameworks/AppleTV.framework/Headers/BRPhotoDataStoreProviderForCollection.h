/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoDataStoreProvider.h"
#import "BRPhotoProviderForCollection.h"


@interface BRPhotoDataStoreProviderForCollection : BRPhotoDataStoreProvider <BRPhotoProviderForCollection> {
}
@property(assign) BOOL vendPhotoDataOnly;	// G=0x33af24a5; S=0x33af24a1; converted property
+ (id)providerWithDataStore:(id)dataStore controlFactory:(id)factory;	// 0x33af2425
- (BOOL)canHaveZeroData;	// 0x33af2475
- (id)collection;	// 0x33af2479
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x33af24a1
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x33af24a5
@end
