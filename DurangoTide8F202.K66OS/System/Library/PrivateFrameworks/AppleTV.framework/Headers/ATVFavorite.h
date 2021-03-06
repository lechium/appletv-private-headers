/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate;

@interface ATVFavorite : NSObject {
@private
	NSDate *_dateAdded;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_itemID;	// 12 = 0xc
}
@property(copy) NSDate *dateAdded;	// G=0x336e0799; S=0x336e07e1; @synthesize=_dateAdded
@property(copy) NSString *itemID;	// G=0x336e07c9; S=0x336e0831; @synthesize=_itemID
@property(copy) NSString *title;	// G=0x336e07b1; S=0x336e0809; @synthesize=_title
+ (id)favoriteFromDictionary:(id)dictionary;	// 0x336e0859
- (id)initWithDictionary:(id)dictionary;	// 0x336e0639
- (id)_currentDsid;	// 0x336e04a9
- (id)_currentStoreFront;	// 0x336e047d
// declared property getter: - (id)dateAdded;	// 0x336e0799
- (void)dealloc;	// 0x336e05cd
- (void)encodeWithDictionary:(id)dictionary;	// 0x336e0701
- (BOOL)isSaved;	// 0x336e0585
// declared property getter: - (id)itemID;	// 0x336e07c9
- (void)remove;	// 0x336e0525
- (BOOL)removeUponAcquisition;	// 0x336e0479
- (void)save;	// 0x336e0555
// declared property setter: - (void)setDateAdded:(id)added;	// 0x336e07e1
// declared property setter: - (void)setItemID:(id)anId;	// 0x336e0831
// declared property setter: - (void)setTitle:(id)title;	// 0x336e0809
// declared property getter: - (id)title;	// 0x336e07b1
@end

