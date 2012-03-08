/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, SSAuthenticationContext, NSLock, NSArray;

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
@property(assign) BOOL allowDuplicates;	// G=0x3041971d; S=0x3041972d; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x3041973d; S=0x30419751; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x30419775; S=0x30419785; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x30419795; S=0x304197a9; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x304197cd; S=0x304197dd; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x304197ed; S=0x304197fd; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x304190d1; S=0x304194a5; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x3041920d; 
@property(assign) BOOL expectsResponse;	// G=0x3041980d; S=0x3041981d; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x3041982d; S=0x3041983d; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x3041984d; S=0x3041985d; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x30419459; S=0x30419529; 
@property(retain) NSString *message;	// G=0x3041986d; S=0x30419881; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x304198a5; S=0x304198b5; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x304198c5; S=0x304198d5; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x304198e5; S=0x304198f5; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x30419905; S=0x30419915; @synthesize=_shouldHideButtonsInAwayView
@property(retain) NSArray *textFields;	// G=0x30419925; S=0x30419939; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x3041995d; S=0x30419971; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x30419995; S=0x304199a5; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x30418a89
- (id)init;	// 0x30417b35
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x304199b5
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x30417be5
- (id)initWithError:(id)error;	// 0x30418291
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x304185d1
- (id)initWithTitle:(id)title message:(id)message;	// 0x3041889d
- (int)_kindForString:(id)string;	// 0x304196b1
// declared property getter: - (BOOL)allowDuplicates;	// 0x3041971d
// declared property getter: - (id)authenticationContext;	// 0x3041973d
// declared property getter: - (BOOL)authorizationIsForced;	// 0x30419775
// declared property getter: - (id)buttons;	// 0x30419795
- (id)copyUserNotification;	// 0x30418ad9
- (void)dealloc;	// 0x304189b1
// declared property getter: - (int)defaultButtonIndex;	// 0x304197cd
// declared property getter: - (BOOL)dismissOnLock;	// 0x304197ed
// declared property getter: - (id)displayCountKey;	// 0x304190d1
// declared property getter: - (BOOL)expectsResponse;	// 0x3041980d
// declared property getter: - (BOOL)groupsTextFields;	// 0x3041982d
- (void)incrementDisplayCount;	// 0x3041913d
// declared property getter: - (BOOL)isDisplayable;	// 0x3041920d
- (BOOL)isEqual:(id)equal;	// 0x304192d5
// declared property getter: - (int)kind;	// 0x3041984d
// declared property getter: - (int)maximumDisplayCount;	// 0x30419459
// declared property getter: - (id)message;	// 0x3041986d
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x304198a5
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x3041972d
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x30419751
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x30419785
// declared property setter: - (void)setButtons:(id)buttons;	// 0x304197a9
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x304197dd
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x304197fd
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x304194a5
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x3041981d
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x3041983d
// declared property setter: - (void)setKind:(int)kind;	// 0x3041985d
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x30419529
// declared property setter: - (void)setMessage:(id)message;	// 0x30419881
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x304198b5
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x304198d5
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x304198f5
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x30419915
// declared property setter: - (void)setTextFields:(id)fields;	// 0x30419939
// declared property setter: - (void)setTitle:(id)title;	// 0x30419971
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x304199a5
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x30419575
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x304198c5
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x304198e5
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x30419905
// declared property getter: - (id)textFields;	// 0x30419925
// declared property getter: - (id)title;	// 0x3041995d
// declared property getter: - (int)unlockActionButtonIndex;	// 0x30419995
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x30419631
@end

