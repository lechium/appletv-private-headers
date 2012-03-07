/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import <NSObject.h> // Unknown library

@class PBCompiledFilter, NSString;

@interface PBFilter : NSObject {
	void *_priv;	// 4 = 0x4
}
@property(retain, nonatomic) PBCompiledFilter *compiledFilter;	// G=0x30b58c3d; S=0x30b58fa1; @dynamic
@property(readonly, assign, nonatomic) unsigned kernelArgCount;	// G=0x30b58c79; 
@property(readonly, retain, nonatomic) NSString *openCLKernelName;	// G=0x30b58c6d; 
+ (id)defaultValueForKey:(id)key;	// 0x30b59119
+ (id)filterWithName:(id)name;	// 0x30b59461
+ (BOOL)needsDisplayForKey:(id)key;	// 0x30b58ff1
- (id)init;	// 0x30b590c1
- (const char *)_fragmentShaderSource;	// 0x30b58c5d
- (id)_glesAttributes;	// 0x30b58f25
- (id)_glesUniforms;	// 0x30b58ed9
- (id)_lookupTableForName:(id)name;	// 0x30b594c5
- (id)_lookupTableNames;	// 0x30b58c61
- (id)_presentationName;	// 0x30b58fdd
- (const char *)_vertexShaderSource;	// 0x30b58c4d
- (BOOL)allowAbsoluteGestures;	// 0x30b58c39
// declared property getter: - (id)compiledFilter;	// 0x30b58c3d
- (void)dealloc;	// 0x30b59259
- (id)description;	// 0x30b592b5
- (float)floatValueForKeyIfSupported:(id)keyIfSupported;	// 0x30b58e81
- (void)handleGestureAtLocations:(CGPoint *)locations count:(int)count translation:(CGPoint)translation viewSize:(CGSize)size stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x30b59de9
- (void)handlePanGesture:(CGPoint)gesture viewSize:(CGSize)size stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x30b59ab9
- (void)handlePinchGesture:(float)gesture stateBegan:(BOOL)began;	// 0x30b599b9
- (void)handleRotateGesture:(float)gesture stateBegan:(BOOL)began mirror:(BOOL)mirror;	// 0x30b58ccd
- (void)handleTapGesture:(CGPoint)gesture viewSize:(CGSize)size mirror:(BOOL)mirror;	// 0x30b5a555
- (id)inputKeys;	// 0x30b59081
// declared property getter: - (unsigned long)kernelArgCount;	// 0x30b58c79
- (/*function-pointer*/ void *)kernelWrapper;	// 0x30b58c71
- (id)localizedName;	// 0x30b591a9
- (id)name;	// 0x30b59201
// declared property getter: - (id)openCLKernelName;	// 0x30b58c6d
- (CGPoint)pointValueForKeyIfSupported:(id)keyIfSupported;	// 0x30b59955
- (void)renderWithContext:(id)context inputSize:(CGSize)size outputRect:(CGRect)rect mirrored:(BOOL)mirrored;	// 0x30b58c65
// declared property setter: - (void)setCompiledFilter:(id)filter;	// 0x30b58fa1
- (void)setDefaults;	// 0x30b58c35
- (void)setFloatValue:(float)value forKeyIfSupported:(id)keyIfSupported;	// 0x30b58e19
- (void)setPointValue:(CGPoint)value forKeyIfSupported:(id)keyIfSupported;	// 0x30b58da9
- (void)setupKernelArguments:(id)arguments mirrored:(BOOL)mirrored;	// 0x30b58c75
@end
