/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableURLRequest;

__attribute__((visibility("hidden")))
@interface ATVJSURLRequest : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	NSMutableURLRequest *_urlRequest;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x34185bd1; S=0x34185be1; @synthesize=_jsObjectRef
@property(retain, nonatomic) NSMutableURLRequest *urlRequest;	// G=0x34185bf1; S=0x34185c01; @synthesize=_urlRequest
- (id)initWithContext:(OpaqueJSContext *)context urlRequest:(id)request;	// 0x3418582d
- (void)dealloc;	// 0x34185b85
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x34185bd1
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x34185be1
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x34185c01
// declared property getter: - (id)urlRequest;	// 0x34185bf1
@end

