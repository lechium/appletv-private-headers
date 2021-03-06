/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

#import "JSON.h"


__attribute__((visibility("hidden")))
@interface JSONWriter : JSON {
}
- (BOOL)appendArray:(id)array into:(id)into;	// 0x339f50d5
- (BOOL)appendDictionary:(id)dictionary into:(id)into;	// 0x339f4e15
- (BOOL)appendString:(id)string into:(id)into;	// 0x339f5289
- (BOOL)appendValue:(id)value into:(id)into;	// 0x339f4c5d
- (id)indent;	// 0x339f4a5d
- (id)stringWithObject:(id)object;	// 0x339f4aa5
@end

