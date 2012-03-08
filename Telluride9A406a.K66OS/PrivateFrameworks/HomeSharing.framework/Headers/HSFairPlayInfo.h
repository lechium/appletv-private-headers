/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface HSFairPlayInfo : NSObject {
@private
	void *_hwInfo;	// 4 = 0x4
	NSArray *_requestsToSign;	// 8 = 0x8
	void *_session;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *deviceGUID;	// G=0x30142bbd; 
- (id)init;	// 0x30142a85
- (BOOL)_getHardwareInfo:(FairPlayHWInfo_ *)info;	// 0x3014364d
- (id)_hexStringForData:(id)data;	// 0x301436e5
- (id)beginNegotiation;	// 0x30142c3d
- (id)continueNegotationWithData:(id)data isComplete:(BOOL *)complete;	// 0x30142cbd
- (void)dealloc;	// 0x30142b45
// declared property getter: - (id)deviceGUID;	// 0x30142bbd
- (void)endMescalSession;	// 0x30142ef9
- (void)endSecuritySession;	// 0x30142d8d
- (id)processSignedResponseData:(id)data withSignature:(id)signature;	// 0x301434f5
- (id)securityInfoForURL:(id)url;	// 0x30142dd5
- (BOOL)setupMescalWithURL:(id)url certificateURL:(id)url2 requestsToSign:(id)sign userAgent:(id)agent;	// 0x30142f21
- (BOOL)shouldSignRequestAction:(id)action;	// 0x30143629
- (id)signatureForData:(id)data;	// 0x301435a1
@end

