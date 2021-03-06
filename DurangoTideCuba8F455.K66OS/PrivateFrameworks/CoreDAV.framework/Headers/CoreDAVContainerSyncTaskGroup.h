/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVContainerMultiGetTaskDelegate.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSMutableSet, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetTaskDelegate, CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	BOOL _useSyncCollection;	// 60 = 0x3c
	NSString *_previousSyncToken;	// 64 = 0x40
	NSString *_nextSyncToken;	// 68 = 0x44
	NSArray *_actions;	// 72 = 0x48
	void *_context;	// 76 = 0x4c
	unsigned _multiGetBatchSize;	// 80 = 0x50
	NSMutableArray *_unsubmittedTasks;	// 84 = 0x54
	unsigned _maxIndependentTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSMutableSet *_syncReportDeletedURLs;	// 100 = 0x64
	NSMutableDictionary *_urlToETag;	// 104 = 0x68
	Class _appSpecificDataItemClass;	// 108 = 0x6c
	BOOL _syncItemOrder;	// 112 = 0x70
	NSMutableArray *_localItemURLOrder;	// 116 = 0x74
}
@property(retain) NSURL *addMemberURL;	// G=0x331799bd; S=0x331799ed; @synthesize=_addMemberURL
@property(readonly, assign) void *context;	// G=0x331761d9; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x33176219; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x331761c9; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x33176249; S=0x33176259; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x33176269; S=0x33176279; @synthesize=_multiGetBatchSize
@property(readonly, assign) NSString *previousCTag;	// G=0x33176209; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x331799d5; S=0x33179a19; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x33176229; S=0x33176239; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x331761e9; S=0x331761f9; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33176949
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33176b55
- (void)_getCTag;	// 0x33176625
- (void)_getDataPayloads;	// 0x331786ed
- (void)_getETags;	// 0x33178df9
- (void)_getOrder;	// 0x3317648d
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x33176d9d
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x33177179
- (void)_pushActions;	// 0x33179109
- (unsigned)_submitTasks;	// 0x331795d5
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x331781dd
- (void)_tearDownAllUnsubmittedTasks;	// 0x3317988d
// declared property getter: - (id)addMemberURL;	// 0x331799bd
- (void)bailWithError:(id)error;	// 0x33176a29
- (void)cancelTaskGroup;	// 0x331769ed
- (void)cancelTasks;	// 0x331768cd
- (void)containerMultiGetTask:(id)task parsedContents:(id)contents error:(id)error;	// 0x3317638d
// declared property getter: - (void *)context;	// 0x331761d9
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x331761c1
- (id)copyGetTaskWithURL:(id)url;	// 0x33177845
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x33177801
- (id)dataContentType;	// 0x331777bd
- (void)dealloc;	// 0x33176a69
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x33176f0d
- (id)description;	// 0x33176d29
// declared property getter: - (id)folderURL;	// 0x33176219
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x33177889
// declared property getter: - (id)localItemURLOrder;	// 0x331761c9
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x33176249
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x33176269
// declared property getter: - (id)previousCTag;	// 0x33176209
// declared property getter: - (id)previousSyncToken;	// 0x331799d5
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x33177b8d
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x3317740d
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x331799ed
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x33176259
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x33176279
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x33179a19
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x33176239
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x331761f9
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x331761c5
- (void)startTaskGroup;	// 0x3317644d
- (void)syncAway;	// 0x33176439
- (void)task:(id)task didFinishWithError:(id)error;	// 0x331763b1
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x331768e1
// declared property getter: - (BOOL)useMultiGet;	// 0x33176229
// declared property getter: - (BOOL)useSyncCollection;	// 0x331761e9
@end

