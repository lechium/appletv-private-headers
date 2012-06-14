/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacProvider.h"

@class NSArray, ATVInternetPhotosAccount, NSSet;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
@private
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x36568df1; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x36569299; S=0x365692a9; converted property
+ (id)providerForAccount:(id)account;	// 0x36568b99
- (id)initWithAccount:(id)account;	// 0x36568be1
- (id)_data;	// 0x365690e5
- (id)_dataWithTypeDividers;	// 0x36568f4d
- (BOOL)_handlesObject:(id)object;	// 0x3656915d
- (void)_updateDataCount;	// 0x3656926d
// converted property getter: - (id)account;	// 0x36568df1
- (id)dataAtIndex:(long)index;	// 0x36568e39
- (long)dataCount;	// 0x36568e11
- (void)dealloc;	// 0x36568d09
- (id)hashForDataAtIndex:(long)index;	// 0x36568ea5
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x36569299
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x36568e01
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x365692a9
@end
