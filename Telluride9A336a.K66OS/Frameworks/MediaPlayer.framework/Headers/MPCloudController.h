/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class HSSagaClient;

@interface MPCloudController : NSObject {
@private
	BOOL _isCloudEnabled;	// 4 = 0x4
	BOOL _isUpdateInProgress;	// 5 = 0x5
	HSSagaClient *_sagaClient;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasCloudLockerAccount;	// G=0x35bed0d1; 
@property(readonly, assign, nonatomic) BOOL isCloudEnabled;	// G=0x35bed3c9; @synthesize=_isCloudEnabled
@property(readonly, assign, nonatomic) BOOL isUpdateInProgress;	// G=0x35bed12d; @synthesize=_isUpdateInProgress
+ (id)sharedCloudController;	// 0x35bece89
- (id)init;	// 0x35becef5
- (void)_initializeUpdateInProgressState;	// 0x35bed221
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x35becfa5
- (void)becomeActive;	// 0x35becfc5
- (void)dealloc;	// 0x35becf59
// declared property getter: - (BOOL)hasCloudLockerAccount;	// 0x35bed0d1
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x35bed10d
// declared property getter: - (BOOL)isCloudEnabled;	// 0x35bed3c9
// declared property getter: - (BOOL)isUpdateInProgress;	// 0x35bed12d
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x35bed201
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x35bed155
- (void)resignActive;	// 0x35bed175
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x35bed195
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids completionHandler:(id)handler;	// 0x35bed1b5
@end
