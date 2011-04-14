/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

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
@property(assign) CGPoint attachmentPointA;	// G=0x30296a3d; S=0x30296a55; 
@property(assign) CGPoint attachmentPointB;	// G=0x30296a6d; S=0x30296a85; 
@property(assign) float damping;	// G=0x30296abd; S=0x30296acd; 
@property(assign) id delegate;	// G=0x30296b0d; S=0x30296b1d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x302969f5; S=0x30296a05; 
@property(retain) CAValueFunction *function;	// G=0x30296afd; S=0x30296e85; 
@property(retain) CALayer *layerA;	// G=0x30296a1d; S=0x30296efd; 
@property(retain) CALayer *layerB;	// G=0x30296a2d; S=0x30296ec1; 
@property(copy) NSString *name;	// G=0x302969e5; S=0x30296f39; 
@property(assign) float restLength;	// G=0x30296add; S=0x30296aed; 
@property(assign) float stiffness;	// G=0x30296a9d; S=0x30296aad; 
+ (id)defaultValueForKey:(id)key;	// 0x302969e1
+ (id)spring;	// 0x30296f75
- (id)init;	// 0x30297025
- (id)initWithCoder:(id)coder;	// 0x30297159
- (Object *)CA_copyRenderValue;	// 0x30297389
// declared property getter: - (CGPoint)attachmentPointA;	// 0x30296a3d
// declared property getter: - (CGPoint)attachmentPointB;	// 0x30296a6d
- (id)copyWithZone:(NSZone *)zone;	// 0x30296d51
// declared property getter: - (float)damping;	// 0x30296abd
- (void)dealloc;	// 0x30296fa5
// declared property getter: - (id)delegate;	// 0x30296b0d
- (void)encodeWithCoder:(id)coder;	// 0x30296b2d
// declared property getter: - (id)function;	// 0x30296afd
// declared property getter: - (BOOL)isEnabled;	// 0x302969f5
// declared property getter: - (id)layerA;	// 0x30296a1d
// declared property getter: - (id)layerB;	// 0x30296a2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30296d3d
// declared property getter: - (id)name;	// 0x302969e5
// declared property getter: - (float)restLength;	// 0x30296add
// declared property setter: - (void)setAttachmentPointA:(CGPoint)a;	// 0x30296a55
// declared property setter: - (void)setAttachmentPointB:(CGPoint)b;	// 0x30296a85
// declared property setter: - (void)setDamping:(float)damping;	// 0x30296acd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30296b1d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x30296a05
// declared property setter: - (void)setFunction:(id)function;	// 0x30296e85
// declared property setter: - (void)setLayerA:(id)a;	// 0x30296efd
// declared property setter: - (void)setLayerB:(id)b;	// 0x30296ec1
// declared property setter: - (void)setName:(id)name;	// 0x30296f39
// declared property setter: - (void)setRestLength:(float)length;	// 0x30296aed
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x30296aad
- (void)setValue:(id)value forKey:(id)key;	// 0x3029710d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x30297149
// declared property getter: - (float)stiffness;	// 0x30296a9d
- (id)valueForKey:(id)key;	// 0x302970e1
- (id)valueForKeyPath:(id)keyPath;	// 0x3029713d
@end

