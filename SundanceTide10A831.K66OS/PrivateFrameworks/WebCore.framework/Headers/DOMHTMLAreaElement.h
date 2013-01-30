/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, assign) NSURL *absoluteLinkURL;	// G=0x3548803d; 
@property(copy) NSString *accessKey;	// G=0x35487141; S=0x35487265; 
@property(copy) NSString *alt;	// G=0x35485d6d; S=0x35485e91; 
@property(copy) NSString *coords;	// G=0x35486045; S=0x35486169; 
@property(readonly, assign) NSString *hashName;	// G=0x35487419; 
@property(readonly, assign) NSString *host;	// G=0x354875d5; 
@property(readonly, assign) NSString *hostname;	// G=0x35487791; 
@property(copy) NSString *href;	// G=0x3548631d; S=0x354864e5; 
@property(assign) BOOL noHref;	// G=0x35486699; S=0x354867a5; 
@property(readonly, assign) NSString *pathname;	// G=0x3548794d; 
@property(retain) id ping;	// G=0x354868b9; S=0x354869dd; converted property
@property(readonly, assign) NSString *port;	// G=0x35487b09; 
@property(readonly, assign) NSString *protocol;	// G=0x35487cc5; 
@property(readonly, assign) NSString *search;	// G=0x35487e81; 
@property(copy) NSString *shape;	// G=0x35486b91; S=0x35486cb5; 
@property(copy) NSString *target;	// G=0x35486e69; S=0x35486f8d; 
// declared property getter: - (id)absoluteLinkURL;	// 0x3548803d
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x354e3251
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x354e3381
// declared property getter: - (id)accessKey;	// 0x35487141
// declared property getter: - (id)alt;	// 0x35485d6d
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x354e31fd
- (id)boundingBoxesWithOwner:(id)owner;	// 0x354e3305
// declared property getter: - (id)coords;	// 0x35486045
// declared property getter: - (id)hashName;	// 0x35487419
// declared property getter: - (id)host;	// 0x354875d5
// declared property getter: - (id)hostname;	// 0x35487791
// declared property getter: - (id)href;	// 0x3548631d
// declared property getter: - (BOOL)noHref;	// 0x35486699
// declared property getter: - (id)pathname;	// 0x3548794d
// converted property getter: - (id)ping;	// 0x354868b9
// declared property getter: - (id)port;	// 0x35487b09
// declared property getter: - (id)protocol;	// 0x35487cc5
// declared property getter: - (id)search;	// 0x35487e81
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35487265
// declared property setter: - (void)setAlt:(id)alt;	// 0x35485e91
// declared property setter: - (void)setCoords:(id)coords;	// 0x35486169
// declared property setter: - (void)setHref:(id)href;	// 0x354864e5
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x354867a5
// converted property setter: - (void)setPing:(id)ping;	// 0x354869dd
// declared property setter: - (void)setShape:(id)shape;	// 0x35486cb5
// declared property setter: - (void)setTarget:(id)target;	// 0x35486f8d
// declared property getter: - (id)shape;	// 0x35486b91
// declared property getter: - (id)target;	// 0x35486e69
@end
