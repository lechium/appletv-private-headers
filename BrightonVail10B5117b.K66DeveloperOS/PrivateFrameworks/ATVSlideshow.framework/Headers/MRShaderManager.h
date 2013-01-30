/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface MRShaderManager : NSObject {
	NSMutableDictionary *mGLShadersPerContext;	// 4 = 0x4
	NSMutableDictionary *mShadersPerContext;	// 8 = 0x8
	NSMutableDictionary *mShaderDescriptions;	// 12 = 0xc
	NSLock *mGLShadersPerContextLock;	// 16 = 0x10
	NSLock *mShadersPerContextLock;	// 20 = 0x14
}
+ (void)initialize;	// 0x333d4f69
+ (id)shaderKeyForShaderID:(id)shaderID andArguments:(id)arguments;	// 0x333d6855
+ (id)sharedManager;	// 0x333d4fd1
- (id)init;	// 0x333d4fe1
- (unsigned)_glShaderForID:(id)anId inBaseContext:(id)baseContext isFragmentShader:(BOOL)shader withArguments:(id)arguments;	// 0x333d5ed1
- (void)cleanup;	// 0x333d59e1
- (void)dealloc;	// 0x333d5961
- (void)finalize;	// 0x333d59a1
- (void)forgetContext:(id)context;	// 0x333d5b75
- (void)registerShaderWithFragmentShaderSource:(id)fragmentShaderSource andVertexShaderName:(id)name forShaderID:(id)shaderID;	// 0x333d6a65
- (void)registerVertexShaderWithVertexShaderSource:(id)vertexShaderSource forShaderID:(id)shaderID;	// 0x333d69d5
- (void)releaseResources;	// 0x333d5a5d
- (id)shaderForShaderID:(id)shaderID inContext:(id)context withArguments:(id)arguments;	// 0x333d654d
@end
