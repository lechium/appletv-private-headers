/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrContactsController : BRMediaMenuController {
	ATVInternetPhotosAccount *_account;	// 176 = 0xb0
	int _mode;	// 180 = 0xb4
	id _screenSaverSelectionBlock;	// 184 = 0xb8
	id _photoSelectionBlock;	// 188 = 0xbc
}
@property(copy, nonatomic) id photoSelectionBlock;	// G=0x1a1b05; S=0x1a1b19; @synthesize=_photoSelectionBlock
@property(copy, nonatomic) id screenSaverSelectionBlock;	// G=0x1a1ae1; S=0x1a1af5; @synthesize=_screenSaverSelectionBlock
- (id)initWithMode:(int)mode forAccount:(id)account;	// 0x1a173d
- (void)_handleAccountSelection:(id)selection;	// 0x1a1bc9
- (void)_handleReturnToFlickrSelection:(id)flickrSelection;	// 0x1a1b29
- (void)_providerUpdated:(id)updated;	// 0x1a1da1
- (void)dealloc;	// 0x1a1a39
- (BOOL)isNetworkDependent;	// 0x1a1add
// declared property getter: - (id)photoSelectionBlock;	// 0x1a1b05
// declared property getter: - (id)screenSaverSelectionBlock;	// 0x1a1ae1
// declared property setter: - (void)setPhotoSelectionBlock:(id)block;	// 0x1a1b19
// declared property setter: - (void)setScreenSaverSelectionBlock:(id)block;	// 0x1a1af5
@end

