/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import </libobjc.A.h>

@class GLKEffect;

@interface GLKEffectProperty : NSObject {
	int _location;	// 4 = 0x4
	char *_nameString;	// 8 = 0x8
	GLKEffectPropertyPrv *_prv;	// 12 = 0xc
	unsigned char _masksInitialized;	// 16 = 0x10
	char *_vshSource;	// 20 = 0x14
	char *_fshSource;	// 24 = 0x18
	GLKEffect *_effect;	// 28 = 0x1c
	unsigned long long _dirtyUniforms;	// 32 = 0x20
}
@property(assign, nonatomic) unsigned long long dirtyUniforms;	// G=0x2dd41121; S=0x2dd41139; @synthesize=_dirtyUniforms
@property(assign, nonatomic) GLKEffect *effect;	// G=0x2dd4116d; S=0x2dd40d01; @synthesize=_effect
@property(assign, nonatomic) char *fshSource;	// G=0x2dd41101; S=0x2dd41111; @synthesize=_fshSource
@property(assign, nonatomic) int location;	// G=0x2dd410b1; S=0x2dd410c1; @synthesize=_location
@property(assign, nonatomic) unsigned char masksInitialized;	// G=0x2dd4114d; S=0x2dd4115d; @synthesize=_masksInitialized
@property(assign, nonatomic) char *nameString;	// G=0x2dd410d1; S=0x2dd40d21; @synthesize=_nameString
@property(assign, nonatomic) char *vshSource;	// G=0x2dd410e1; S=0x2dd410f1; @synthesize=_vshSource
+ (void)logSetMasksWithLabel:(id)label obj:(id)obj typeStr:(id)str;	// 0x2dd40df9
+ (void)setStaticMasksWithVshRoot:(id)vshRoot fshRoot:(id)root;	// 0x2dd40de5
- (id)init;	// 0x2dd40c01
- (void)bind;	// 0x2dd40df1
- (void)dealloc;	// 0x2dd4101d
- (void)dirtyAllUniforms;	// 0x2dd40df5
// declared property getter: - (unsigned long long)dirtyUniforms;	// 0x2dd41121
// declared property getter: - (id)effect;	// 0x2dd4116d
- (GLKBigInt_s *)fshMask;	// 0x2dd41009
// declared property getter: - (char *)fshSource;	// 0x2dd41101
- (bool)includeFshShaderTextForRootNode:(id)rootNode;	// 0x2dd40de1
- (bool)includeVshShaderTextForRootNode:(id)rootNode;	// 0x2dd40ddd
- (void)initializeMasks;	// 0x2dd40ded
// declared property getter: - (int)location;	// 0x2dd410b1
// declared property getter: - (unsigned char)masksInitialized;	// 0x2dd4114d
// declared property getter: - (char *)nameString;	// 0x2dd410d1
// declared property setter: - (void)setDirtyUniforms:(unsigned long long)uniforms;	// 0x2dd41139
// declared property setter: - (void)setEffect:(id)effect;	// 0x2dd40d01
- (void)setFSHSource:(char *)source;	// 0x2dd40d81
// declared property setter: - (void)setFshSource:(char *)source;	// 0x2dd41111
// declared property setter: - (void)setLocation:(int)location;	// 0x2dd410c1
- (void)setMasks;	// 0x2dd40de9
// declared property setter: - (void)setMasksInitialized:(unsigned char)initialized;	// 0x2dd4115d
// declared property setter: - (void)setNameString:(char *)string;	// 0x2dd40d21
- (void)setShaderBindings;	// 0x2dd40db1
- (void)setVSHSource:(char *)source;	// 0x2dd40d51
// declared property setter: - (void)setVshSource:(char *)source;	// 0x2dd410f1
- (GLKBigInt_s *)vshMask;	// 0x2dd40ff5
// declared property getter: - (char *)vshSource;	// 0x2dd410e1
@end
