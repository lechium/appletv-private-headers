/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString, NSURL;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
@private
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x3389ffe1; S=0x3389fff1; @synthesize=_delegate
@property(readonly, assign) NSString *personID;	// G=0x3389ffd1; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3389fd41
- (void)_didFailAuthenticationWithError:(id)error;	// 0x3389ffad
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x3389ff7d
- (void)abort;	// 0x3389ff69
- (void)dealloc;	// 0x3389fed5
// declared property getter: - (id)delegate;	// 0x3389ffe1
// declared property getter: - (id)personID;	// 0x3389ffd1
- (void)queryConfiguration;	// 0x3389ff35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3389fff1
@end

