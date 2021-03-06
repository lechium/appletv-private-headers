/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, ATVInternetPhotosCollection, NSDate, NSArray;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosAccount : NSObject {
@private
	NSString *_accountName;	// 4 = 0x4
	NSString *_accountID;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSArray *_mediaAssets;	// 16 = 0x10
	NSArray *_subAccounts;	// 20 = 0x14
	NSArray *_mediaCollections;	// 24 = 0x18
	ATVInternetPhotosCollection *_lastModifiedCollection;	// 28 = 0x1c
	NSDate *_modDate;	// 32 = 0x20
	NSDate *_lastCheckedDate;	// 36 = 0x24
	NSString *_accountIconPath;	// 40 = 0x28
}
@property(retain) NSString *accountID;	// G=0x30177c85; S=0x30177d51; converted property
@property(retain) NSString *accountIconPath;	// G=0x30178805; S=0x301788d1; converted property
@property(retain) NSString *accountName;	// G=0x30177ae9; S=0x30177bb5; converted property
@property(retain) NSString *displayName;	// G=0x30177e21; S=0x30177eed; converted property
@property(retain) NSDate *lastCheckedDate;	// G=0x30178669; S=0x30178735; converted property
@property(retain) ATVInternetPhotosCollection *lastModifiedCollection;	// G=0x30177ff9; S=0x301780c5; converted property
@property(retain) NSArray *mediaCollections;	// G=0x30178331; S=0x301783fd; converted property
@property(retain) NSDate *modDate;	// G=0x301784cd; S=0x30178599; converted property
@property(retain) NSArray *subAccounts;	// G=0x30178195; S=0x30178261; converted property
+ (id)account;	// 0x301779a5
// converted property getter: - (id)accountID;	// 0x30177c85
// converted property getter: - (id)accountIconPath;	// 0x30178805
// converted property getter: - (id)accountName;	// 0x30177ae9
- (void)dealloc;	// 0x301779e9
// converted property getter: - (id)displayName;	// 0x30177e21
// converted property getter: - (id)lastCheckedDate;	// 0x30178669
// converted property getter: - (id)lastModifiedCollection;	// 0x30177ff9
// converted property getter: - (id)mediaCollections;	// 0x30178331
// converted property getter: - (id)modDate;	// 0x301784cd
// converted property setter: - (void)setAccountID:(id)anId;	// 0x30177d51
// converted property setter: - (void)setAccountIconPath:(id)path;	// 0x301788d1
// converted property setter: - (void)setAccountName:(id)name;	// 0x30177bb5
// converted property setter: - (void)setDisplayName:(id)name;	// 0x30177eed
// converted property setter: - (void)setLastCheckedDate:(id)date;	// 0x30178735
// converted property setter: - (void)setLastModifiedCollection:(id)collection;	// 0x301780c5
// converted property setter: - (void)setMediaCollections:(id)collections;	// 0x301783fd
// converted property setter: - (void)setModDate:(id)date;	// 0x30178599
// converted property setter: - (void)setSubAccounts:(id)accounts;	// 0x30178261
// converted property getter: - (id)subAccounts;	// 0x30178195
@end

