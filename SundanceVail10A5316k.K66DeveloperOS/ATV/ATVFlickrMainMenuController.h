/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"

@class ATVFlickrProvider, NSString, ATVFlickrSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
	BOOL _isScreenSaverMenu;	// 172 = 0xac
	ATVFlickrSearchAgent *_searchAgent;	// 176 = 0xb0
	BOOL _searching;	// 180 = 0xb4
	NSString *_activeSearchTerm;	// 184 = 0xb8
	ATVFlickrProvider *_persistentAccountProvider;	// 188 = 0xbc
}
+ (void)initialize;	// 0x187265
+ (id)menuController;	// 0x1871d9
+ (id)screenSaverMenuController;	// 0x18721d
- (id)init;	// 0x187309
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x18731d
- (void)_accountLoaded:(id)loaded;	// 0x1883a1
- (void)_handleAccountSelection:(id)selection;	// 0x188071
- (void)_handleAddSelection:(id)selection;	// 0x187d45
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x188189
- (void)_handleSearchSelection:(id)selection;	// 0x187ec9
- (void)_searchComplete:(id)complete;	// 0x188649
- (void)_searchTermRemoved:(id)removed;	// 0x188951
- (id)accessibilityLabel;	// 0x187d35
- (void)dealloc;	// 0x1878b5
- (long)defaultIndex;	// 0x187979
- (BOOL)isNetworkDependent;	// 0x187d31
- (float)listVerticalOffset;	// 0x187959
- (void)textDidChange:(id)text;	// 0x1879ad
- (void)textDidEndEditing:(id)text;	// 0x1879b1
@end

