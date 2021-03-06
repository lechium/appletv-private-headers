/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MZUniversalPlaybackPositionDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, MZUniversalPlaybackPositionStore;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionClient : XXUnknownSuperclass <MZUniversalPlaybackPositionDataSource> {
	MZUniversalPlaybackPositionStore *_uppStore;	// 4 = 0x4
	NSMutableDictionary *_pendingChanges;	// 8 = 0x8
	NSMutableDictionary *_identifierToRecordMap;	// 12 = 0xc
	NSString *_lastSyncedDomainVersion;	// 16 = 0x10
}
@property(copy) NSString *lastSyncedDomainVersion;	// G=0x378fcd; S=0x378fe1; @synthesize=_lastSyncedDomainVersion
+ (id)defaultClient;	// 0x378b01
- (id)init;	// 0x378b91
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(id)syncEnumerationBlock;	// 0x378ff1
- (void)cancelUniversalPlaybackPositionTransaction:(id)transaction;	// 0x379345
- (void)commitUniversalPlaybackPositionTransaction:(id)transaction domainVersion:(id)version metadataEnumerationBlock:(id)block;	// 0x3791cd
- (void)dealloc;	// 0x378c39
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x378fcd
- (id)recordForItemIdentifier:(id)itemIdentifier;	// 0x378f01
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x378fe1
- (void)synchronize:(id)synchronize;	// 0x378cd9
- (void)writeItems:(id)items;	// 0x378d59
@end

