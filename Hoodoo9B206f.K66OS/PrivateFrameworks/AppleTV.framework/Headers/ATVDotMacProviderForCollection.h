/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPhotoProviderForCollection.h"
#import "ATVDotMacProvider.h"

@class ATVDotMacCollection;

@interface ATVDotMacProviderForCollection : ATVDotMacProvider <BRPhotoProviderForCollection> {
@private
	ATVDotMacCollection *_collection;	// 28 = 0x1c
	BOOL _vendPhotoDataOnly;	// 32 = 0x20
}
@property(readonly, retain) ATVDotMacCollection *collection;	// G=0x36569671; converted property
@property(assign) BOOL vendPhotoDataOnly;	// G=0x36569695; S=0x36569685; converted property
+ (id)providerForCollection:(id)collection;	// 0x365692fd
+ (id)temporaryProviderForCollection:(id)collection;	// 0x36569349
- (id)initWithCollection:(id)collection;	// 0x36569395
- (id)initWithCollection:(id)collection isTemporaryProvider:(BOOL)provider;	// 0x365693a9
- (id)_data;	// 0x365695e1
- (BOOL)_handlesObject:(id)object;	// 0x36569625
- (BOOL)canHaveZeroData;	// 0x36569681
// converted property getter: - (id)collection;	// 0x36569671
- (void)dealloc;	// 0x365694d1
- (id)hashForDataAtIndex:(long)index;	// 0x365695a5
// converted property setter: - (void)setVendPhotoDataOnly:(BOOL)only;	// 0x36569685
// converted property getter: - (BOOL)vendPhotoDataOnly;	// 0x36569695
@end

