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
- (id)init;	// 0x3136af9d
- (id)initWithText:(id)text;	// 0x312163fd
- (int)blockType;	// 0x3136af89
- (void)clearProperties;	// 0x3136af99
- (id)document;	// 0x312166d1
- (BOOL)isEmpty;	// 0x3136af95
- (id)newRunIterator;	// 0x3136af91
- (id)runIterator;	// 0x3136af8d
- (id)text;	// 0x312243b9
- (int)textType;	// 0x31216be1
@end
