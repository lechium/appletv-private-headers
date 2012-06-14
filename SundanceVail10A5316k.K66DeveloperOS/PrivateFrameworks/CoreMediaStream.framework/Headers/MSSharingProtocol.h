/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSArray, NSString;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : NSObject {
@private
	MSShPCContext _context;	// 4 = 0x4
	NSString *_personID;	// 88 = 0x58
	NSURL *_inviteURL;	// 92 = 0x5c
	NSURL *_manageURL;	// 96 = 0x60
	NSURL *_respondURL;	// 100 = 0x64
	NSURL *_statusURL;	// 104 = 0x68
	NSArray *_shares;	// 108 = 0x6c
	int _transactionType;	// 112 = 0x70
	id<MSSharingProtocolDelegate> _delegate;	// 116 = 0x74
}
@property(assign, nonatomic) id<MSSharingProtocolDelegate> delegate;	// G=0x339a6565; S=0x339a6575; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x339a6585; @synthesize=_personID
+ (id)_dictShareStateFromShareState:(int)shareState;	// 0x339a5095
+ (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x339a5f35
+ (id)_shareDictFromShare:(id)share;	// 0x339a52c5
+ (id)_shareDictsArrayFromShares:(id)shares;	// 0x339a5695
+ (id)_shareFromShareDict:(id)shareDict;	// 0x339a50b9
+ (int)_shareStateFromShareDictShareState:(id)shareDictShareState;	// 0x339a5075
+ (id)_sharesFromShareDictsArray:(id)shareDictsArray;	// 0x339a556d
+ (id)shareFromPushUserInfo:(id)pushUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3 outError:(id *)error;	// 0x339a5fe1
+ (id)shareStateFromProtocol:(id)protocol;	// 0x339a5ef5
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x339a4cdd
- (void).cxx_destruct;	// 0x339a6595
- (void)_checkForFailedInvitesWithResponse:(id)response;	// 0x339a5a7d
- (void)_didFailAuthenticationWithError:(id)error;	// 0x339a5e15
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x339a5e39
- (void)_didFindShareState:(id)state;	// 0x339a5a25
- (void)_didFinishTransactionWithResponseObject:(id)responseObject error:(id)error;	// 0x339a5d81
- (void)abort;	// 0x339a5ec1
- (void)dealloc;	// 0x339a5025
// declared property getter: - (id)delegate;	// 0x339a6565
- (void)deleteShares:(id)shares;	// 0x339a59a1
- (void)modifyShares:(id)shares;	// 0x339a591d
// declared property getter: - (id)personID;	// 0x339a6585
- (void)requestCurrentShareState;	// 0x339a58d9
- (void)sendInvitations:(id)invitations;	// 0x339a57bd
- (void)sendResponseToInvitation:(id)invitation accept:(BOOL)accept;	// 0x339a584d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339a6575
@end

