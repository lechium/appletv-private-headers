/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSKeyedUnarchiver.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
@private
	NSDictionary *_defaultValues;	// 72 = 0x48
}
- (id)initForReadingWithData:(id)data defaultValues:(id)values;	// 0x304acda9
- (void)dealloc;	// 0x304acdfd
- (id)decodeObjectForKey:(id)key;	// 0x304ace49
@end

