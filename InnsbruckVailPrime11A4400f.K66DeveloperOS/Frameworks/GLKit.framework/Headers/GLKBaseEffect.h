/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKNamedEffect.h"
#import </libobjc.A.h>
#import "GLKit-Structs.h"

@class GLKEffect, GLKEffectPropertyConstantColor, GLKEffectPropertyFog, GLKEffectPropertyLight, GLKEffectPropertyMaterial, NSArray, GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSString, NSMutableArray;

@interface GLKBaseEffect : NSObject <GLKNamedEffect> {
	unsigned char _colorMaterialEnabled;	// 4 = 0x4
	unsigned char _fogEnabled;	// 5 = 0x5
	GLKEffectPropertyTransform *_transform;	// 8 = 0x8
	int _lightingType;	// 12 = 0xc
	GLKEffectPropertyLight *_light0;	// 16 = 0x10
	GLKEffectPropertyLight *_light1;	// 20 = 0x14
	GLKEffectPropertyLight *_light2;	// 24 = 0x18
	GLKEffectPropertyMaterial *_material;	// 28 = 0x1c
	GLKEffectPropertyTexture *_texture2d0;	// 32 = 0x20
	GLKEffectPropertyTexture *_texture2d1;	// 36 = 0x24
	NSArray *_textureOrder;	// 40 = 0x28
	GLKVector4 _constantColor;	// 48 = 0x30
	GLKEffectPropertyFog *_fog;	// 64 = 0x40
	NSString *_label;	// 68 = 0x44
	unsigned char _lightModelTwoSided;	// 72 = 0x48
	unsigned char _useConstantColor;	// 73 = 0x49
	unsigned char _propertyArrayStale;	// 74 = 0x4a
	unsigned char _effectStale;	// 75 = 0x4b
	GLKEffectPropertyConstantColor *_constantColorProp;	// 76 = 0x4c
	NSMutableArray *_propertyArray;	// 80 = 0x50
	GLKEffect *_effect;	// 84 = 0x54
	unsigned _programName;	// 88 = 0x58
	GLKVector4 _lightModelAmbientColor;	// 96 = 0x60
}
@property(assign, nonatomic) unsigned char colorMaterialEnabled;	// G=0x2dd3b211; S=0x2dd3a7a9; @synthesize=_colorMaterialEnabled
@property(assign, nonatomic) GLKVector4 constantColor;	// G=0x2dd3a6d1; S=0x2dd3a6a1; @synthesize=_constantColor
@property(readonly, assign, nonatomic) GLKEffectPropertyConstantColor *constantColorProp;	// G=0x2dd3b27d; @synthesize=_constantColorProp
@property(assign, nonatomic) GLKEffect *effect;	// G=0x2dd3b2ed; S=0x2dd3b2fd; @synthesize=_effect
@property(assign, nonatomic) unsigned char effectStale;	// G=0x2dd3b2cd; S=0x2dd3b2dd; @synthesize=_effectStale
@property(readonly, assign, nonatomic) GLKEffectPropertyFog *fog;	// G=0x2dd3a601; @synthesize=_fog
@property(copy, nonatomic) NSString *label;	// G=0x2dd3b32d; S=0x2dd3b341; @synthesize=_label
@property(readonly, assign, nonatomic) GLKEffectPropertyLight *light0;	// G=0x2dd3a16d; @synthesize=_light0
@property(readonly, assign, nonatomic) GLKEffectPropertyLight *light1;	// G=0x2dd3a24d; @synthesize=_light1
@property(readonly, assign, nonatomic) GLKEffectPropertyLight *light2;	// G=0x2dd3a32d; @synthesize=_light2
@property(assign, nonatomic) GLKVector4 lightModelAmbientColor;	// G=0x2dd3b251; S=0x2dd3a701; @synthesize=_lightModelAmbientColor
@property(assign, nonatomic) unsigned char lightModelTwoSided;	// G=0x2dd3b221; S=0x2dd3a7e5; @synthesize=_lightModelTwoSided
@property(assign, nonatomic) int lightingType;	// G=0x2dd3b241; S=0x2dd3a821; @synthesize=_lightingType
@property(readonly, assign, nonatomic) GLKEffectPropertyMaterial *material;	// G=0x2dd3a40d; @synthesize=_material
@property(assign, nonatomic) unsigned programName;	// G=0x2dd3b30d; S=0x2dd3b31d; @synthesize=_programName
@property(readonly, assign, nonatomic) NSMutableArray *propertyArray;	// G=0x2dd3b2bd; @synthesize=_propertyArray
@property(assign, nonatomic) unsigned char propertyArrayStale;	// G=0x2dd3b29d; S=0x2dd3b2ad; @synthesize=_propertyArrayStale
@property(readonly, assign, nonatomic) GLKEffectPropertyTexture *texture2d0;	// G=0x2dd3a4c1; @synthesize=_texture2d0
@property(readonly, assign, nonatomic) GLKEffectPropertyTexture *texture2d1;	// G=0x2dd3a561; @synthesize=_texture2d1
@property(copy, nonatomic) NSArray *textureOrder;	// G=0x2dd3b269; S=0x2dd3a089; @synthesize=_textureOrder
@property(readonly, assign, nonatomic) GLKEffectPropertyTransform *transform;	// G=0x2dd3b231; @synthesize=_transform
@property(assign, nonatomic) unsigned char useConstantColor;	// G=0x2dd3b28d; S=0x2dd3a8b9; @synthesize=_useConstantColor
- (id)init;	// 0x2dd39e71
// declared property getter: - (unsigned char)colorMaterialEnabled;	// 0x2dd3b211
// declared property getter: - (GLKVector4)constantColor;	// 0x2dd3a6d1
// declared property getter: - (id)constantColorProp;	// 0x2dd3b27d
- (void)dealloc;	// 0x2dd3b159
- (id)description;	// 0x2dd3ac0d
// declared property getter: - (id)effect;	// 0x2dd3b2ed
// declared property getter: - (unsigned char)effectStale;	// 0x2dd3b2cd
// declared property getter: - (id)fog;	// 0x2dd3a601
// declared property getter: - (id)label;	// 0x2dd3b32d
// declared property getter: - (id)light0;	// 0x2dd3a16d
// declared property getter: - (id)light1;	// 0x2dd3a24d
// declared property getter: - (id)light2;	// 0x2dd3a32d
// declared property getter: - (GLKVector4)lightModelAmbientColor;	// 0x2dd3b251
// declared property getter: - (unsigned char)lightModelTwoSided;	// 0x2dd3b221
// declared property getter: - (int)lightingType;	// 0x2dd3b241
// declared property getter: - (id)material;	// 0x2dd3a40d
- (BOOL)perPixelLightingEnabled;	// 0x2dd3a959
- (BOOL)perVertexLightingEnabled;	// 0x2dd3a8e1
- (void)prepareToDraw;	// 0x2dd3abb1
// declared property getter: - (unsigned)programName;	// 0x2dd3b30d
// declared property getter: - (id)propertyArray;	// 0x2dd3b2bd
// declared property getter: - (unsigned char)propertyArrayStale;	// 0x2dd3b29d
// declared property setter: - (void)setColorMaterialEnabled:(unsigned char)enabled;	// 0x2dd3a7a9
// declared property setter: - (void)setConstantColor:(GLKVector4)color;	// 0x2dd3a6a1
// declared property setter: - (void)setEffect:(id)effect;	// 0x2dd3b2fd
// declared property setter: - (void)setEffectStale:(unsigned char)stale;	// 0x2dd3b2dd
// declared property setter: - (void)setLabel:(id)label;	// 0x2dd3b341
// declared property setter: - (void)setLightModelAmbientColor:(GLKVector4)color;	// 0x2dd3a701
// declared property setter: - (void)setLightModelTwoSided:(unsigned char)sided;	// 0x2dd3a7e5
// declared property setter: - (void)setLightingType:(int)type;	// 0x2dd3a821
// declared property setter: - (void)setProgramName:(unsigned)name;	// 0x2dd3b31d
// declared property setter: - (void)setPropertyArrayStale:(unsigned char)stale;	// 0x2dd3b2ad
// declared property setter: - (void)setTextureOrder:(id)order;	// 0x2dd3a089
// declared property setter: - (void)setUseConstantColor:(unsigned char)color;	// 0x2dd3a8b9
// declared property getter: - (id)texture2d0;	// 0x2dd3a4c1
// declared property getter: - (id)texture2d1;	// 0x2dd3a561
// declared property getter: - (id)textureOrder;	// 0x2dd3b269
// declared property getter: - (id)transform;	// 0x2dd3b231
- (void)updateBaseEffect;	// 0x2dd3a9d5
// declared property getter: - (unsigned char)useConstantColor;	// 0x2dd3b28d
@end
