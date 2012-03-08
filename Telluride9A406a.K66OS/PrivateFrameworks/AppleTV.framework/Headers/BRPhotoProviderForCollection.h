/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import "BRPhotoProviderForCollection.h"
#import "BRPhotoProvider.h"

@class BRPhotoMediaCollection;

@protocol BRPhotoProviderForCollection <BRProvider>
@property(assign) BOOL vendPhotoDataOnly;	// converted property
- (BOOL)canHaveZeroData;
- (id)collection;
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;
// converted property getter: - (BOOL)vendPhotoDataOnly;
@end

@interface BRPhotoProviderForCollection : BRPhotoProvider <BRPhotoProviderForCollection> {
@private
	BRPhotoMediaCollection *_collection;	// 12 = 0xc
	BOOL _vendPhotoDataOnly;	// 16 = 0x10
}
@property(readonly, retain) BRPhotoMediaCollection *collection;	// G=0x33046d15; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x33046d39; S=0x33046d29; converted property
+ (id)providerForCollection:(id)collection controlFactory:(id)factory;	// 0x33046b7d
- (id)initWithCollection:(id)collection controlFactory:(id)factory;	// 0x33046bbd
- (id)_data;	// 0x33046d49
- (BOOL)canHaveZeroData;	// 0x33046d25
// converted property getter: - (id)collection;	// 0x33046d15
- (id)dataAtIndex:(long)index;	// 0x33046c9d
- (long)dataCount;	// 0x33046c75
- (void)dealloc;	// 0x33046c29
- (id)hashForDataAtIndex:(long)index;	// 0x33046ced
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x33046d29
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x33046d39
@end

