/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) int failureCount;	// G=0x33c7c661; 
@property(readonly, assign) BOOL hasPassword;	// G=0x33c7c665; 
@property(retain) NSString *localizedMessage;	// G=0x33c7c6ad; S=0x33c7c6c1; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x33c7c6d1; S=0x33c7c6e5; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x33c7c669; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x33c7c66d; 
@property(readonly, assign) NSString *user;	// G=0x33c7c671; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x33c7c6a5; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x33c7c6a9; 
- (void)cancelAuthentication;	// 0x33c7c635
- (void)dealloc;	// 0x33c7c5dd
// declared property getter: - (int)failureCount;	// 0x33c7c661
// declared property getter: - (BOOL)hasPassword;	// 0x33c7c665
// declared property getter: - (id)localizedMessage;	// 0x33c7c6ad
// declared property getter: - (id)localizedTitle;	// 0x33c7c6d1
// declared property getter: - (id)password;	// 0x33c7c669
// declared property getter: - (id)sender;	// 0x33c7c66d
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x33c7c6c1
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x33c7c6e5
- (void)useCredential:(id)credential;	// 0x33c7c675
// declared property getter: - (id)user;	// 0x33c7c671
// declared property getter: - (BOOL)userNameIsEditable;	// 0x33c7c6a5
// declared property getter: - (BOOL)userNameIsEmail;	// 0x33c7c6a9
@end

