/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBSqueezeFilter : PBFilter {
	float _inputAmount;	// 8 = 0x8
	CGPoint inputPoint;	// 12 = 0xc
}
@property(assign) float inputAmount;	// G=0x30b5bd41; S=0x30b5be19; @dynamic
@property(assign) CGPoint inputPoint;	// G=0x30b5c179; S=0x30b5c14d; @synthesize
- (const char *)_fragmentShaderSource;	// 0x30b5bd51
- (id)_glesUniforms;	// 0x30b5bd6d
// declared property getter: - (float)inputAmount;	// 0x30b5bd41
// declared property getter: - (CGPoint)inputPoint;	// 0x30b5c179
- (unsigned long)kernelArgCount;	// 0x30b5bd5d
- (/*function-pointer*/ void *)kernelWrapper;	// 0x30b5bd61
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x30b5bf8d
- (void)setDefaults;	// 0x30b5bdc5
// declared property setter: - (void)setInputAmount:(float)amount;	// 0x30b5be19
// declared property setter: - (void)setInputPoint:(CGPoint)point;	// 0x30b5c14d
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x30b5be65
@end

