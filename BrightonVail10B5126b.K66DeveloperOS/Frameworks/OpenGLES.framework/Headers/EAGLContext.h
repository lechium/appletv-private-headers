/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {
	EAGLContextPrivate *_private;	// 4 = 0x4
	NSString *debugLabel;	// 8 = 0x8
}
@property(readonly, assign) unsigned API;	// G=0x32207b7d; 
@property(copy, nonatomic) NSString *debugLabel;	// G=0x3220854d; S=0x32208561; @synthesize
@property(readonly, assign) EAGLSharegroup *sharegroup;	// G=0x32207b91; 
+ (id)currentContext;	// 0x32207b69
+ (BOOL)setCurrentContext:(id)context;	// 0x32207ac9
- (id)initWithAPI:(unsigned)api;	// 0x32207235
- (id)initWithAPI:(unsigned)api properties:(id)properties;	// 0x32207385
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x32207249
- (id)initWithAPI:(unsigned)api sharegroup:(id)sharegroup;	// 0x322072f5
// declared property getter: - (unsigned)API;	// 0x32207b7d
- (EAGLMacroContextRef)GetMacroContextPrivate;	// 0x3220853d
- (BOOL)attachImage:(unsigned)image toCoreSurface:(IOSurfaceRef)coreSurface invertedRender:(BOOL)render;	// 0x32208075
- (void)dealloc;	// 0x322079b5
// declared property getter: - (id)debugLabel;	// 0x3220854d
- (EAGLMacroContextRef)getMacroContextPrivate;	// 0x32208529
- (unsigned)getParameter:(unsigned)parameter to:(int *)to;	// 0x322084dd
- (BOOL)presentRenderbuffer:(unsigned)renderbuffer;	// 0x32207d8d
- (BOOL)renderbufferStorage:(unsigned)storage fromDrawable:(id)drawable;	// 0x32207ba5
- (void)sendNotification:(unsigned)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x32208375
// declared property setter: - (void)setDebugLabel:(id)label;	// 0x32208561
- (unsigned)setParameter:(unsigned)parameter to:(int *)to;	// 0x32208491
// declared property getter: - (id)sharegroup;	// 0x32207b91
- (void)swapNotification:(IOMobileFramebufferRef)notification forTransaction:(unsigned)transaction onLayer:(unsigned)layer;	// 0x322083f1
- (BOOL)texImageIOSurface:(IOSurfaceRef)surface target:(unsigned)target internalFormat:(unsigned)format width:(unsigned)width height:(unsigned)height format:(unsigned)format6 type:(unsigned)type plane:(unsigned)plane invert:(BOOL)invert;	// 0x32208291
@end

