/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *folderCache;	// G=0x36f1fef1; S=0x36f213c1; converted property
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x36f215f5; S=0x36f21779; converted property
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x36f1fcdd
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x36f21409
- (id)initWithAccount:(id)account;	// 0x36f1fb2d
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x36f20ea9
- (id)_folderCacheFilename;	// 0x36f1fd41
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x36f20bc9
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x36f20925
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x36f20f35
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x36f21829
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x36f20595
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x36f1fd89
- (void)_setFolderCache:(id)cache;	// 0x36f21089
- (void)_setFolderPathsFromCurrentCache;	// 0x36f205d5
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x36f205b5
- (void)blowAwayFolderCache;	// 0x36f20f05
- (void)clearLocalCache;	// 0x36f20545
- (void)dealloc;	// 0x36f1fc69
- (id)description;	// 0x36f1fc0d
// converted property getter: - (id)folderCache;	// 0x36f1fef1
- (id)folderForID:(id)anId;	// 0x36f2049d
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x36f215f5
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x36f21629
- (id)folders;	// 0x36f204dd
- (id)foldersTag;	// 0x36f20511
- (id)foldersUnderFolderWithID:(id)anId;	// 0x36f207bd
- (void)setDelegate:(id)delegate;	// 0x36f1fccd
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x36f213c1
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x36f21779
@end

