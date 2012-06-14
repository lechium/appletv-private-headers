/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UINibKeyValuePair : NSObject {
@private
	id object;	// 4 = 0x4
	NSString *keyPath;	// 8 = 0x8
	id value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *keyPath;	// G=0x3041d5d5; @synthesize
@property(readonly, assign, nonatomic) id object;	// G=0x3041d5c5; @synthesize
@property(readonly, assign, nonatomic) id value;	// G=0x3041d5e5; @synthesize
- (id)initWithCoder:(id)coder;	// 0x3041d485
- (id)initWithObject:(id)object keyPath:(id)path value:(id)value;	// 0x3041d255
- (void)apply;	// 0x3041d369
- (void)applyForSimulator;	// 0x3041d3a5
- (void)dealloc;	// 0x3041d2f1
- (void)encodeWithCoder:(id)coder;	// 0x3041d54d
// declared property getter: - (id)keyPath;	// 0x3041d5d5
// declared property getter: - (id)object;	// 0x3041d5c5
// declared property getter: - (id)value;	// 0x3041d5e5
@end

