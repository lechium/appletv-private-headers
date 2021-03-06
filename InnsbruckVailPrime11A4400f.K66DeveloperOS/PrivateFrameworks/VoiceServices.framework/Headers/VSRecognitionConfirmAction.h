/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VSRecognitionRecognizeAction.h"

@class NSAttributedString, NSString;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
	VSRecognitionAction *_confirmedAction;	// 64 = 0x40
	VSRecognitionAction *_deniedAction;	// 68 = 0x44
	struct {
		unsigned initializing : 1;
		unsigned confirmed : 1;
	} _confirmFlags;	// 72 = 0x48
}
@property(retain) VSRecognitionAction *confirmedAction;	// G=0x32e38879; S=0x32e38835; converted property
@property(retain) VSRecognitionAction *deniedAction;	// G=0x32e388cd; S=0x32e38889; converted property
- (id)init;	// 0x32e3867d
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x32e386f9
- (void)_setConfirmed:(BOOL)confirmed;	// 0x32e38815
- (int)completionType;	// 0x32e387b1
// converted property getter: - (id)confirmedAction;	// 0x32e38879
- (void)dealloc;	// 0x32e3874d
// converted property getter: - (id)deniedAction;	// 0x32e388cd
// converted property setter: - (void)setConfirmedAction:(id)action;	// 0x32e38835
// converted property setter: - (void)setDeniedAction:(id)action;	// 0x32e38889
@end

