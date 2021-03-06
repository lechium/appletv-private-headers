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
@property(readonly, assign) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x35e93279; @synthesize=_accountInfoProvider
@property(copy) id getAccountPropertiesHandler;	// G=0x35e9328d; S=0x35e932a1; @synthesize=_getAccountPropertiesHandler
@property(retain) NSURL *homeURL;	// G=0x35e9320d; S=0x35e93221; @synthesize=_homeURL
@property(readonly, assign) unsigned outstandingActionCount;	// G=0x35e931ed; 
@property(retain) NSString *pushKey;	// G=0x35e93231; S=0x35e93245; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransport;	// G=0x35e93255; S=0x35e93269; @synthesize=_pushTransport
@property(copy) id syncHandler;	// G=0x35e932b1; S=0x35e932c5; @synthesize=_syncHandler
@property(readonly, assign) BookmarkDAVSyncData *topLevelSyncData;	// G=0x35e8f671; 
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager openDBBlock:(id)block getDBBlock:(id)block4 saveDBBlock:(id)block5 closeDBBlock:(id)block6 registerForPush:(id)push forceSafariOrdering:(BOOL)ordering;	// 0x35e8f405
- (BOOL)_addChange:(void *)change toData:(id)data numActionsP:(int *)p runningSizeP:(int *)p4 maxResources:(int)resources maxSize:(int)size foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders;	// 0x35e93489
- (BOOL)_applyReturnedBookmarks:(id)bookmarks withPushedBookmarks:(CFArrayRef)pushedBookmarks;	// 0x35e95095
- (BOOL)_applyReturnedFolders:(id)folders parentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders topmostFolders:(CFArrayRef)folders3 postedToURL:(id)url;	// 0x35e94c01
- (BOOL)_applyUnmatchedParsedFolders:(id)folders;	// 0x35e94001
- (id)_bookmarkXBELDataForBookmarkChanges:(CFArrayRef)bookmarkChanges pushedBookmarks:(CFArrayRef)bookmarks maxResources:(int)resources maxSize:(int)size;	// 0x35e93b69
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)serverOrder inParentWithURL:(id)url;	// 0x35e90461
- (void)_closeDBAndSave:(BOOL)save;	// 0x35e8f749
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)bookmarkRef;	// 0x35e90001
- (id)_copyDAVFolderFromFolderRef:(void *)folderRef;	// 0x35e900f9
- (id)_dbRelativeString:(id)string;	// 0x35e90419
- (void)_finishInitialSyncShouldPushChanges:(BOOL)_finishInitialSync;	// 0x35e9540d
- (id)_folderXBELDataForTopmostFolderChanges:(CFArrayRef)topmostFolderChanges foldersToAddByServerId:(CFDictionaryRef)addByServerId parentToArrayOfChildrenFolderChanges:(CFDictionaryRef)childrenFolderChanges pushedParentToArrayOfChildrenFolders:(CFDictionaryRef)childrenFolders pushedTopmostFolders:(CFArrayRef)folders maxResources:(int)resources maxSize:(int)size;	// 0x35e93a11
- (void)_handleAddsOrModifies:(id)modifies removes:(id)removes;	// 0x35e926f1
- (BOOL)_handleErrorItem:(id)item forBAItem:(void *)baitem;	// 0x35e932d9
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)success error:(id)error;	// 0x35e8f63d
- (void)_makeBookmarkFromDAVNode:(id)davnode;	// 0x35e92125
- (void)_makeFolderFromContainer:(id)container;	// 0x35e92281
- (BOOL)_matchParsedFolders:(id)folders toPushedFolders:(CFDictionaryRef)pushedFolders unmatchedParsedFolders:(id)folders3 parsedSetsOfChildrenFoldersByParentURL:(id)childrenFoldersByParentURL arraysOfChildrenByNameByParent:(CFDictionaryRef)childrenByNameByParent;	// 0x35e94799
- (void)_removeTempIdsFromFoldersInDict:(CFDictionaryRef)dict;	// 0x35e93f69
- (void)_saveDB;	// 0x35e8f6e1
- (int)_serverOrderForChange:(void *)change;	// 0x35e902d9
- (void)_setChildrenOrder:(id)order forFolderURL:(id)folderURL;	// 0x35e904e9
- (void)_setRootCTag:(id)tag rootSyncToken:(id)token knownOrderings:(id)orderings;	// 0x35e94541
- (void)_setServerIdOnItem:(void *)item isBookmark:(BOOL)bookmark suggestedId:(id)anId;	// 0x35e9020d
- (void)_syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler skipAddChanges:(BOOL)changes;	// 0x35e906e5
// declared property getter: - (id)accountInfoProvider;	// 0x35e93279
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x35e8f9b5
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x35e91e19
- (id)copyLocalETagsForURLs:(id)urls;	// 0x35e91b05
- (void)dealloc;	// 0x35e8f539
// declared property getter: - (id)getAccountPropertiesHandler;	// 0x35e9328d
- (void)getAccountPropertiesTask:(id)task completedWithError:(id)error;	// 0x35e8f7dd
- (void)getAccountPropertiesWithCompletionHandler:(id)completionHandler;	// 0x35e8ff41
- (BOOL)getCTag:(id *)tag pTag:(id *)tag2 forFolderWithURL:(id)url;	// 0x35e919a1
// declared property getter: - (id)homeURL;	// 0x35e9320d
- (void)notePutToURL:(id)url withDataPayload:(id)dataPayload finishedWithIgnoredError:(id)ignoredError;	// 0x35e92f75
// declared property getter: - (unsigned)outstandingActionCount;	// 0x35e931ed
// declared property getter: - (id)pushKey;	// 0x35e93231
// declared property getter: - (id)pushTransport;	// 0x35e93255
- (void)recursiveContainerSyncTask:(id)task completedFullSyncWithNewCTag:(id)newCTag newPTag:(id)tag newSyncToken:(id)token error:(id)error;	// 0x35e92b1d
- (void)recursiveContainerSyncTask:(id)task completedSyncOfFolderWithURL:(id)url newCTag:(id)tag newPTag:(id)tag4 addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x35e92911
- (void)recursiveContainerSyncTask:(id)task receivedAddedOrModifiedFolder:(id)folder;	// 0x35e92465
- (void)recursiveContainerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x35e92859
// declared property setter: - (void)setGetAccountPropertiesHandler:(id)handler;	// 0x35e932a1
// declared property setter: - (void)setHomeURL:(id)url;	// 0x35e93221
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url;	// 0x35e92051
// declared property setter: - (void)setPushKey:(id)key;	// 0x35e93245
// declared property setter: - (void)setPushTransport:(id)transport;	// 0x35e93269
// declared property setter: - (void)setSyncHandler:(id)handler;	// 0x35e932c5
// declared property getter: - (id)syncHandler;	// 0x35e932b1
- (void)syncWithRemoteChanges:(BOOL)remoteChanges completionHandler:(id)handler;	// 0x35e9197d
// declared property getter: - (id)topLevelSyncData;	// 0x35e8f671
@end

