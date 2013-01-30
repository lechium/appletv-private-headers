/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
	MSDSPCContext _context;	// 12 = 0xc
	NSMutableArray *_collectionsInFlight;	// 92 = 0x5c
}
@property(assign, nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate;	// @dynamic
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33950d01
- (void).cxx_destruct;	// 0x33951771
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x33951709
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x33951109
- (void)_resetConnectionVariables;	// 0x33951759
- (void)abort;	// 0x33950e59
- (void)sendDeletionRequestForAssetCollections:(id)assetCollections;	// 0x33950e6d
@end
