/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MZUniversalPlaybackPositionTransactionContext.h"

@class NSString, MPMediaLibrary, MPMediaQuery;

@interface MPUbiquitousBookmarksTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {
@private
	MPMediaLibrary *_mediaLibrary;	// 4 = 0x4
	NSString *_lastSyncedDomainVersion;	// 8 = 0x8
	unsigned long long _lastSyncedEntityRevision;	// 12 = 0xc
	unsigned long long _transactionEntityRevision;	// 20 = 0x14
	MPMediaQuery *_itemsQuery;	// 28 = 0x1c
}
@property(retain, nonatomic) MPMediaQuery *itemsQuery;	// G=0x348f5f91; S=0x348f5fa1; @synthesize=_itemsQuery
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;	// G=0x348f5f15; S=0x348f5f29; @synthesize=_lastSyncedDomainVersion
@property(assign, nonatomic) unsigned long long lastSyncedEntityRevision;	// G=0x348f5f39; S=0x348f5f51; @synthesize=_lastSyncedEntityRevision
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x348f5ef5; S=0x348f5f05; @synthesize=_mediaLibrary
@property(assign, nonatomic) unsigned long long transactionEntityRevision;	// G=0x348f5f65; S=0x348f5f7d; @synthesize=_transactionEntityRevision
- (void)dealloc;	// 0x348f5dc1
- (id)description;	// 0x348f5e39
// declared property getter: - (id)itemsQuery;	// 0x348f5f91
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x348f5f15
// declared property getter: - (unsigned long long)lastSyncedEntityRevision;	// 0x348f5f39
// declared property getter: - (id)mediaLibrary;	// 0x348f5ef5
// declared property setter: - (void)setItemsQuery:(id)query;	// 0x348f5fa1
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x348f5f29
// declared property setter: - (void)setLastSyncedEntityRevision:(unsigned long long)revision;	// 0x348f5f51
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x348f5f05
// declared property setter: - (void)setTransactionEntityRevision:(unsigned long long)revision;	// 0x348f5f7d
// declared property getter: - (unsigned long long)transactionEntityRevision;	// 0x348f5f65
@end

