/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSString.h> // Unknown library
#import "AppSupport-Structs.h"


@interface _CPBundleIdentifierString : NSString {
	NSString *_executablePath;	// 4 = 0x4
	NSString *_bundleIdentifierOrProcessName;	// 8 = 0x8
	BOOL _isProcessName;	// 12 = 0xc
}
- (id)_initWithExecutablePath:(id)executablePath;	// 0x3434cb89
- (BOOL)_isProcessName;	// 0x3434ce35
- (void)_loadBundleIdentifierOrProcessName;	// 0x3434cc41
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3434ce99
- (void)dealloc;	// 0x3434cbdd
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3434ced5
- (unsigned)length;	// 0x3434ce5d
@end

