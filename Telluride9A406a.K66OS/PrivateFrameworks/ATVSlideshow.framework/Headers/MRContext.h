/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class EAGLContext, NSMutableDictionary, NSString, MRShader, MRImage, MRImageManager;
@protocol MZMediaManagement;

@interface MRContext : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mGLContext;	// 8 = 0x8
	CGSize mPixelSize;	// 12 = 0xc
	int mVRAM;	// 20 = 0x14
	float mFieldOfViewFactor;	// 24 = 0x18
	float mProjectionMatrix[16];	// 28 = 0x1c
	id<MZMediaManagement> mAssetManager;	// 92 = 0x5c
	MRImageManager *mImageManager;	// 96 = 0x60
	BOOL mIsLocalContext;	// 100 = 0x64
	BOOL mIsFlipped;	// 101 = 0x65
	BOOL mBlendingIsEnabled;	// 102 = 0x66
	int mBlendingType;	// 104 = 0x68
	BOOL mCullingIsEnabled;	// 108 = 0x6c
	BOOL mCullFrontfacing;	// 109 = 0x6d
	BOOL mDepthTestIsEnabled;	// 110 = 0x6e
	BOOL mIsUsingIntelGPU;	// 111 = 0x6f
	BOOL mIsUsingIntelGMA950;	// 112 = 0x70
	BOOL mPrefersSharedVRAM;	// 113 = 0x71
	BOOL mSupportsFragmentShaders;	// 114 = 0x72
	float mModelViewMatrix[16];	// 116 = 0x74
	float mTextureMatrix[4][16];	// 180 = 0xb4
	float mNormal[3];	// 436 = 0x1b4
	int mScissorRect[4];	// 448 = 0x1c0
	const float *mVertex2DPointer;	// 464 = 0x1d0
	const float *mVertex3DPointer;	// 468 = 0x1d4
	const float *mColorsPointer;	// 472 = 0x1d8
	const float *mNormalsPointer;	// 476 = 0x1dc
	float *mTextureCoordinatesPointer[4];	// 480 = 0x1e0
	const float *mInSpriteCoordinatesPointer;	// 496 = 0x1f0
	BOOL mVertexArrayIsEnabled;	// 500 = 0x1f4
	BOOL mForeColorArrayIsEnabled;	// 501 = 0x1f5
	BOOL mNormalArrayIsEnabled;	// 502 = 0x1f6
	BOOL mTextureCoordinatesArrayIsEnabled[4];	// 503 = 0x1f7
	BOOL mInSpriteCoordinatesArrayIsEnabled;	// 507 = 0x1fb
	NSMutableDictionary *mVertexAttributes;	// 508 = 0x1fc
	float mLocalAspectRatio;	// 512 = 0x200
	float mForeColor[4];	// 516 = 0x204
	float mBackColor[4];	// 532 = 0x214
	NSString *mShaderID;	// 548 = 0x224
	MRShader *mCurrentShader;	// 552 = 0x228
	MRImage *mTextureUnitImages[4];	// 556 = 0x22c
	int mTextureUnitUsedForFragmentCoordinates;	// 572 = 0x23c
	NSMutableDictionary *mTemporaryUniforms;	// 576 = 0x240
	MRImage *mBlackImage;	// 580 = 0x244
}
@property(readonly, assign) float aspectRatio;	// G=0x3499ac3d; 
@property(retain) id<MZMediaManagement> assetManager;	// G=0x3499d951; S=0x3499d965; @synthesize=mAssetManager
@property(readonly, assign) const float *backColor;	// G=0x3499b925; 
@property(readonly, assign) MRContext *baseContext;	// G=0x3499d941; @synthesize=mBaseContext
@property(readonly, assign) CGColorSpaceRef colorSpace;	// G=0x3499ac59; 
@property(readonly, assign) const float *foreColor;	// G=0x3499b4a5; 
@property(readonly, assign) BOOL foreColorIsOpaqueWhite;	// G=0x3499b4b5; 
@property(readonly, assign) EAGLContext *glContext;	// G=0x3499da25; @synthesize=mGLContext
@property(readonly, assign) MRImageManager *imageManager;	// G=0x3499d989; @synthesize=mImageManager
@property(readonly, assign) BOOL isDoubleBuffered;	// G=0x3499ac99; 
@property(assign, nonatomic) BOOL isFlipped;	// G=0x3499d9d5; S=0x3499b171; @synthesize=mIsFlipped
@property(readonly, assign) BOOL isUsingIntelGMA950;	// G=0x3499da05; @synthesize=mIsUsingIntelGMA950
@property(readonly, assign) BOOL isUsingIntelGPU;	// G=0x3499d9f5; @synthesize=mIsUsingIntelGPU
@property(assign) float localAspectRatio;	// G=0x3499d9b5; S=0x3499d9c5; @synthesize=mLocalAspectRatio
@property(readonly, assign) unsigned long maxDimension;	// G=0x3499aca1; 
@property(readonly, assign) const float *modelViewMatrix;	// G=0x3499ce35; 
@property(readonly, assign) CGColorSpaceRef monochromaticColorSpace;	// G=0x3499ac79; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x3499d999; S=0x3499a97d; @synthesize=mPixelSize
@property(readonly, assign) BOOL prefersSharedVRAM;	// G=0x3499da15; @synthesize=mPrefersSharedVRAM
@property(readonly, assign) const float *projectionMatrix;	// G=0x3499ce25; 
@property(readonly, assign) NSString *shaderID;	// G=0x3499da45; @synthesize=mShaderID
@property(readonly, assign) CGSize size;	// G=0x3499abe5; 
@property(readonly, assign) BOOL supportsFragmentShaders;	// G=0x3499d9e5; @synthesize=mSupportsFragmentShaders
@property(readonly, assign) unsigned virtualScreen;	// G=0x3499ac9d; 
@property(readonly, assign) int vram;	// G=0x3499da35; @synthesize=mVRAM
- (id)initLocalWithContext:(id)context glContext:(id)context2 andSize:(CGSize)size;	// 0x3499a531
- (id)initWithEAGLContext:(id)eaglcontext andAssetManager:(id)manager;	// 0x3499a2ed
- (void)_applyForeColor;	// 0x3499b509
// declared property getter: - (float)aspectRatio;	// 0x3499ac3d
// declared property getter: - (id)assetManager;	// 0x3499d951
// declared property getter: - (const float *)backColor;	// 0x3499b925
// declared property getter: - (id)baseContext;	// 0x3499d941
- (id)beginLocalContextWithSize:(CGSize)size backgroundColor:(const float *)color state:(XXStruct_vue6hD *)state;	// 0x3499ada5
- (void)blend:(int)blend;	// 0x3499b1a9
- (void)cleanup;	// 0x3499a875
- (void)clear:(int)clear;	// 0x3499b321
// declared property getter: - (CGColorSpaceRef)colorSpace;	// 0x3499ac59
- (BOOL)commitShaderChange;	// 0x3499bdf9
- (void)composeForeColor:(const float *)color saveTo:(float *)to;	// 0x3499b745
- (void)composeForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x3499b829
- (void)composeModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x3499cf15
- (void)cull:(int)cull;	// 0x3499b25d
- (void)dealloc;	// 0x3499a7f5
- (void)depthTest:(BOOL)test;	// 0x3499b2d5
- (void)drawLinesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x3499d8cd
- (void)drawTriangleStripFromOffset:(unsigned)offset count:(unsigned)count;	// 0x3499d835
- (void)drawTrianglesFromOffset:(unsigned)offset count:(unsigned)count;	// 0x3499d881
- (void)finalize;	// 0x3499a835
- (void)flush;	// 0x3499aca9
// declared property getter: - (const float *)foreColor;	// 0x3499b4a5
// declared property getter: - (BOOL)foreColorIsOpaqueWhite;	// 0x3499b4b5
// declared property getter: - (id)glContext;	// 0x3499da25
// declared property getter: - (id)imageManager;	// 0x3499d989
- (id)imageSetOnTextureUnit:(unsigned)unit;	// 0x3499bdad
// declared property getter: - (BOOL)isDoubleBuffered;	// 0x3499ac99
// declared property getter: - (BOOL)isFlipped;	// 0x3499d9d5
// declared property getter: - (BOOL)isUsingIntelGMA950;	// 0x3499da05
// declared property getter: - (BOOL)isUsingIntelGPU;	// 0x3499d9f5
// declared property getter: - (float)localAspectRatio;	// 0x3499d9b5
- (void)lock;	// 0x3499a975
// declared property getter: - (unsigned long)maxDimension;	// 0x3499aca1
// declared property getter: - (const float *)modelViewMatrix;	// 0x3499ce35
// declared property getter: - (CGColorSpaceRef)monochromaticColorSpace;	// 0x3499ac79
// declared property getter: - (CGSize)pixelSize;	// 0x3499d999
// declared property getter: - (BOOL)prefersSharedVRAM;	// 0x3499da15
// declared property getter: - (const float *)projectionMatrix;	// 0x3499ce25
- (void)purgeResources:(BOOL)resources;	// 0x3499ad85
- (void)restoreBackColor:(const float *)color;	// 0x3499babd
- (void)restoreForeColor:(const float *)color;	// 0x3499b911
- (void)restoreModelViewMatrix:(float [16])matrix;	// 0x3499cf51
- (void)restoreScissorRect:(const int *)rect;	// 0x3499b491
- (void)resyncState;	// 0x3499b015
- (id)retainedByUserBlackImage;	// 0x3499b151
- (id)retainedByUserImageByEndingLocalContext:(id)context andRestoreState:(const XXStruct_vue6hD *)state;	// 0x3499af3d
// declared property setter: - (void)setAssetManager:(id)manager;	// 0x3499d965
- (void)setBackColor:(const float *)color saveTo:(float *)to;	// 0x3499b935
- (void)setBackColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x3499b9f9
- (void)setColorsPointer:(const float *)pointer;	// 0x3499d235
- (void)setForeColor:(const float *)color saveTo:(float *)to;	// 0x3499b5b9
- (void)setForeColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha saveTo:(float *)to;	// 0x3499b67d
- (void)setImage:(id)image onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x3499bad1
- (void)setInSpriteCoordinatesPointer:(const float *)spriteCoordinatesPointer;	// 0x3499d34d
// declared property setter: - (void)setIsFlipped:(BOOL)flipped;	// 0x3499b171
// declared property setter: - (void)setLocalAspectRatio:(float)ratio;	// 0x3499d9c5
- (void)setModelViewMatrix:(float [16])matrix saveTo:(float *)to;	// 0x3499ce45
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x3499cf65
- (void)setNormalsPointer:(const float *)pointer;	// 0x3499d1b5
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3499a97d
- (void)setScissorRect:(const int *)rect saveTo:(int *)to;	// 0x3499b385
- (void)setShader:(id)shader;	// 0x3499c821
- (void)setShaderUniformFloat:(float)aFloat forKey:(id)key;	// 0x3499cba9
- (void)setShaderUniformInt:(int)int forKey:(id)key;	// 0x3499cb2d
- (void)setShaderUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x3499cc21
- (void)setShaderUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x3499ccb9
- (void)setShaderUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x3499cd69
- (void)setTextureCoordinatesPointer:(const float *)pointer onTextureUnit:(unsigned)unit;	// 0x3499d2b5
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x3499cff5
- (void)setVertex2DPointer:(const float *)pointer;	// 0x3499d09d
- (void)setVertex3DPointer:(const float *)pointer;	// 0x3499d129
- (void)setVertexAttributePointer:(const float *)pointer ofSize:(unsigned)size forKey:(id)key;	// 0x3499d3cd
// declared property getter: - (id)shaderID;	// 0x3499da45
// declared property getter: - (CGSize)size;	// 0x3499abe5
// declared property getter: - (BOOL)supportsFragmentShaders;	// 0x3499d9e5
- (BOOL)supportsMirroredRepeatForImage:(id)image;	// 0x3499d919
- (void)unlock;	// 0x3499a979
- (void)unsetColorsPointer;	// 0x3499d6e9
- (void)unsetImage:(id)image onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x3499bd41
- (void)unsetInSpriteCoordinatesPointer;	// 0x3499d769
- (void)unsetNormalsPointer;	// 0x3499d6b1
- (void)unsetShader;	// 0x3499c921
- (void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned)unit;	// 0x3499d721
- (void)unsetVertexAttributePointerForKey:(id)key;	// 0x3499d7a1
- (void)unsetVertexPointer;	// 0x3499d66d
// declared property getter: - (unsigned)virtualScreen;	// 0x3499ac9d
// declared property getter: - (int)vram;	// 0x3499da35
@end

