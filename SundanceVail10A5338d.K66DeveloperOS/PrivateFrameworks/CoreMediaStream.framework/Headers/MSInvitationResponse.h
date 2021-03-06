/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSShare;

@interface MSInvitationResponse : NSObject {
	MSShare *_invitation;	// 4 = 0x4
	BOOL _accept;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL accept;	// G=0x33751441; S=0x33751451; @synthesize=_accept
@property(retain, nonatomic) MSShare *invitation;	// G=0x33751409; S=0x33751419; @synthesize=_invitation
+ (id)responseWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x33751331
- (id)initWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x33751385
- (void).cxx_destruct;	// 0x33751461
// declared property getter: - (BOOL)accept;	// 0x33751441
// declared property getter: - (id)invitation;	// 0x33751409
// declared property setter: - (void)setAccept:(BOOL)accept;	// 0x33751451
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x33751419
@end

