/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSDownloadSession.h"

@class NSString;

@interface SSDownloadHandlerSession : SSDownloadSession {
}
@property(assign) BOOL blocksOtherDownloads;	// G=0x33cb2a1d; S=0x33cb2bb9; 
@property(assign) BOOL canBePaused;	// G=0x33cb2a6d; S=0x33cb2bd5; 
@property(readonly, assign) NSString *downloadPhase;	// G=0x33cb2ad1; 
@property(assign) BOOL needsPowerAssertion;	// G=0x33cb2b55; S=0x33cb2bf1; 
- (void)_finishWithType:(int)type error:(id)error;	// 0x33cb2d25
- (void)_setBool:(BOOL)aBool forSessionProperty:(const char *)sessionProperty;	// 0x33cb2dc9
// declared property getter: - (BOOL)blocksOtherDownloads;	// 0x33cb2a1d
// declared property getter: - (BOOL)canBePaused;	// 0x33cb2a6d
- (void)disavowSessionWithError:(id)error;	// 0x33cb2abd
// declared property getter: - (id)downloadPhase;	// 0x33cb2ad1
- (void)finishSessionWithSuccess:(BOOL)success error:(id)error;	// 0x33cb2b35
// declared property getter: - (BOOL)needsPowerAssertion;	// 0x33cb2b55
- (void)releaseSessionControl;	// 0x33cb2ba5
// declared property setter: - (void)setBlocksOtherDownloads:(BOOL)downloads;	// 0x33cb2bb9
// declared property setter: - (void)setCanBePaused:(BOOL)paused;	// 0x33cb2bd5
// declared property setter: - (void)setNeedsPowerAssertion:(BOOL)assertion;	// 0x33cb2bf1
- (void)setPercentComplete:(float)complete;	// 0x33cb2c0d
- (void)setStatusDescription:(id)description;	// 0x33cb2c9d
@end

