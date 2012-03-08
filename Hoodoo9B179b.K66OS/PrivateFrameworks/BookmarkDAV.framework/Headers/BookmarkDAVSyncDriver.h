/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "BookmarkDAV-Structs.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVLocalDBTreeInfoProvider.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVGetAccountPropertiesTaskGroupDelegate.h"
#import "CoreDAVContainerInfoTaskGroupDelegate.h"

@class BookmarkDAVSyncData, NSDictionary, NSURL, NSString, NSMutableSet;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate> {
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 4 = 0x4
	id<CoreDAVTaskManager> _taskManager;	// 8 = 0x8
	NSMutableSet *_outstandingTaskGroups;	// 12 = 0xc
	id _getAccountPropertiesHandler;	// 16 = 0x10
	id _syncHandler;	// 20 = 0x14
	void *_changeToken;	// 24 = 0x18
	NSURL *_homeURL;	// 28 = 0x1c
	NSString *_pushKey;	// 32 = 0x20
	NSDictionary *_pushTransport;	// 36 = 0x24
	id _openDBBlock;	// 40 = 0x28
	id _getDBBlock;	// 44 = 0x2c
	id _saveDBBlock;	// 48 = 0x30
	id _closeDBBlock;	// 52 = 0x34
	BookmarkDAVSyncData *_topLevelSyncData;	// 56 = 0x38
	id _registerForPush;	// 60 = 0x3c
	BOOL _forceSafariOrdering;	// 64 = 0x40
	BOOL _forceSave;	// 65 = 0x41
}
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x3679ea91; @synthesize=_accountInfoProvider
@property(copy) id getAccountPropertiesHandler;	// G=0x3679eaa1; S=0x3679eab5; @synthesize=_getAccountPropertiesHandler
@property(retain) NSURL *homeURL;	// G=0x3679e9e9; S=0x3679e9fd; @synthesize=_homeURL
@property(readonly, assign) unsigned outstandingActionCount;	// G=0x3679e9c9; 
@property(retain) NSString *pushKey;	// G=0x3679ea21; S=0x3679ea35; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransport;	// G=0x3679ea59; S=0x3679ea6d; @synthesize=_pushTransport
@property(copy) id syncHandler;	// G=0x3679ead9; S=0x3679eaed; @synthesize=_syncHandler
@property(readonly, assign) BookmarkDAVSyncData *topLevelSyncData;	// G=0x3679b055; 
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager openDBBlock:(id)block getDBBlock:(id)block4 saveDBBlock:(id)block5 closeDBBlock:(id)block6 registerForPush:(id)push forceSafariOrdering:(BOOL)ordering;	// 0x3679adf5
- (BOOL)_addChange:(void *)change toData:(id)data numActionsP:(int *)p runningSizeP:(int *)p4 maxResources:(int)resources maxSize:(int)size foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders;	// 0x3679ecc1
- (BOOL)_applyReturnedBookmarks:(id)bookmarks withPushedBookmarks:(CFArrayRef)pushedBookmarks;	// 0x367a0805
- (BOOL)_applyReturnedFolders:(id)folders parentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders topmostFolders:(CFArrayRef)folders3 postedToURL:(id)url;	// 0x367a038d
- (BOOL)_applyUnmatchedParsedFolders:(id)folders;	// 0x3679f829
- (id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)bookmarkChanges pushedBookmarks:(CFArrayRef)bookmarks maxResources:(int)resources maxSize:(int)size;	// 0x3679f3a9
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)serverOrder inParentWithURL:(id)url;	// 0x3679be5d
- (void)_closeDBAndSave:(BOOL)save;	// 0x3679b129
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)bookmarkRef;	// 0x3679ba01
- (id)_copyDAVFolderFromFolderRef:(void *)folderRef;	// 0x3679baf9
- (id)_dbRelativeString:(id)string;	// 0x3679be15
- (void)_finishInitialSyncShouldPushChanges:(BOOL)_finishInitialSync;	// 0x367a0b69
- (id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)topmostFolderChanges foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders pushedTopmostFolders:(CFArrayRef)folders maxResources:(int)resources maxSize:(int)size;	// 0x3679f249
- (void)_handleAddsOrModifies:(id)modifies removes:(id)removes;	// 0x3679df19
- (BOOL)_handleErrorItem:(id)item forBAItem:(void *)baitem;	// 0x3679eb11
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)success error:(id)error;	// 0x3679b029
- (void)_makeBookmarkFromDAVNode:(id)davnode;	// 0x3679d965
- (void)_makeFolderFromContainer:(id)container;	// 0x3679dad1
- (BOOL)_matchParsedFolders:(id)folders toPushedFolders:(CFDictionaryRef)pushedFolders unmatchedParsedFolders:(id)folders3 parsedSetsOfChildrenFoldersByParentURL:(id)childrenFoldersByParentURL arraysOfChildrenByNameByParent:(CFDictionaryRef)childrenByNameByParent;	// 0x3679ff59
- (void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)dict;	// 0x3679f79d
- (void)_saveDB;	// 0x3679b0bd
- (int)_serverOrderForChange:(void *)change;	// 0x3679bcd1
- (void)_setChildrenOrder:(id)order forFolderURL:(id)folderURL;	// 0x3679bef5
- (void)_setRootCTag:(id)tag rootSyncToken:(id)token knownOrderings:(id)orderings;	// 0x3679fd1d
- (void)_setServerIdOnItem:(void *)item isBookmark:(BOOL)bookmark;	// 0x3679bc0d
- (void)_syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler skipAddChanges:(BOOL)changes;	// 0x3679c0f5
// declared property getter: - (id)accountInfoProvider;	// 0x3679ea91
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x3679b389
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x3679d675
- (id)copyLocalETagsForURLs:(id)urls;	// 0x3679d375
- (void)dealloc;	// 0x3679af29
// declared property getter: - (id)getAccountPropertiesHandler;	// 0x3679eaa1
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x3679b1c1
- (void)getAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x3679b941
- (BOOL)getCTag:(id *)tag pTag:(id *)tag2 forFolderWithURL:(id)url;	// 0x3679d20d
// declared property getter: - (id)homeURL;	// 0x3679e9e9
- (void)notePutToURL:(id)url withDataPayload:(id)dataPayload finishedWithIgnoredError:(id)ignoredError;	// 0x3679e755
// declared property getter: - (unsigned)outstandingActionCount;	// 0x3679e9c9
// declared property getter: - (id)pushKey;	// 0x3679ea21
// declared property getter: - (id)pushTransport;	// 0x3679ea59
- (void)recursiveContainerSyncTask:(id)task completedFullSyncWithNewCTag:(id)newCTag newPTag:(id)tag newSyncToken:(id)token error:(id)error;	// 0x3679e315
- (void)recursiveContainerSyncTask:(id)task completedSyncOfFolderWithURL:(id)url newCTag:(id)tag newPTag:(id)tag4 addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x3679e10d
- (void)recursiveContainerSyncTask:(id)task receivedAddedOrModifiedFolder:(id)folder;	// 0x3679dcad
- (void)recursiveContainerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x3679e059
// declared property setter: - (void)setGetAccountPropertiesHandler:(id)handler;	// 0x3679eab5
// declared property setter: - (void)setHomeURL:(id)url;	// 0x3679e9fd
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url;	// 0x3679d88d
// declared property setter: - (void)setPushKey:(id)key;	// 0x3679ea35
// declared property setter: - (void)setPushTransport:(id)transport;	// 0x3679ea6d
// declared property setter: - (void)setSyncHandler:(id)handler;	// 0x3679eaed
// declared property getter: - (id)syncHandler;	// 0x3679ead9
- (void)syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler;	// 0x3679d1e9
// declared property getter: - (id)topLevelSyncData;	// 0x3679b055
@end

