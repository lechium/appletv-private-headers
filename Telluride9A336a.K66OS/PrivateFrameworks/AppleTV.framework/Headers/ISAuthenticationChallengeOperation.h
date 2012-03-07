/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface ISAuthenticationChallengeOperation : ISDialogOperation {
@private
	ISAuthenticationChallenge *_challenge;	// 84 = 0x54
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x33bd071d; S=0x33bd0731; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x33bd0475
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x33bd0621
// declared property getter: - (id)challenge;	// 0x33bd071d
- (void)dealloc;	// 0x33bd0431
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x33bd04d9
- (void)run;	// 0x33bd0585
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x33bd0731
@end
