/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "NSObject.h"
#import "MSDeleter.h"
#import "MSDeleteStreamsProtocolDelegate.h"

@class MSDeleteStreamsProtocol, NSMutableArray, MSMediaStreamDaemon, MSObjectQueue;
@protocol MSDeleterDelegate;

@protocol MSDeleter <NSObject>
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;
- (void)abort;
// declared property getter: - (id)delegate;
- (void)deleteAssetCollections:(id)collections;
- (void)performOutstandingActivities;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
@end

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {
	MSDeleteStreamsProtocol *_protocol;	// 28 = 0x1c
	int _state;	// 32 = 0x20
	MSObjectQueue *_deleteQueue;	// 36 = 0x24
	NSMutableArray *_requestedDeleteWrappers;	// 40 = 0x28
	int _batchSize;	// 44 = 0x2c
	int _maxErrorCount;	// 48 = 0x30
	id<MSDeleterDelegate> _delegate;	// 52 = 0x34
	MSMediaStreamDaemon *_daemon;	// 56 = 0x38
}
@property(assign, nonatomic) int batchSize;	// G=0x3715f7d9; S=0x3715f7e9; @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x3715f7b9; S=0x3715f7c9; @synthesize=_daemon
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// G=0x3715f799; S=0x3715f7a9; @synthesize=_delegate
+ (id)_clearInstantiatedDeletersByPersonID;	// 0x3715db25
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3715dba5
+ (void)abortAllActivities;	// 0x3715e179
+ (id)deleterForPersonID:(id)personID;	// 0x3715d9ed
+ (id)existingDeleterForPersonID:(id)personID;	// 0x3715db09
+ (void)forgetPersonID:(id)anId;	// 0x3715db39
+ (BOOL)isInRetryState;	// 0x3715e259
+ (id)nextActivityDate;	// 0x3715def9
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3715e00d
+ (id)personIDsWithOutstandingActivities;	// 0x3715e05d
+ (void)stopAllActivities;	// 0x3715e099
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3715e349
- (void).cxx_destruct;	// 0x3715f7f9
- (void)_abort;	// 0x3715f53d
- (id)_abortedError;	// 0x3715f4dd
- (void)_forget;	// 0x3715f749
- (BOOL)_isAllowedToDelete;	// 0x3715e629
- (BOOL)_isInRetryState;	// 0x3715f781
- (void)_sendDeleteRequest;	// 0x3715ea3d
- (void)_stop;	// 0x3715f459
- (void)_updateMasterManifest;	// 0x3715e57d
- (void)abort;	// 0x3715f761
// declared property getter: - (int)batchSize;	// 0x3715f7d9
// declared property getter: - (id)daemon;	// 0x3715f7b9
- (void)deactivate;	// 0x3715e4bd
- (void)dealloc;	// 0x3715e53d
// declared property getter: - (id)delegate;	// 0x3715f799
- (void)deleteAssetCollections:(id)collections;	// 0x3715e76d
- (void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;	// 0x3715ecc5
- (void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x3715ebd5
- (void)performOutstandingActivities;	// 0x3715e959
// declared property setter: - (void)setBatchSize:(int)size;	// 0x3715f7e9
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3715f7c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3715f7a9
- (void)stop;	// 0x3715f771
@end

