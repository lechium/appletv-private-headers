/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSArray;
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
@property(readonly, assign) long dataCount;	// G=0x32979211; converted property
- (id)initWithControlFactory:(id)controlFactory maxCount:(long)count;	// 0x329792dd
- (void)_databaseMessagesSuppressed:(id)suppressed;	// 0x32978ac1
- (void)_databaseObjectWasAdded:(id)added;	// 0x32978dc1
- (void)_databaseObjectWasModified:(id)modified;	// 0x32978c95
- (void)_databaseObjectWillBeDeleted:(id)_databaseObject;	// 0x32978d25
- (void)_downloadConvertedToAsset:(id)asset;	// 0x32978ad1
- (void)_hostAvailabilityChanged:(id)changed;	// 0x32978c71
- (long)_primeData;	// 0x32978ee5
- (void)_updateDataIfNeeded:(id)needed;	// 0x32978bf5
- (id)controlFactory;	// 0x32978ab1
- (id)dataAtIndex:(long)index;	// 0x329791c5
// converted property getter: - (long)dataCount;	// 0x32979211
- (void)dealloc;	// 0x32979249
- (id)hashForDataAtIndex:(long)index;	// 0x32979181
@end

