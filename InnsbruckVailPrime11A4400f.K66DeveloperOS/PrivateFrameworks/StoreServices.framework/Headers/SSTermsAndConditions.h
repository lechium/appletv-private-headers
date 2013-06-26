/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {
	BOOL _requiresAuthentication;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
	BOOL _userAccepted;	// 12 = 0xc
	long long _versionID;	// 16 = 0x10
}
@property(assign, nonatomic) NSString *currentText;	// G=0x32850141; S=0x32850151; @synthesize=_text
@property(assign, nonatomic) long long currentVersionIdentifier;	// G=0x32850161; S=0x32850179; @synthesize=_versionID
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;	// G=0x3285018d; @synthesize=_requiresAuthentication
@property(assign, nonatomic, getter=isUserAccepted) BOOL userAccepted;	// G=0x3285019d; S=0x328501ad; @synthesize=_userAccepted
- (id)initWithResponseData:(id)responseData error:(id *)error;	// 0x3284fdfd
- (id)copyWithZone:(NSZone *)zone;	// 0x3285009d
// declared property getter: - (id)currentText;	// 0x32850141
// declared property getter: - (long long)currentVersionIdentifier;	// 0x32850161
- (void)dealloc;	// 0x32850051
// declared property getter: - (BOOL)isUserAccepted;	// 0x3285019d
// declared property getter: - (BOOL)requiresAuthentication;	// 0x3285018d
// declared property setter: - (void)setCurrentText:(id)text;	// 0x32850151
// declared property setter: - (void)setCurrentVersionIdentifier:(long long)identifier;	// 0x32850179
// declared property setter: - (void)setUserAccepted:(BOOL)accepted;	// 0x328501ad
@end
