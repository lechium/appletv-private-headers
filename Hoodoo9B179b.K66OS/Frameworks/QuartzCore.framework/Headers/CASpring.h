/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layerA;	// 8 = 0x8
	CALayer *_layerB;	// 12 = 0xc
	CGPoint _attachmentPointA;	// 16 = 0x10
	CGPoint _attachmentPointB;	// 24 = 0x18
	CAValueFunction *_function;	// 32 = 0x20
	float _stiffness;	// 36 = 0x24
	float _damping;	// 40 = 0x28
	float _restLength;	// 44 = 0x2c
	BOOL _enabled;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	void *_priv;	// 56 = 0x38
}
@property(assign) CGPoint attachmentPointA;	// G=0x34f6bf01; S=0x34f6bf19; 
@property(assign) CGPoint attachmentPointB;	// G=0x34f6bf2d; S=0x34f6bf45; 
@property(assign) float damping;	// G=0x34f6bf79; S=0x34f6bf89; 
@property(assign) id delegate;	// G=0x34f6bfc9; S=0x34f6bfd9; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x34f6beb5; S=0x34f6bec5; 
@property(retain) CAValueFunction *function;	// G=0x34f6bfb9; S=0x34f6c0c1; 
@property(retain) CALayer *layerA;	// G=0x34f6bee1; S=0x34f6c031; 
@property(retain) CALayer *layerB;	// G=0x34f6bef1; S=0x34f6c079; 
@property(copy) NSString *name;	// G=0x34f6bea5; S=0x34f6bfe9; 
@property(assign) float restLength;	// G=0x34f6bf99; S=0x34f6bfa9; 
@property(assign) float stiffness;	// G=0x34f6bf59; S=0x34f6bf69; 
+ (id)defaultValueForKey:(id)key;	// 0x34f6bea1
+ (id)spring;	// 0x34f6c4e1
- (id)init;	// 0x34f6c519
- (id)initWithCoder:(id)coder;	// 0x34f6c5dd
- (Object *)CA_copyRenderValue;	// 0x34f6c8ed
// declared property getter: - (CGPoint)attachmentPointA;	// 0x34f6bf01
// declared property getter: - (CGPoint)attachmentPointB;	// 0x34f6bf2d
- (id)copyWithZone:(NSZone *)zone;	// 0x34f6c109
// declared property getter: - (float)damping;	// 0x34f6bf79
- (void)dealloc;	// 0x34f6ca91
// declared property getter: - (id)delegate;	// 0x34f6bfc9
- (void)encodeWithCoder:(id)coder;	// 0x34f6c279
// declared property getter: - (id)function;	// 0x34f6bfb9
// declared property getter: - (BOOL)isEnabled;	// 0x34f6beb5
// declared property getter: - (id)layerA;	// 0x34f6bee1
// declared property getter: - (id)layerB;	// 0x34f6bef1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34f6c269
// declared property getter: - (id)name;	// 0x34f6bea5
// declared property getter: - (float)restLength;	// 0x34f6bf99
// declared property setter: - (void)setAttachmentPointA:(CGPoint)a;	// 0x34f6bf19
// declared property setter: - (void)setAttachmentPointB:(CGPoint)b;	// 0x34f6bf45
// declared property setter: - (void)setDamping:(float)damping;	// 0x34f6bf89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34f6bfd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x34f6bec5
// declared property setter: - (void)setFunction:(id)function;	// 0x34f6c0c1
// declared property setter: - (void)setLayerA:(id)a;	// 0x34f6c031
// declared property setter: - (void)setLayerB:(id)b;	// 0x34f6c079
// declared property setter: - (void)setName:(id)name;	// 0x34f6bfe9
// declared property setter: - (void)setRestLength:(float)length;	// 0x34f6bfa9
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x34f6bf69
- (void)setValue:(id)value forKey:(id)key;	// 0x34f6c881
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x34f6c86d
// declared property getter: - (float)stiffness;	// 0x34f6bf59
- (id)valueForKey:(id)key;	// 0x34f6c8b9
- (id)valueForKeyPath:(id)keyPath;	// 0x34f6c879
@end

