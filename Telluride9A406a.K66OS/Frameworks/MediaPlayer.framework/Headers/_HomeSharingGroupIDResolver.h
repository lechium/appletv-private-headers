/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "SSURLConnectionRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class SSURLConnectionRequest, NSString;

@interface _HomeSharingGroupIDResolver : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSString *_appleID;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	SSURLConnectionRequest *_request;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	BOOL _success;	// 20 = 0x14
}
- (id)initWithAppleID:(id)appleID password:(id)password completionHandler:(id)handler;	// 0x31a623a5
- (void)dealloc;	// 0x31a62435
- (void)request:(id)request didFailWithError:(id)error;	// 0x31a62691
- (void)requestDidFinish:(id)request;	// 0x31a626c5
- (void)start;	// 0x31a624d5
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x31a62705
@end

