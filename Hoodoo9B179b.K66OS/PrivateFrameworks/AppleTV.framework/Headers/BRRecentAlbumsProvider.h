/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray, NSSet;
@protocol BRControlFactory;

@interface BRRecentAlbumsProvider : NSObject <BRProvider> {
@private
	long _maxCount;	// 4 = 0x4
	long _dataCount;	// 8 = 0x8
	id<BRControlFactory> _controlFactory;	// 12 = 0xc
	NSArray *_data;	// 16 = 0x10
	NSSet *_musicTypes;	// 20 = 0x14
	BOOL _invalidateOnValidityCheck;	// 24 = 0x18
}
@property(readonly, assign) long dataCount;	// G=0x30318d0d; converted property
- (id)initWithControlFactory:(id)controlFactory maxCount:(long)count;	// 0x303189e9
- (void)_databaseMessagesSuppressed:(id)suppressed;	// 0x303190b5
- (void)_databaseObjectWasAdded:(id)added;	// 0x303190c9
- (void)_databaseObjectWasModified:(id)modified;	// 0x303192b5
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x30319209
- (void)_downloadConvertedToAsset:(id)asset;	// 0x3031940d
- (void)_hostAvailabilityChanged:(id)changed;	// 0x30319359
- (long)_primeData;	// 0x30318de9
- (void)_updateDataIfNeeded:(id)needed;	// 0x3031937d
- (id)controlFactory;	// 0x30318cfd
- (id)dataAtIndex:(long)index;	// 0x30318d45
// converted property getter: - (long)dataCount;	// 0x30318d0d
- (void)dealloc;	// 0x30318c59
- (id)hashForDataAtIndex:(long)index;	// 0x30318d95
@end
