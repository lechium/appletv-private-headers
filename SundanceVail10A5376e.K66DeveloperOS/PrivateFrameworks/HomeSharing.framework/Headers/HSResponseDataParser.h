/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"


@interface HSResponseDataParser : NSObject {
}
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551b78d
+ (id)_parseBrowseListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551c2ed
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551b98d
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551ba49
+ (id)_parseDeletedIDListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551bb31
+ (id)_parseDictionaryCollectionWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551bc29
+ (id)_parseEditCommandResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551bd95
+ (id)_parseItemIDArrayWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551c405
+ (unsigned)_parseItemPropertyCountWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551b285
+ (id)_parseItemsResponseWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3551bee9
+ (id)_parseListingCollectionWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3551c1ed
+ (id)_parseListingItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3551c4f9
+ (id)_parseLoginResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551b47d
+ (id)_parseResponseCode:(unsigned)code bytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3551b2c1
+ (id)_parseUpdateResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3551b605
+ (void)enumerateDeletedItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x3551b0f5
+ (void)enumerateItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x3551b039
+ (id)enumerateRawItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x3551abf9
+ (void)parseItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3551af95
+ (unsigned)parseItemWithBytes:(const char *)bytes length:(unsigned)length valuesOut:(XXStruct_rf32zC *)anOut valuesCapacity:(unsigned)capacity;	// 0x3551aca9
+ (id)parseResponseData:(id)data;	// 0x3551abe5
@end
