/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UINibKeyValuePair : NSObject {
	id object;	// 4 = 0x4
	NSString *keyPath;	// 8 = 0x8
	id value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *keyPath;	// G=0x31f8df15; @synthesize
@property(readonly, assign, nonatomic) id object;	// G=0x31f8df05; @synthesize
@property(readonly, assign, nonatomic) id value;	// G=0x31f8df25; @synthesize
- (id)initWithCoder:(id)coder;	// 0x31f8ddc5
- (id)initWithObject:(id)object keyPath:(id)path value:(id)value;	// 0x31f8db95
- (void)apply;	// 0x31f8dca9
- (void)applyForSimulator;	// 0x31f8dce5
- (void)dealloc;	// 0x31f8dc31
- (void)encodeWithCoder:(id)coder;	// 0x31f8de8d
// declared property getter: - (id)keyPath;	// 0x31f8df15
// declared property getter: - (id)object;	// 0x31f8df05
// declared property getter: - (id)value;	// 0x31f8df25
@end

