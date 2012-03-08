/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface LBSGUserProfile : PBCodable {
	NSString *_userName;	// 4 = 0x4
	NSString *_authToken;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *authToken;	// G=0x33aa623d; S=0x33aa624d; @synthesize=_authToken
@property(readonly, assign, nonatomic) BOOL hasAuthToken;	// G=0x33aa5fb5; 
@property(readonly, assign, nonatomic) BOOL hasUserName;	// G=0x33aa5f9d; 
@property(retain, nonatomic) NSString *userName;	// G=0x33aa6209; S=0x33aa6219; @synthesize=_userName
// declared property getter: - (id)authToken;	// 0x33aa623d
- (void)dealloc;	// 0x33aa5f45
- (id)description;	// 0x33aa5fcd
- (id)dictionaryRepresentation;	// 0x33aa603d
// declared property getter: - (BOOL)hasAuthToken;	// 0x33aa5fb5
// declared property getter: - (BOOL)hasUserName;	// 0x33aa5f9d
- (BOOL)readFrom:(id)from;	// 0x33aa60bd
// declared property setter: - (void)setAuthToken:(id)token;	// 0x33aa624d
// declared property setter: - (void)setUserName:(id)name;	// 0x33aa6219
// declared property getter: - (id)userName;	// 0x33aa6209
- (void)writeTo:(id)to;	// 0x33aa61b1
@end

