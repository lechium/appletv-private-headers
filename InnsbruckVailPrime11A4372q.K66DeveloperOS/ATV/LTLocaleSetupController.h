/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRTextWithSpinnerController;

__attribute__((visibility("hidden")))
@interface LTLocaleSetupController : XXUnknownSuperclass {
	BRTextWithSpinnerController *_spinner;	// 4 = 0x4
	BOOL _tryingToAutoset;	// 8 = 0x8
}
- (id)init;	// 0x4ab165
- (void).cxx_destruct;	// 0x4ab70d
- (void)_checkStoreFrontAndRemoveSpinner;	// 0x4ab59d
- (void)_removeSpinner;	// 0x4ab2a5
- (void)_setCountry:(id)country;	// 0x4ab2f9
- (void)_storeChangedTimeout:(id)timeout;	// 0x4ab68d
- (void)_storeLocationChanged:(id)changed;	// 0x4ab69d
- (id)autoPoppingSpinner;	// 0x4ab589
- (void)autosetLocale;	// 0x4ab369
- (void)dealloc;	// 0x4ab225
@end
