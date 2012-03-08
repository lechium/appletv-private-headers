/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"
#import "NSCopying.h"
#import "DAEAS-Structs.h"

@class NSSet, NSMutableSet, NSArray, ASMailMessage, NSString;

@interface ASFolderItemsSyncTask : ASTask <NSCopying> {
	NSString *_folderID;	// 104 = 0x68
	NSString *_previousSyncKey;	// 108 = 0x6c
	int _dataclass;	// 112 = 0x70
	NSArray *_actions;	// 116 = 0x74
	NSMutableSet *_rejectedServerIds;	// 120 = 0x78
	BOOL _isInitialSync;	// 124 = 0x7c
	BOOL _isInitialBootstrapSync;	// 125 = 0x7d
	BOOL _willUpdate;	// 126 = 0x7e
	BOOL _moreAvailable;	// 127 = 0x7f
	BOOL _isResyncAfterConnectionFailed;	// 128 = 0x80
	BOOL _haveShortcut121Response;	// 129 = 0x81
	int _numReplacedItems;	// 132 = 0x84
	int _numDownloadedElements;	// 136 = 0x88
	BOOL _isSpinning;	// 140 = 0x8c
	int _bodyTruncationBytes;	// 144 = 0x90
	int _mimeSupport;	// 148 = 0x94
	int _filterDays;	// 152 = 0x98
	ASMailMessage *_streamingMailMessage;	// 156 = 0x9c
	NSArray *_perservedActions;	// 160 = 0xa0
	NSArray *_pushedActions;	// 164 = 0xa4
	BOOL _hadFalseMoreAvailable;	// 168 = 0xa8
@private
	BOOL _deletesAsMoves;	// 169 = 0xa9
}
@property(retain) NSArray *actions;	// G=0x31df2b5d; S=0x31df2b71; @synthesize=_actions
@property(assign) int bodyTruncationBytes;	// G=0x31df2ab5; S=0x31df2ac5; @synthesize=_bodyTruncationBytes
@property(assign) int dataclass;	// G=0x31df2b95; S=0x31df2ba5; @synthesize=_dataclass
@property(assign) int filterDays;	// G=0x31df2ad5; S=0x31df2ae5; @synthesize=_filterDays
@property(readonly, assign) NSString *folderID;	// G=0x31df2b2d; @synthesize=_folderID
@property(assign) BOOL isInitialBootstrapSync;	// G=0x31df2bd5; S=0x31df2be5; @synthesize=_isInitialBootstrapSync
@property(assign) BOOL isInitialSync;	// G=0x31df2bb5; S=0x31df2bc5; @synthesize=_isInitialSync
@property(assign) BOOL isResyncAfterConnectionFailed;	// G=0x31df2c5d; S=0x31df2c6d; @synthesize=_isResyncAfterConnectionFailed
@property(assign, setter=setMIMESupport:) int mimeSupport;	// G=0x31df2a95; S=0x31df2aa5; @synthesize=_mimeSupport
@property(assign) BOOL moreAvailable;	// G=0x31df2bf5; S=0x31df2c05; @synthesize=_moreAvailable
@property(readonly, assign) int numDownloadedElements;	// G=0x31df29c5; converted property
@property(retain) NSArray *perservedActions;	// G=0x31df2c7d; S=0x31df2c91; @synthesize=_perservedActions
@property(copy) NSString *previousSyncKey;	// G=0x31df2af5; S=0x31df2b09; @synthesize=_previousSyncKey
@property(readonly, assign) NSString *previousSyncKeyForAgent;	// G=0x31df29d5; 
@property(retain) NSArray *pushedActions;	// G=0x31df2cb5; S=0x31df2cc9; @synthesize=_pushedActions
@property(readonly, assign) NSSet *rejectedServerIds;	// G=0x31df2c4d; @synthesize=_rejectedServerIds
@property(retain) ASMailMessage *streamingMailMessage;	// G=0x31df2c15; S=0x31df2c29; @synthesize=_streamingMailMessage
@property(assign) BOOL willUpdate;	// G=0x31df2b3d; S=0x31df2b4d; @synthesize=_willUpdate
- (id)initWithFolderID:(id)folderID;	// 0x31deffbd
- (id)initWithFolderID:(id)folderID deletesAsMoves:(BOOL)moves;	// 0x31deffd1
- (void)_addRejectedServerId:(id)anId;	// 0x31df2065
- (int)_bodyTruncationCode;	// 0x31df0831
- (void)_handleChangedLeaf:(id)leaf addedChangesPtr:(id *)ptr modifiedChangesPtr:(id *)ptr3 removedChangesPtr:(id *)ptr4;	// 0x31df0d95
- (void)_handleResponseToLeaf:(id)leaf addedResponsesPtr:(id *)ptr modifiedResponsesPtr:(id *)ptr3 removedResponsesPtr:(id *)ptr4 fetchedResponsesPtr:(id *)ptr5;	// 0x31df0e5d
- (int)_mimeSupportCode;	// 0x31df07f5
- (int)_mimeTruncationCode;	// 0x31df086d
- (void)_setSpinning:(BOOL)spinning;	// 0x31defcf9
// declared property getter: - (id)actions;	// 0x31df2b5d
- (void)appendActionData:(id)data;	// 0x31df0281
- (void)appendSupportedFieldsData:(id)data;	// 0x31df04e5
// declared property getter: - (int)bodyTruncationBytes;	// 0x31df2ab5
- (int)bodyType;	// 0x31df0251
- (BOOL)checkForErrorInContext:(id)context;	// 0x31df14e9
- (int)commandCode;	// 0x31defcf5
- (int)connectionActionForResponse:(id)response;	// 0x31df141d
- (id)copyWithZone:(NSZone *)zone;	// 0x31df0081
// declared property getter: - (int)dataclass;	// 0x31df2b95
- (void)dealloc;	// 0x31defed5
// declared property getter: - (int)filterDays;	// 0x31df2ad5
- (void)finishWithError:(id)error;	// 0x31df20cd
// declared property getter: - (id)folderID;	// 0x31df2b2d
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x31df14d5
- (int)handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x31df0f75
// declared property getter: - (BOOL)isInitialBootstrapSync;	// 0x31df2bd5
// declared property getter: - (BOOL)isInitialSync;	// 0x31df2bb5
// declared property getter: - (BOOL)isResyncAfterConnectionFailed;	// 0x31df2c5d
// declared property getter: - (int)mimeSupport;	// 0x31df2a95
// declared property getter: - (BOOL)moreAvailable;	// 0x31df2bf5
// converted property getter: - (int)numDownloadedElements;	// 0x31df29c5
- (double)percentComplete;	// 0x31df2881
// declared property getter: - (id)perservedActions;	// 0x31df2c7d
// declared property getter: - (id)previousSyncKey;	// 0x31df2af5
// declared property getter: - (id)previousSyncKeyForAgent;	// 0x31df29d5
- (BOOL)processContext:(id)context;	// 0x31df19f9
// declared property getter: - (id)pushedActions;	// 0x31df2cb5
// declared property getter: - (id)rejectedServerIds;	// 0x31df2c4d
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x31df10e9
- (void)reportStatusWithError:(id)error;	// 0x31df2a09
- (id)requestBody;	// 0x31df08a9
// declared property setter: - (void)setActions:(id)actions;	// 0x31df2b71
// declared property setter: - (void)setBodyTruncationBytes:(int)bytes;	// 0x31df2ac5
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x31df2ba5
// declared property setter: - (void)setFilterDays:(int)days;	// 0x31df2ae5
// declared property setter: - (void)setIsInitialBootstrapSync:(BOOL)sync;	// 0x31df2be5
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x31df2bc5
// declared property setter: - (void)setIsResyncAfterConnectionFailed:(BOOL)failed;	// 0x31df2c6d
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x31df2aa5
// declared property setter: - (void)setMoreAvailable:(BOOL)available;	// 0x31df2c05
// declared property setter: - (void)setPerservedActions:(id)actions;	// 0x31df2c91
// declared property setter: - (void)setPreviousSyncKey:(id)key;	// 0x31df2b09
// declared property setter: - (void)setPushedActions:(id)actions;	// 0x31df2cc9
// declared property setter: - (void)setStreamingMailMessage:(id)message;	// 0x31df2c29
// declared property setter: - (void)setWillUpdate:(BOOL)update;	// 0x31df2b4d
// declared property getter: - (id)streamingMailMessage;	// 0x31df2c15
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x31df2919
// declared property getter: - (BOOL)willUpdate;	// 0x31df2b3d
@end

