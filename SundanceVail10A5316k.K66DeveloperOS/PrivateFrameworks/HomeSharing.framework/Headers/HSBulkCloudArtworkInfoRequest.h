/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkCloudArtworkInfoRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId;	// 0x308d5ebd
- (id)initWithDatabaseID:(unsigned)databaseID itemIDs:(id)ids sessionID:(unsigned)anId;	// 0x308d5e1d
- (id)_bodyDataForItemIDs:(id)itemIDs sessionID:(unsigned)anId;	// 0x308d5f7d
- (id)canonicalResponseForResponse:(id)response;	// 0x308d5f11
@end

