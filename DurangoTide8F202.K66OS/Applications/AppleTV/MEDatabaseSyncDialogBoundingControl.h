/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl, BRWaitSpinnerControl, BRTextControl;

@interface MEDatabaseSyncDialogBoundingControl : XXUnknownSuperclass {
	BRControl *_leftEdge;	// 44 = 0x2c
	BRControl *_topEdge;	// 48 = 0x30
	BRControl *_rightEdge;	// 52 = 0x34
	BRControl *_bottomEdge;	// 56 = 0x38
	BRWaitSpinnerControl *_spinner;	// 60 = 0x3c
	BRTextControl *_messageTextCtl;	// 64 = 0x40
	BRTextControl *_instructionsTextCtl;	// 68 = 0x44
}
- (id)init;	// 0x3f99
- (void)layoutSubcontrols;	// 0x4269
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3ea9
@end

