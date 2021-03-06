/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library


@interface ABTCC : NSObject {
	BOOL _calledExternalChangeCallbacks;	// 4 = 0x4
	int _simulateType;	// 8 = 0x8
	BOOL _simulateAccessPrompt;	// 12 = 0xc
	BOOL _simulateAccessPromptGranted;	// 13 = 0xd
	unsigned _simulateAccessPromptDelay;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x329db725
- (id)init;	// 0x329db6b9
- (id)_simulateQueue;	// 0x329dbaf1
- (int)accessPreflight;	// 0x329db811
- (void)accessRequestWithCompletion:(id)completion;	// 0x329db885
- (void)callExternalChangeCallbacks:(BOOL)callbacks;	// 0x329db84d
- (void)dealloc;	// 0x329db6f9
- (void)simulate:(int)simulate;	// 0x329dba91
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)access withDelay:(unsigned)delay;	// 0x329dbac1
@end

