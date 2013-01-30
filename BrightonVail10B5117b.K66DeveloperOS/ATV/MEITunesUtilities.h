/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface MEITunesUtilities : XXUnknownSuperclass <BRITunesUtilities> {
}
+ (void)_writeJournal:(id)journal;	// 0xc041
+ (void)checkInJournaledEntries;	// 0xae9d
+ (void)initialize;	// 0xac7d
+ (id)journalObjectForAsset:(id)asset;	// 0xb121
+ (void)removeJournalForRentalID:(unsigned long long)rentalID;	// 0xb559
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0xb80d
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0xba31
- (void)deleteImportedKeybagData;	// 0xbf6d
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0xbb11
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0xbc09
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0xbe79
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0xbe39
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0xbe31
- (id)rentalGUID;	// 0xb7d5
- (id)sortStringForString:(id)string;	// 0xbcc9
- (id)urlSuitableForPlayback:(id)playback;	// 0xbe1d
@end
