/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSArray, SSAuthenticationContext, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISDialog : NSObject {
@private
	BOOL _allowDuplicates;	// 4 = 0x4
	SSAuthenticationContext *_authenticationContext;	// 8 = 0x8
	BOOL _authorizationIsForced;	// 12 = 0xc
	NSArray *_buttons;	// 16 = 0x10
	int _defaultButtonIndex;	// 20 = 0x14
	NSString *_displayCountKey;	// 24 = 0x18
	BOOL _dismissOnLock;	// 28 = 0x1c
	BOOL _expectsResponse;	// 29 = 0x1d
	BOOL _groupsTextFields;	// 30 = 0x1e
	int _kind;	// 32 = 0x20
	NSLock *_lock;	// 36 = 0x24
	int _maxDisplayCount;	// 40 = 0x28
	NSString *_message;	// 44 = 0x2c
	BOOL _oneButtonPerLine;	// 48 = 0x30
	BOOL _shouldDismissAfterUnlock;	// 49 = 0x31
	BOOL _shouldDisplayAsTopMost;	// 50 = 0x32
	BOOL _shouldHideButtonsInAwayView;	// 51 = 0x33
	NSArray *_textFields;	// 52 = 0x34
	NSString *_title;	// 56 = 0x38
	int _unlockActionButtonIndex;	// 60 = 0x3c
	NSMutableDictionary *_userInfo;	// 64 = 0x40
}
@property(assign) BOOL allowDuplicates;	// G=0x331bf915; S=0x331bf925; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x331bf935; S=0x331bf949; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x331bf96d; S=0x331bf97d; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x331bf98d; S=0x331bf9a1; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x331bf9c5; S=0x331bf9d5; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x331bf9e5; S=0x331bf9f5; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x331bf2c9; S=0x331bf69d; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x331bf405; 
@property(assign) BOOL expectsResponse;	// G=0x331bfa05; S=0x331bfa15; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x331bfa25; S=0x331bfa35; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x331bfa45; S=0x331bfa55; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x331bf651; S=0x331bf721; 
@property(retain) NSString *message;	// G=0x331bfa65; S=0x331bfa79; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x331bfa9d; S=0x331bfaad; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x331bfabd; S=0x331bfacd; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x331bfadd; S=0x331bfaed; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x331bfafd; S=0x331bfb0d; @synthesize=_shouldHideButtonsInAwayView
@property(retain) NSArray *textFields;	// G=0x331bfb1d; S=0x331bfb31; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x331bfb55; S=0x331bfb69; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x331bfb8d; S=0x331bfb9d; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x331bec81
- (id)init;	// 0x331bdd2d
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x331bd86d
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x331bdddd
- (id)initWithError:(id)error;	// 0x331be489
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x331be7c9
- (id)initWithTitle:(id)title message:(id)message;	// 0x331bea95
- (int)_kindForString:(id)string;	// 0x331bf8a9
// declared property getter: - (BOOL)allowDuplicates;	// 0x331bf915
// declared property getter: - (id)authenticationContext;	// 0x331bf935
// declared property getter: - (BOOL)authorizationIsForced;	// 0x331bf96d
// declared property getter: - (id)buttons;	// 0x331bf98d
- (id)copyUserNotification;	// 0x331becd1
- (void)dealloc;	// 0x331beba9
// declared property getter: - (int)defaultButtonIndex;	// 0x331bf9c5
// declared property getter: - (BOOL)dismissOnLock;	// 0x331bf9e5
// declared property getter: - (id)displayCountKey;	// 0x331bf2c9
// declared property getter: - (BOOL)expectsResponse;	// 0x331bfa05
// declared property getter: - (BOOL)groupsTextFields;	// 0x331bfa25
- (void)incrementDisplayCount;	// 0x331bf335
// declared property getter: - (BOOL)isDisplayable;	// 0x331bf405
- (BOOL)isEqual:(id)equal;	// 0x331bf4cd
// declared property getter: - (int)kind;	// 0x331bfa45
// declared property getter: - (int)maximumDisplayCount;	// 0x331bf651
// declared property getter: - (id)message;	// 0x331bfa65
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x331bfa9d
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x331bf925
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x331bf949
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x331bf97d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x331bf9a1
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x331bf9d5
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x331bf9f5
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x331bf69d
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x331bfa15
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x331bfa35
// declared property setter: - (void)setKind:(int)kind;	// 0x331bfa55
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x331bf721
// declared property setter: - (void)setMessage:(id)message;	// 0x331bfa79
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x331bfaad
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x331bfacd
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x331bfaed
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x331bfb0d
// declared property setter: - (void)setTextFields:(id)fields;	// 0x331bfb31
// declared property setter: - (void)setTitle:(id)title;	// 0x331bfb69
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x331bfb9d
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x331bf76d
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x331bfabd
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x331bfadd
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x331bfafd
// declared property getter: - (id)textFields;	// 0x331bfb1d
// declared property getter: - (id)title;	// 0x331bfb55
// declared property getter: - (int)unlockActionButtonIndex;	// 0x331bfb8d
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x331bf829
@end

