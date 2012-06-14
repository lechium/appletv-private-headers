/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString *_languageToSet;	// 296 = 0x128
}
- (void)commit;	// 0x372b4779
- (void)dealloc;	// 0x372b4015
- (void)didFinishCommit;	// 0x372b486d
- (id)language:(id)language;	// 0x372b48d9
- (void)rotateView:(id)view toOrientation:(int)orientation;	// 0x372b4625
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x372b489d
- (void)setupController;	// 0x372b490d
- (void)showBlackViewWithLabel:(id)label;	// 0x372b40b1
@end

