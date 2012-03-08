/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSArray, NSString, NSMutableDictionary, SSAuthenticationContext;

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
	NSArray *_textFields;	// 52 = 0x34
	NSString *_title;	// 56 = 0x38
	int _unlockActionButtonIndex;	// 60 = 0x3c
	NSMutableDictionary *_userInfo;	// 64 = 0x40
}
@property(assign) BOOL allowDuplicates;	// G=0x341db7b5; S=0x341db7c5; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x341db7d5; S=0x341db7e9; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x341db80d; S=0x341db81d; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x341db82d; S=0x341db841; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x341db865; S=0x341db875; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x341db885; S=0x341db895; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x341db169; S=0x341db53d; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x341db2a5; 
@property(assign) BOOL expectsResponse;	// G=0x341db8a5; S=0x341db8b5; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x341db8c5; S=0x341db8d5; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x341db8e5; S=0x341db8f5; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x341db4f1; S=0x341db5c1; 
@property(retain) NSString *message;	// G=0x341db905; S=0x341db919; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x341db93d; S=0x341db94d; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x341db95d; S=0x341db96d; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x341db97d; S=0x341db98d; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x341db99d; S=0x341db9ad; @synthesize=_shouldHideButtonsInAwayView
@property(retain) NSArray *textFields;	// G=0x341db9bd; S=0x341db9d1; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x341db9f5; S=0x341dba09; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x341dba2d; S=0x341dba3d; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x341dab21
- (id)init;	// 0x341d9bcd
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x341d970d
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x341d9c7d
- (id)initWithError:(id)error;	// 0x341da329
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x341da669
- (id)initWithTitle:(id)title message:(id)message;	// 0x341da935
- (int)_kindForString:(id)string;	// 0x341db749
// declared property getter: - (BOOL)allowDuplicates;	// 0x341db7b5
// declared property getter: - (id)authenticationContext;	// 0x341db7d5
// declared property getter: - (BOOL)authorizationIsForced;	// 0x341db80d
// declared property getter: - (id)buttons;	// 0x341db82d
- (id)copyUserNotification;	// 0x341dab71
- (void)dealloc;	// 0x341daa49
// declared property getter: - (int)defaultButtonIndex;	// 0x341db865
// declared property getter: - (BOOL)dismissOnLock;	// 0x341db885
// declared property getter: - (id)displayCountKey;	// 0x341db169
// declared property getter: - (BOOL)expectsResponse;	// 0x341db8a5
// declared property getter: - (BOOL)groupsTextFields;	// 0x341db8c5
- (void)incrementDisplayCount;	// 0x341db1d5
// declared property getter: - (BOOL)isDisplayable;	// 0x341db2a5
- (BOOL)isEqual:(id)equal;	// 0x341db36d
// declared property getter: - (int)kind;	// 0x341db8e5
// declared property getter: - (int)maximumDisplayCount;	// 0x341db4f1
// declared property getter: - (id)message;	// 0x341db905
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x341db93d
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x341db7c5
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x341db7e9
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x341db81d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x341db841
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x341db875
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x341db895
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x341db53d
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x341db8b5
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x341db8d5
// declared property setter: - (void)setKind:(int)kind;	// 0x341db8f5
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x341db5c1
// declared property setter: - (void)setMessage:(id)message;	// 0x341db919
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x341db94d
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x341db96d
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x341db98d
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x341db9ad
// declared property setter: - (void)setTextFields:(id)fields;	// 0x341db9d1
// declared property setter: - (void)setTitle:(id)title;	// 0x341dba09
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x341dba3d
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x341db60d
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x341db95d
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x341db97d
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x341db99d
// declared property getter: - (id)textFields;	// 0x341db9bd
// declared property getter: - (id)title;	// 0x341db9f5
// declared property getter: - (int)unlockActionButtonIndex;	// 0x341dba2d
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x341db6c9
@end

