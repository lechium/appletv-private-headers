/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSMutableDictionary.h> // Unknown library

@class NSMutableArray;

@interface BRRevertableDictionary : NSMutableDictionary {
@private
	NSMutableArray *_history;	// 4 = 0x4
}
- (id)_history;	// 0x33030985
- (void)dealloc;	// 0x3303093d
- (void)revert;	// 0x33030889
- (void)setDictionary:(id)dictionary;	// 0x330308fd
- (void)setRevertPoint;	// 0x33030841
@end
