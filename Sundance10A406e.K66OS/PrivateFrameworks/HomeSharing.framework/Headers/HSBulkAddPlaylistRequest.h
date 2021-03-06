/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkAddPlaylistRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name;	// 0x318aed5d
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids5;	// 0x318aedb9
- (id)initWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids5;	// 0x318aeca9
- (id)_bodyDataForSessionID:(unsigned)sessionID playlistName:(id)name seedItemIDs:(id)ids itemIDs:(id)ids4;	// 0x318aeec1
- (id)canonicalResponseForResponse:(id)response;	// 0x318aee19
@end

