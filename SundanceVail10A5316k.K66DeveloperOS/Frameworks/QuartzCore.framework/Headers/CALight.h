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

@class NSString;

@interface CALight : NSObject <NSCopying, NSCoding> {
@private
	void *_attr;	// 4 = 0x4
	void *_priv;	// 8 = 0x8
}
@property(assign) float ambientIntensity;	// G=0x32b045cd; S=0x32b045e1; 
@property(assign) CGColorRef color;	// G=0x32b04645; S=0x32b04659; 
@property(assign) float coneAngle;	// G=0x32b04741; S=0x32b04755; 
@property(assign) float coneEdgeSoftness;	// G=0x32b04769; S=0x32b0477d; 
@property(assign) float diffuseIntensity;	// G=0x32b045f5; S=0x32b04609; 
@property(assign) CAPoint3D direction;	// G=0x32b04689; S=0x32b046a5; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32b04575; S=0x32b04589; 
@property(assign) float falloff;	// G=0x32b04719; S=0x32b0472d; 
@property(assign) float falloffDistance;	// G=0x32b046f1; S=0x32b04705; 
@property(retain) id image;	// G=0x32b04791; S=0x32b047a5; 
@property(copy) NSString *imageBlendMode;	// G=0x32b0483d; S=0x32b04851; 
@property(assign) float imageNormalAngle;	// G=0x32b04815; S=0x32b04829; 
@property(assign) float imageRotation;	// G=0x32b047ed; S=0x32b04801; 
@property(assign) float intensity;	// G=0x32b045a5; S=0x32b045b9; 
@property(copy) NSString *name;	// G=0x32b04519; S=0x32b0452d; 
@property(assign) CAPoint3D position;	// G=0x32b046bd; S=0x32b046d9; 
@property(assign) float specularIntensity;	// G=0x32b0461d; S=0x32b04631; 
@property(copy) NSString *type;	// G=0x32b044e5; S=0x32b044f9; 
+ (id)defaultValueForKey:(id)key;	// 0x32b043e9
+ (id)lightWithType:(id)type;	// 0x32b043ad
- (id)init;	// 0x32b043ed
- (id)initWithCoder:(id)coder;	// 0x32b04f59
- (id)initWithType:(id)type;	// 0x32b044b1
- (Object *)CA_copyRenderValue;	// 0x32b0490d
// declared property getter: - (float)ambientIntensity;	// 0x32b045cd
// declared property getter: - (CGColorRef)color;	// 0x32b04645
// declared property getter: - (float)coneAngle;	// 0x32b04741
// declared property getter: - (float)coneEdgeSoftness;	// 0x32b04769
- (id)copyWithZone:(NSZone *)zone;	// 0x32b04b7d
- (void)dealloc;	// 0x32b04899
// declared property getter: - (float)diffuseIntensity;	// 0x32b045f5
// declared property getter: - (CAPoint3D)direction;	// 0x32b04689
- (void)encodeWithCoder:(id)coder;	// 0x32b04f51
// declared property getter: - (float)falloff;	// 0x32b04719
// declared property getter: - (float)falloffDistance;	// 0x32b046f1
// declared property getter: - (id)image;	// 0x32b04791
// declared property getter: - (id)imageBlendMode;	// 0x32b0483d
// declared property getter: - (float)imageNormalAngle;	// 0x32b04815
// declared property getter: - (float)imageRotation;	// 0x32b047ed
// declared property getter: - (float)intensity;	// 0x32b045a5
// declared property getter: - (BOOL)isEnabled;	// 0x32b04575
// declared property getter: - (id)name;	// 0x32b04519
// declared property getter: - (CAPoint3D)position;	// 0x32b046bd
// declared property setter: - (void)setAmbientIntensity:(float)intensity;	// 0x32b045e1
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x32b04659
// declared property setter: - (void)setConeAngle:(float)angle;	// 0x32b04755
// declared property setter: - (void)setConeEdgeSoftness:(float)softness;	// 0x32b0477d
// declared property setter: - (void)setDiffuseIntensity:(float)intensity;	// 0x32b04609
// declared property setter: - (void)setDirection:(CAPoint3D)direction;	// 0x32b046a5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32b04589
// declared property setter: - (void)setFalloff:(float)falloff;	// 0x32b0472d
// declared property setter: - (void)setFalloffDistance:(float)distance;	// 0x32b04705
// declared property setter: - (void)setImage:(id)image;	// 0x32b047a5
// declared property setter: - (void)setImageBlendMode:(id)mode;	// 0x32b04851
// declared property setter: - (void)setImageNormalAngle:(float)angle;	// 0x32b04829
// declared property setter: - (void)setImageRotation:(float)rotation;	// 0x32b04801
// declared property setter: - (void)setIntensity:(float)intensity;	// 0x32b045b9
// declared property setter: - (void)setName:(id)name;	// 0x32b0452d
// declared property setter: - (void)setPosition:(CAPoint3D)position;	// 0x32b046d9
// declared property setter: - (void)setSpecularIntensity:(float)intensity;	// 0x32b04631
// declared property setter: - (void)setType:(id)type;	// 0x32b044f9
- (void)setValue:(id)value forKey:(id)key;	// 0x32b04b31
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32b04b71
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x32b04ca9
// declared property getter: - (float)specularIntensity;	// 0x32b0461d
// declared property getter: - (id)type;	// 0x32b044e5
- (id)valueForKey:(id)key;	// 0x32b04afd
- (id)valueForKeyPath:(id)keyPath;	// 0x32b04b69
@end

