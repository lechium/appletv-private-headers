/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVJSContext;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVJSStorage : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
	id<ATVReadWriteFeedResource> _resource;	// 12 = 0xc
}
@property(retain) ATVJSContext *context;	// G=0x302301d1; S=0x302301e5; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x30230209; S=0x30230219; @synthesize=_jsObjectRef
@property(retain, nonatomic) id<ATVReadWriteFeedResource> resource;	// G=0x30230229; S=0x30230239; @synthesize=_resource
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2 resource:(id)resource;	// 0x3022fc39
// declared property getter: - (id)context;	// 0x302301d1
- (void)dealloc;	// 0x30230171
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x30230209
// declared property getter: - (id)resource;	// 0x30230229
// declared property setter: - (void)setContext:(id)context;	// 0x302301e5
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x30230219
// declared property setter: - (void)setResource:(id)resource;	// 0x30230239
@end

