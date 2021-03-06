/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSBulkAddPlaylistRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name;	// 0x30154371
- (id)initWithDatabaseID:(unsigned)databaseID sessionID:(unsigned)anId playlistName:(id)name;	// 0x301542d1
- (id)_bodyDataForSessionID:(unsigned)sessionID playlistName:(id)name;	// 0x3015446d
- (id)canonicalResponseForResponse:(id)response;	// 0x301543c5
@end

