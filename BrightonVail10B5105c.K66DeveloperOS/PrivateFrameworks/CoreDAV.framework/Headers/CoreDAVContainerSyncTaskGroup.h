/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVGetTaskDelegate.h"

@class NSMutableArray, NSURL, NSMutableDictionary, NSString, NSArray, NSDictionary, NSMutableSet;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	BOOL _ensureUpdatedCTag;	// 60 = 0x3c
	BOOL _useSyncCollection;	// 61 = 0x3d
	NSString *_previousSyncToken;	// 64 = 0x40
	NSString *_nextSyncToken;	// 68 = 0x44
	NSMutableArray *_actions;	// 72 = 0x48
	void *_context;	// 76 = 0x4c
	unsigned _multiGetBatchSize;	// 80 = 0x50
	NSMutableArray *_unsubmittedTasks;	// 84 = 0x54
	unsigned _maxIndependentTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSDictionary *_bulkRequests;	// 100 = 0x64
	NSString *_bulkChangeCheckCTag;	// 104 = 0x68
	NSMutableSet *_syncReportDeletedURLs;	// 108 = 0x6c
	NSMutableDictionary *_urlToETag;	// 112 = 0x70
	Class _appSpecificDataItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableArray *_localItemURLOrder;	// 124 = 0x7c
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 128 = 0x80
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 132 = 0x84
	BOOL _actionsOnly;	// 136 = 0x88
}
@property(assign) BOOL actionsOnly;	// G=0x35febda1; S=0x35febdb9; @synthesize=_actionsOnly
@property(retain) NSURL *addMemberURL;	// G=0x35febba5; S=0x35febbb9; @synthesize=_addMemberURL
@property(retain) NSString *bulkChangeCheckCTag;	// G=0x35febd7d; S=0x35febd91; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0x35febd59; S=0x35febd6d; @synthesize=_bulkRequests
@property(readonly, assign) void *context;	// G=0x35febd31; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL ensureUpdatedCTag;	// G=0x35febcad; S=0x35febcc5; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSURL *folderURL;	// G=0x35febc51; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x35febd45; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x35febbf5; S=0x35febc09; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x35febbc9; S=0x35febbdd; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x35febc89; S=0x35febc9d; @synthesize=_nextCTag
@property(retain) NSString *previousCTag;	// G=0x35febc65; S=0x35febc79; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x35febcdd; S=0x35febcf1; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x35febc21; S=0x35febc39; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x35febd01; S=0x35febd19; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x35fe6f99
- (void)_bulkChange;	// 0x35fe8a11
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0x35fea989
- (void)_configureMultiGet:(id)get;	// 0x35fe9465
- (void)_getCTag;	// 0x35fe79ad
- (void)_getDataPayloads;	// 0x35fe9671
- (void)_getETags;	// 0x35fe8f89
- (void)_getOrder;	// 0x35fe92a1
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x35feba31
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x35fea1fd
- (void)_pushActions;	// 0x35fe7f49
- (void)_sendNextBatch;	// 0x35fe8421
- (unsigned)_submitTasks;	// 0x35fe76e5
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x35fea455
- (void)_tearDownAllUnsubmittedTasks;	// 0x35fe7531
// declared property getter: - (BOOL)actionsOnly;	// 0x35febda1
// declared property getter: - (id)addMemberURL;	// 0x35febba5
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x35fea1f9
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x35fe9f0d
- (void)bailWithError:(id)error;	// 0x35fe7661
// declared property getter: - (id)bulkChangeCheckCTag;	// 0x35febd7d
- (Class)bulkChangeTaskClass;	// 0x35fe7471
// declared property getter: - (id)bulkRequests;	// 0x35febd59
- (void)cancelTaskGroup;	// 0x35fe76a5
// declared property getter: - (void *)context;	// 0x35febd31
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x35fe74b5
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x35fe8ee9
- (id)copyGetTaskWithURL:(id)url;	// 0x35fe73a5
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x35fe73e9
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x35fe7ea5
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x35fe7dd5
- (id)dataContentType;	// 0x35fe742d
- (void)dealloc;	// 0x35fe71cd
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x35fead19
- (id)description;	// 0x35fe7335
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0x35febcad
// declared property getter: - (id)folderURL;	// 0x35febc51
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x35feb6d1
- (BOOL)isWhitelistedError:(id)error;	// 0x35fe9e9d
// declared property getter: - (id)localItemURLOrder;	// 0x35febd45
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x35febbf5
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x35febbc9
// declared property getter: - (id)nextCTag;	// 0x35febc89
// declared property getter: - (id)previousCTag;	// 0x35febc65
// declared property getter: - (id)previousSyncToken;	// 0x35febcdd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x35feaf4d
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x35fe9f11
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0x35febdb9
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x35febbb9
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0x35febd91
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x35febd6d
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0x35febcc5
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x35febc09
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x35febbdd
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x35febc9d
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0x35febc79
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x35febcf1
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x35febc39
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x35febd19
- (BOOL)shouldFetchMoreETags;	// 0x35feaf49
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x35fe74b9
- (void)startTaskGroup;	// 0x35fe9d99
- (void)syncAway;	// 0x35fe9e8d
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35feac51
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x35fe74bd
// declared property getter: - (BOOL)useMultiGet;	// 0x35febc21
// declared property getter: - (BOOL)useSyncCollection;	// 0x35febd01
@end
