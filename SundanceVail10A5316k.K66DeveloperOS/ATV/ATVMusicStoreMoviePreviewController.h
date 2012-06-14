/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class NSDictionary, BRWaitPromptControl, NSTimer, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoviePreviewController : BRController {
	BRWaitPromptControl *_waitPrompt;	// 96 = 0x60
	NSTimer *_timer;	// 100 = 0x64
	NSDictionary *_dictionary;	// 104 = 0x68
	ATVURLDocument *_document;	// 108 = 0x6c
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x1cf531
- (id)init;	// 0x1cf57d
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x1cf581
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x1cfaf5
- (void)_showPromptTimer:(id)timer;	// 0x1cfdd9
- (BOOL)brEventAction:(id)action;	// 0x1cfe11
- (void)controlWasActivated;	// 0x1cf8d9
- (void)controlWasDeactivated;	// 0x1cfd65
- (void)dealloc;	// 0x1cf835
@end
