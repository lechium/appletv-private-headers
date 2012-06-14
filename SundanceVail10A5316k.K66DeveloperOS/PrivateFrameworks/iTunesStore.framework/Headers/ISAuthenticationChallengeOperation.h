/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
	ISAuthenticationChallenge *_challenge;	// 80 = 0x50
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x335302b5; S=0x335302c9; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x3352fff9
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x335301b9
// declared property getter: - (id)challenge;	// 0x335302b5
- (void)dealloc;	// 0x3352ffb5
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x3353005d
- (void)run;	// 0x33530109
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x335302c9
@end

