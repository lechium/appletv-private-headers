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
+ (id)sharedInstance;	// 0x313f1695
- (id)init;	// 0x313f1629
- (id)_simulateQueue;	// 0x313f1a61
- (int)accessPreflight;	// 0x313f1781
- (void)accessRequestWithCompletion:(id)completion;	// 0x313f17f5
- (void)callExternalChangeCallbacks:(BOOL)callbacks;	// 0x313f17bd
- (void)dealloc;	// 0x313f1669
- (void)simulate:(int)simulate;	// 0x313f1a01
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)access withDelay:(unsigned)delay;	// 0x313f1a31
@end

