/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsPINEntryViewDelegate.h"
#import "BRViewController.h"

@class SettingsPINEntryView;

__attribute__((visibility("hidden")))
@interface ATVPINController : BRViewController <SettingsPINEntryViewDelegate> {
	id _pinEntryCompleteBlock;	// 104 = 0x68
	id _pinVerifiedByUserBlock;	// 108 = 0x6c
	SettingsPINEntryView *_pinView;	// 112 = 0x70
}
@property(copy, nonatomic) id pinEntryCompleteBlock;	// G=0x2bca65; S=0x2bca79; @synthesize=_pinEntryCompleteBlock
@property(copy, nonatomic) id pinVerifiedByUserBlock;	// G=0x2bca89; S=0x2bca9d; @synthesize=_pinVerifiedByUserBlock
@property(retain, nonatomic) SettingsPINEntryView *pinView;	// G=0x2bcaad; S=0x2bcabd; @synthesize=_pinView
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable title:(id)title prompt:(id)prompt initialPINCode:(id)code hideDigits:(BOOL)digits;	// 0x2bc72d
- (void).cxx_destruct;	// 0x2bcae5
- (void)pinEntryComplete:(id)complete;	// 0x2bc9b9
// declared property getter: - (id)pinEntryCompleteBlock;	// 0x2bca65
- (void)pinFailedTryAgainWithTitle:(id)title prompt:(id)prompt;	// 0x2bc951
- (void)pinVerifiedByUser;	// 0x2bca19
// declared property getter: - (id)pinVerifiedByUserBlock;	// 0x2bca89
// declared property getter: - (id)pinView;	// 0x2bcaad
// declared property setter: - (void)setPinEntryCompleteBlock:(id)block;	// 0x2bca79
// declared property setter: - (void)setPinVerifiedByUserBlock:(id)block;	// 0x2bca9d
// declared property setter: - (void)setPinView:(id)view;	// 0x2bcabd
- (void)wasPushed;	// 0x2bc8b1
@end
