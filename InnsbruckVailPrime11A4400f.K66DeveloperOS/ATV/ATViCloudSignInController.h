/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface ATViCloudSignInController : BRViewController {
	BOOL _suppressSignInDialog;	// 104 = 0x68
	BOOL _canDisplay;	// 105 = 0x69
	BOOL _haveAppleID;	// 106 = 0x6a
	int _response;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL canDisplay;	// G=0xb36ed; S=0xb3769; @synthesize=_canDisplay
@property(assign, nonatomic) BOOL haveAppleID;	// G=0xb3779; S=0xb3789; @synthesize=_haveAppleID
@property(assign, nonatomic) int response;	// G=0xb3729; S=0xb3739; @synthesize=_response
@property(assign, nonatomic) BOOL suppressSignInDialog;	// G=0xb3749; S=0xb3759; @synthesize=_suppressSignInDialog
- (id)init;	// 0xb3171
- (void)_dismiss;	// 0xb36c5
// declared property getter: - (BOOL)canDisplay;	// 0xb36ed
// declared property getter: - (BOOL)haveAppleID;	// 0xb3779
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb361d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xb36b9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb34ed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb36a1
// declared property getter: - (int)response;	// 0xb3729
// declared property setter: - (void)setCanDisplay:(BOOL)display;	// 0xb3769
// declared property setter: - (void)setHaveAppleID:(BOOL)anId;	// 0xb3789
// declared property setter: - (void)setResponse:(int)response;	// 0xb3739
// declared property setter: - (void)setSuppressSignInDialog:(BOOL)dialog;	// 0xb3759
// declared property getter: - (BOOL)suppressSignInDialog;	// 0xb3749
@end
