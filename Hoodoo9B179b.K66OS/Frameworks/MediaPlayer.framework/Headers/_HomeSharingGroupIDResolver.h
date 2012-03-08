/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSURLConnectionRequestDelegate.h"

@class NSString, SSURLConnectionRequest;

@interface _HomeSharingGroupIDResolver : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSString *_appleID;	// 4 = 0x4
	NSString *_password;	// 8 = 0x8
	SSURLConnectionRequest *_request;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	BOOL _success;	// 20 = 0x14
}
- (id)initWithAppleID:(id)appleID password:(id)password completionHandler:(id)handler;	// 0x309de7f1
- (void)dealloc;	// 0x309de881
- (void)request:(id)request didFailWithError:(id)error;	// 0x309deadd
- (void)requestDidFinish:(id)request;	// 0x309deb11
- (void)start;	// 0x309de921
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x309deb51
@end

