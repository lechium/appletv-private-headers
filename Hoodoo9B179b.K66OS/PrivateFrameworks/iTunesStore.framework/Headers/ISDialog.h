/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSMutableDictionary, SSAuthenticationContext, NSLock;

@interface ISDialog : NSObject {
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
	BOOL _shouldPendInSetupIfNotAllowed;	// 52 = 0x34
	NSArray *_textFields;	// 56 = 0x38
	NSString *_title;	// 60 = 0x3c
	int _unlockActionButtonIndex;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
}
@property(assign) BOOL allowDuplicates;	// G=0x3695d405; S=0x3695d415; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x3695d425; S=0x3695d439; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x3695d45d; S=0x3695d46d; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x3695d47d; S=0x3695d491; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x3695d4b5; S=0x3695d4c5; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x3695d4d5; S=0x3695d4e5; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x3695cdb9; S=0x3695d18d; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x3695cef5; 
@property(assign) BOOL expectsResponse;	// G=0x3695d4f5; S=0x3695d505; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x3695d515; S=0x3695d525; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x3695d535; S=0x3695d545; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x3695d141; S=0x3695d211; 
@property(retain) NSString *message;	// G=0x3695d555; S=0x3695d569; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x3695d58d; S=0x3695d59d; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x3695d5ad; S=0x3695d5bd; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x3695d5cd; S=0x3695d5dd; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x3695d5ed; S=0x3695d5fd; @synthesize=_shouldHideButtonsInAwayView
@property(assign) BOOL shouldPendInSetupIfNotAllowed;	// G=0x3695d60d; S=0x3695d61d; @synthesize=_shouldPendInSetupIfNotAllowed
@property(retain) NSArray *textFields;	// G=0x3695d62d; S=0x3695d641; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x3695d665; S=0x3695d679; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x3695d69d; S=0x3695d6ad; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x3695c745
- (id)init;	// 0x3695b7f1
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x3695b331
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x3695b8a1
- (id)initWithError:(id)error;	// 0x3695bf4d
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x3695c28d
- (id)initWithTitle:(id)title message:(id)message;	// 0x3695c559
- (int)_kindForString:(id)string;	// 0x3695d399
// declared property getter: - (BOOL)allowDuplicates;	// 0x3695d405
// declared property getter: - (id)authenticationContext;	// 0x3695d425
// declared property getter: - (BOOL)authorizationIsForced;	// 0x3695d45d
// declared property getter: - (id)buttons;	// 0x3695d47d
- (id)copyUserNotification;	// 0x3695c795
- (void)dealloc;	// 0x3695c66d
// declared property getter: - (int)defaultButtonIndex;	// 0x3695d4b5
// declared property getter: - (BOOL)dismissOnLock;	// 0x3695d4d5
// declared property getter: - (id)displayCountKey;	// 0x3695cdb9
// declared property getter: - (BOOL)expectsResponse;	// 0x3695d4f5
// declared property getter: - (BOOL)groupsTextFields;	// 0x3695d515
- (void)incrementDisplayCount;	// 0x3695ce25
// declared property getter: - (BOOL)isDisplayable;	// 0x3695cef5
- (BOOL)isEqual:(id)equal;	// 0x3695cfbd
// declared property getter: - (int)kind;	// 0x3695d535
// declared property getter: - (int)maximumDisplayCount;	// 0x3695d141
// declared property getter: - (id)message;	// 0x3695d555
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x3695d58d
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x3695d415
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3695d439
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x3695d46d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x3695d491
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x3695d4c5
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x3695d4e5
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x3695d18d
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x3695d505
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x3695d525
// declared property setter: - (void)setKind:(int)kind;	// 0x3695d545
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x3695d211
// declared property setter: - (void)setMessage:(id)message;	// 0x3695d569
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x3695d59d
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x3695d5bd
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x3695d5dd
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x3695d5fd
// declared property setter: - (void)setShouldPendInSetupIfNotAllowed:(BOOL)pendInSetupIfNotAllowed;	// 0x3695d61d
// declared property setter: - (void)setTextFields:(id)fields;	// 0x3695d641
// declared property setter: - (void)setTitle:(id)title;	// 0x3695d679
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x3695d6ad
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x3695d25d
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x3695d5ad
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x3695d5cd
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x3695d5ed
// declared property getter: - (BOOL)shouldPendInSetupIfNotAllowed;	// 0x3695d60d
// declared property getter: - (id)textFields;	// 0x3695d62d
// declared property getter: - (id)title;	// 0x3695d665
// declared property getter: - (int)unlockActionButtonIndex;	// 0x3695d69d
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x3695d319
@end

