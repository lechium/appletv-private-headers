/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, ASAccount;

@interface ASFolderHierarchy : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *folderCache;	// G=0x30a64115; S=0x30a65461; converted property
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x30a6559d; S=0x30a656f5; converted property
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x30a63f11
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x30a654a5
- (id)initWithAccount:(id)account;	// 0x30a63d69
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x30a65069
- (id)_folderCacheFilename;	// 0x30a63f75
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x30a64d8d
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x30a64af1
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x30a650f5
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x30a657a9
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x30a64775
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x30a63fbd
- (void)_setFolderCache:(id)cache;	// 0x30a65239
- (void)_setFolderPathsFromCurrentCache;	// 0x30a647b5
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x30a64795
- (void)blowAwayFolderCache;	// 0x30a650c5
- (void)clearLocalCache;	// 0x30a64725
- (void)dealloc;	// 0x30a63ea1
- (id)description;	// 0x30a63e45
// converted property getter: - (id)folderCache;	// 0x30a64115
- (id)folderForID:(id)anId;	// 0x30a6467d
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x30a6559d
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x30a655d1
- (id)folders;	// 0x30a646bd
- (id)foldersTag;	// 0x30a646f1
- (id)foldersUnderFolderWithID:(id)anId;	// 0x30a649a5
- (void)setDelegate:(id)delegate;	// 0x30a63f01
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x30a65461
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x30a656f5
@end

