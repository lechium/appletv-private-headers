/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStorageProtocol.h"

@protocol MSSubscribeStorageProtocolDelegate;

@protocol MSSubscribeStorageProtocol <MSStorageProtocol>
@property(assign, nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate;
- (void)abort;
// declared property getter: - (id)delegate;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
@end

