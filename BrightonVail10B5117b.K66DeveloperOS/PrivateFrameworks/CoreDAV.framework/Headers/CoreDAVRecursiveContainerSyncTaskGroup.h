/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskGroupDelegate.h"
#import "CoreDAVMkcolTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSDictionary, NSMutableSet, NSURL, NSMutableArray, NSString, NSArray, NSMutableDictionary;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	NSString *_previousSyncToken;	// 60 = 0x3c
	NSString *_nextSyncToken;	// 64 = 0x40
	NSString *_previousPTag;	// 68 = 0x44
	NSString *_nextPTag;	// 72 = 0x48
	NSArray *_actions;	// 76 = 0x4c
	void *_context;	// 80 = 0x50
	unsigned _multiGetBatchSize;	// 84 = 0x54
	NSMutableArray *_unsubmittedTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSMutableSet *_syncReportDeletedURLs;	// 100 = 0x64
	NSMutableDictionary *_leafURLToETag;	// 104 = 0x68
	NSMutableArray *_childCollectionURL;	// 108 = 0x6c
	Class _appSpecificDataItemClass;	// 112 = 0x70
	Class _appSpecificContainerItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 124 = 0x7c
	BOOL _preflightCTag;	// 128 = 0x80
}
@property(readonly, assign) void *context;	// G=0x339047d1; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x33904755; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x339047e5; @synthesize=_folderURLToChildrenURLOrder
@property(assign) unsigned multiGetBatchSize;	// G=0x33904729; S=0x3390473d; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x339047f9; S=0x3390480d; @synthesize=_nextCTag
@property(assign) BOOL preflightCTag;	// G=0x3390477d; S=0x33904795; @synthesize=_preflightCTag
@property(readonly, assign) NSString *previousCTag;	// G=0x33904769; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x339047ad; S=0x339047c1; @synthesize=_previousSyncToken
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33900895
- (id)_copyContainerParserMappings;	// 0x339045f9
- (void)_folderModTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x33902f89
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x33900de5
- (void)_getDataPayloads;	// 0x33901f3d
- (void)_getItemTags;	// 0x33901bb1
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x339040ad
- (void)_getTopFolderTags;	// 0x339019d5
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x33902da5
- (void)_pushActions;	// 0x33901221
- (unsigned)_submitTasks;	// 0x33900f25
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x33903729
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)contents;	// 0x339010f9
- (void)_tearDownAllUnsubmittedTasks;	// 0x33900c9d
- (void)bailWithError:(id)error;	// 0x33900ea1
- (void)cancelTaskGroup;	// 0x33900ee5
// declared property getter: - (void *)context;	// 0x339047d1
- (id)copyFolderMultiGetTaskWithURLs:(id)urls;	// 0x3390465d
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x33904619
- (id)dataContentType;	// 0x339046a1
- (void)dealloc;	// 0x33900a7d
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x33903545
- (id)description;	// 0x33900bbd
// declared property getter: - (id)folderURL;	// 0x33904755
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x339047e5
- (BOOL)isWhitelistedError:(id)error;	// 0x33902a29
- (void)mkcolTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x33903435
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x33904729
// declared property getter: - (id)nextCTag;	// 0x339047f9
// declared property getter: - (BOOL)preflightCTag;	// 0x3390477d
// declared property getter: - (id)previousCTag;	// 0x33904769
// declared property getter: - (id)previousSyncToken;	// 0x339047ad
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33903cd1
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33903445
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x33902a99
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x3390473d
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x3390480d
// declared property setter: - (void)setPreflightCTag:(BOOL)tag;	// 0x33904795
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x339047c1
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x339046e5
- (void)startTaskGroup;	// 0x339029d1
- (void)syncAway;	// 0x33902a19
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33903455
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33900c2d
@end

