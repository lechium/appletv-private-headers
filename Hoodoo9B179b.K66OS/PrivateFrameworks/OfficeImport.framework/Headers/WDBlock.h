/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject {
@private
	WDText *mText;	// 4 = 0x4
}
- (id)init;	// 0x329baf9d
- (id)initWithText:(id)text;	// 0x328663fd
- (int)blockType;	// 0x329baf89
- (void)clearProperties;	// 0x329baf99
- (id)document;	// 0x328666d1
- (BOOL)isEmpty;	// 0x329baf95
- (id)newRunIterator;	// 0x329baf91
- (id)runIterator;	// 0x329baf8d
- (id)text;	// 0x328743b9
- (int)textType;	// 0x32866be1
@end

