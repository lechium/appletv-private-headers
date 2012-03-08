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
@property(readonly, assign, nonatomic) unsigned count;	// G=0x35978099; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x359780ed; S=0x359780fd; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x359780b9; S=0x359780c9; @synthesize=m_name
+ (id)keylist;	// 0x35977ac1
- (id)init;	// 0x35977b71
- (id)initWithCoder:(id)coder;	// 0x35977c35
- (id)initWithName:(id)name keys:(id)keys;	// 0x35977b09
- (id)copyWithZone:(NSZone *)zone;	// 0x35977d05
// declared property getter: - (unsigned)count;	// 0x35978099
- (void)dealloc;	// 0x35977bd5
- (id)description;	// 0x35978019
- (void)encodeWithCoder:(id)coder;	// 0x35977cad
- (id)keyWithName:(id)name;	// 0x35977e5d
// declared property getter: - (id)keys;	// 0x359780ed
- (id)keysWithInteractionType:(id)interactionType;	// 0x35977f21
// declared property getter: - (id)name;	// 0x359780b9
// declared property setter: - (void)setKeys:(id)keys;	// 0x359780fd
// declared property setter: - (void)setName:(id)name;	// 0x359780c9
@end

