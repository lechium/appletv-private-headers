/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVLocalDBTreeInfoProvider.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVGetAccountPropertiesTaskGroupDelegate.h"
#import "CoreDAVContainerInfoTaskGroupDelegate.h"
#import "BookmarkDAV-Structs.h"

@class BookmarkDAVSyncData, NSDictionary, NSMutableSet, NSURL, NSString;
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
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x367fd279; @synthesize=_accountInfoProvider
@property(copy) id getAccountPropertiesHandler;	// G=0x367fd28d; S=0x367fd2a1; @synthesize=_getAccountPropertiesHandler
@property(retain) NSURL *homeURL;	// G=0x367fd20d; S=0x367fd221; @synthesize=_homeURL
@property(readonly, assign) unsigned outstandingActionCount;	// G=0x367fd1ed; 
@property(retain) NSString *pushKey;	// G=0x367fd231; S=0x367fd245; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransport;	// G=0x367fd255; S=0x367fd269; @synthesize=_pushTransport
@property(copy) id syncHandler;	// G=0x367fd2b1; S=0x367fd2c5; @synthesize=_syncHandler
@property(readonly, assign) BookmarkDAVSyncData *topLevelSyncData;	// G=0x367f9671; 
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager openDBBlock:(id)block getDBBlock:(id)block4 saveDBBlock:(id)block5 closeDBBlock:(id)block6 registerForPush:(id)push forceSafariOrdering:(BOOL)ordering;	// 0x367f9405
- (BOOL)_addChange:(void *)change toData:(id)data numActionsP:(int *)p runningSizeP:(int *)p4 maxResources:(int)resources maxSize:(int)size foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders;	// 0x367fd489
- (BOOL)_applyReturnedBookmarks:(id)bookmarks withPushedBookmarks:(CFArrayRef)pushedBookmarks;	// 0x367ff095
- (BOOL)_applyReturnedFolders:(id)folders parentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders topmostFolders:(CFArrayRef)folders3 postedToURL:(id)url;	// 0x367fec01
- (BOOL)_applyUnmatchedParsedFolders:(id)folders;	// 0x367fe001
- (id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)bookmarkChanges pushedBookmarks:(CFArrayRef)bookmarks maxResources:(int)resources maxSize:(int)size;	// 0x367fdb69
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)serverOrder inParentWithURL:(id)url;	// 0x367fa461
- (void)_closeDBAndSave:(BOOL)save;	// 0x367f9749
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)bookmarkRef;	// 0x367fa001
- (id)_copyDAVFolderFromFolderRef:(void *)folderRef;	// 0x367fa0f9
- (id)_dbRelativeString:(id)string;	// 0x367fa419
- (void)_finishInitialSyncShouldPushChanges:(BOOL)_finishInitialSync;	// 0x367ff40d
- (id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)topmostFolderChanges foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders pushedTopmostFolders:(CFArrayRef)folders maxResources:(int)resources maxSize:(int)size;	// 0x367fda11
- (void)_handleAddsOrModifies:(id)modifies removes:(id)removes;	// 0x367fc6f1
- (BOOL)_handleErrorItem:(id)item forBAItem:(void *)baitem;	// 0x367fd2d9
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)success error:(id)error;	// 0x367f963d
- (void)_makeBookmarkFromDAVNode:(id)davnode;	// 0x367fc125
- (void)_makeFolderFromContainer:(id)container;	// 0x367fc281
- (BOOL)_matchParsedFolders:(id)folders toPushedFolders:(CFDictionaryRef)pushedFolders unmatchedParsedFolders:(id)folders3 parsedSetsOfChildrenFoldersByParentURL:(id)childrenFoldersByParentURL arraysOfChildrenByNameByParent:(CFDictionaryRef)childrenByNameByParent;	// 0x367fe799
- (void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)dict;	// 0x367fdf69
- (void)_saveDB;	// 0x367f96e1
- (int)_serverOrderForChange:(void *)change;	// 0x367fa2d9
- (void)_setChildrenOrder:(id)order forFolderURL:(id)folderURL;	// 0x367fa4e9
- (void)_setRootCTag:(id)tag rootSyncToken:(id)token knownOrderings:(id)orderings;	// 0x367fe541
- (void)_setServerIdOnItem:(void *)item isBookmark:(BOOL)bookmark suggestedId:(id)anId;	// 0x367fa20d
- (void)_syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler skipAddChanges:(BOOL)changes;	// 0x367fa6e5
// declared property getter: - (id)accountInfoProvider;	// 0x367fd279
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x367f99b5
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x367fbe19
- (id)copyLocalETagsForURLs:(id)urls;	// 0x367fbb05
- (void)dealloc;	// 0x367f9539
// declared property getter: - (id)getAccountPropertiesHandler;	// 0x367fd28d
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x367f97dd
- (void)getAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x367f9f41
- (BOOL)getCTag:(id *)tag pTag:(id *)tag2 forFolderWithURL:(id)url;	// 0x367fb9a1
// declared property getter: - (id)homeURL;	// 0x367fd20d
- (void)notePutToURL:(id)url withDataPayload:(id)dataPayload finishedWithIgnoredError:(id)ignoredError;	// 0x367fcf75
// declared property getter: - (unsigned)outstandingActionCount;	// 0x367fd1ed
// declared property getter: - (id)pushKey;	// 0x367fd231
// declared property getter: - (id)pushTransport;	// 0x367fd255
- (void)recursiveContainerSyncTask:(id)task completedFullSyncWithNewCTag:(id)newCTag newPTag:(id)tag newSyncToken:(id)token error:(id)error;	// 0x367fcb1d
- (void)recursiveContainerSyncTask:(id)task completedSyncOfFolderWithURL:(id)url newCTag:(id)tag newPTag:(id)tag4 addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x367fc911
- (void)recursiveContainerSyncTask:(id)task receivedAddedOrModifiedFolder:(id)folder;	// 0x367fc465
- (void)recursiveContainerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x367fc859
// declared property setter: - (void)setGetAccountPropertiesHandler:(id)handler;	// 0x367fd2a1
// declared property setter: - (void)setHomeURL:(id)url;	// 0x367fd221
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url;	// 0x367fc051
// declared property setter: - (void)setPushKey:(id)key;	// 0x367fd245
// declared property setter: - (void)setPushTransport:(id)transport;	// 0x367fd269
// declared property setter: - (void)setSyncHandler:(id)handler;	// 0x367fd2c5
// declared property getter: - (id)syncHandler;	// 0x367fd2b1
- (void)syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler;	// 0x367fb97d
// declared property getter: - (id)topLevelSyncData;	// 0x367f9671
@end

