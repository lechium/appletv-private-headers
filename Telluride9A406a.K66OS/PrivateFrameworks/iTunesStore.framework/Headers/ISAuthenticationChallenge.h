/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
	NSString *_localizedMessage;	// 4 = 0x4
	NSString *_localizedTitle;	// 8 = 0x8
}
@property(readonly, assign) int failureCount;	// G=0x341d53bd; 
@property(readonly, assign) BOOL hasPassword;	// G=0x341d53c1; 
@property(retain) NSString *localizedMessage;	// G=0x341d5409; S=0x341d541d; @synthesize=_localizedMessage
@property(retain) NSString *localizedTitle;	// G=0x341d5441; S=0x341d5455; @synthesize=_localizedTitle
@property(readonly, assign) NSString *password;	// G=0x341d53c5; 
@property(readonly, assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x341d53c9; 
@property(readonly, assign) NSString *user;	// G=0x341d53cd; 
@property(readonly, assign) BOOL userNameIsEditable;	// G=0x341d5401; 
@property(readonly, assign) BOOL userNameIsEmail;	// G=0x341d5405; 
- (void)cancelAuthentication;	// 0x341d5391
- (void)dealloc;	// 0x341d5339
// declared property getter: - (int)failureCount;	// 0x341d53bd
// declared property getter: - (BOOL)hasPassword;	// 0x341d53c1
// declared property getter: - (id)localizedMessage;	// 0x341d5409
// declared property getter: - (id)localizedTitle;	// 0x341d5441
// declared property getter: - (id)password;	// 0x341d53c5
// declared property getter: - (id)sender;	// 0x341d53c9
// declared property setter: - (void)setLocalizedMessage:(id)message;	// 0x341d541d
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x341d5455
- (void)useCredential:(id)credential;	// 0x341d53d1
// declared property getter: - (id)user;	// 0x341d53cd
// declared property getter: - (BOOL)userNameIsEditable;	// 0x341d5401
// declared property getter: - (BOOL)userNameIsEmail;	// 0x341d5405
@end

