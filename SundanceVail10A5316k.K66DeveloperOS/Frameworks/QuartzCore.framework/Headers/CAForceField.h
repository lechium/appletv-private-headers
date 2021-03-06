/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"

@class CAValueFunction, CALayer, NSString;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32b11eed; S=0x32b11efd; 
@property(retain) CAValueFunction *function;	// G=0x32b11f69; S=0x32b11f79; 
@property(retain) CALayer *layer;	// G=0x32b11f15; S=0x32b11f25; 
@property(copy) NSString *name;	// G=0x32b11e99; S=0x32b11ea9; 
+ (id)defaultValueForKey:(id)key;	// 0x32b11e55
+ (id)forceField;	// 0x32b11e1d
- (id)init;	// 0x32b11e59
- (id)initWithCoder:(id)coder;	// 0x32b122f9
- (Object *)CA_copyRenderValue;	// 0x32b12035
- (id)copyWithZone:(NSZone *)zone;	// 0x32b12171
- (void)dealloc;	// 0x32b11fbd
- (void)encodeWithCoder:(id)coder;	// 0x32b1222d
// declared property getter: - (id)function;	// 0x32b11f69
// declared property getter: - (BOOL)isEnabled;	// 0x32b11eed
// declared property getter: - (id)layer;	// 0x32b11f15
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b1221d
// declared property getter: - (id)name;	// 0x32b11e99
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32b11efd
// declared property setter: - (void)setFunction:(id)function;	// 0x32b11f79
// declared property setter: - (void)setLayer:(id)layer;	// 0x32b11f25
// declared property setter: - (void)setName:(id)name;	// 0x32b11ea9
- (void)setValue:(id)value forKey:(id)key;	// 0x32b12125
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32b12165
- (id)valueForKey:(id)key;	// 0x32b120f1
- (id)valueForKeyPath:(id)keyPath;	// 0x32b1215d
@end

