/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library

@class NSTextTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSRTFReaderTableState : NSObject {
@private
	NSTextTable *_currentTable;	// 4 = 0x4
	NSTextTable *_previousTable;	// 8 = 0x8
	NSMutableArray *_currentRowArray;	// 12 = 0xc
	NSMutableArray *_previousRowArray;	// 16 = 0x10
	int _currentRow;	// 20 = 0x14
	int _currentColumn;	// 24 = 0x18
	int _currentDefinitionColumn;	// 28 = 0x1c
	BOOL _currentRowIsLast;	// 32 = 0x20
}
- (void)dealloc;	// 0x35f0f4d9
@end

