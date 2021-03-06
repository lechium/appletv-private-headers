/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keys;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3032e099; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x3032e0ed; S=0x3032e0fd; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x3032e0b9; S=0x3032e0c9; @synthesize=m_name
+ (id)keylist;	// 0x3032dac1
- (id)init;	// 0x3032db71
- (id)initWithCoder:(id)coder;	// 0x3032dc35
- (id)initWithName:(id)name keys:(id)keys;	// 0x3032db09
- (id)copyWithZone:(NSZone *)zone;	// 0x3032dd05
// declared property getter: - (unsigned)count;	// 0x3032e099
- (void)dealloc;	// 0x3032dbd5
- (id)description;	// 0x3032e019
- (void)encodeWithCoder:(id)coder;	// 0x3032dcad
- (id)keyWithName:(id)name;	// 0x3032de5d
// declared property getter: - (id)keys;	// 0x3032e0ed
- (id)keysWithInteractionType:(id)interactionType;	// 0x3032df21
// declared property getter: - (id)name;	// 0x3032e0b9
// declared property setter: - (void)setKeys:(id)keys;	// 0x3032e0fd
// declared property setter: - (void)setName:(id)name;	// 0x3032e0c9
@end

