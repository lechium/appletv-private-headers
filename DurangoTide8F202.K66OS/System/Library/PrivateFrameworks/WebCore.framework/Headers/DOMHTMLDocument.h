/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class DOMHTMLCollection, DOMElement, NSString;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, retain) DOMElement *activeElement;	// G=0x33f89839; 
@property(copy) NSString *alinkColor;	// G=0x33f89ced; S=0x33f89e21; 
@property(copy) NSString *bgColor;	// G=0x33f89855; S=0x33f89989; 
@property(readonly, copy) NSString *compatMode;	// G=0x33f89705; 
@property(copy) NSString *designMode;	// G=0x33f894b9; S=0x33f895ed; 
@property(copy) NSString *dir;	// G=0x33f8926d; S=0x33f893a1; 
@property(readonly, retain) DOMHTMLCollection *embeds;	// G=0x33f88ec5; 
@property(copy) NSString *fgColor;	// G=0x33f89aa1; S=0x33f89bd5; 
@property(readonly, assign) int height;	// G=0x33f89255; 
@property(copy) NSString *linkColor;	// G=0x33f89f39; S=0x33f8a06d; 
@property(readonly, retain) DOMHTMLCollection *plugins;	// G=0x33f88fed; 
@property(readonly, retain) DOMHTMLCollection *scripts;	// G=0x33f89115; 
@property(copy) NSString *vlinkColor;	// G=0x33f8a185; S=0x33f8a2b9; 
@property(readonly, assign) int width;	// G=0x33f8923d; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x33f82a69
- (id)_createDocumentFragmentWithText:(id)text;	// 0x33f8258d
// declared property getter: - (id)activeElement;	// 0x33f89839
// declared property getter: - (id)alinkColor;	// 0x33f89ced
// declared property getter: - (id)bgColor;	// 0x33f89855
- (void)captureEvents;	// 0x33f8a655
- (void)clear;	// 0x33f8a63d
- (void)close;	// 0x33f8a3ed
// declared property getter: - (id)compatMode;	// 0x33f89705
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x33f8261d
- (id)createDocumentFragmentWithText:(id)text;	// 0x33f8284d
// declared property getter: - (id)designMode;	// 0x33f894b9
// declared property getter: - (id)dir;	// 0x33f8926d
// declared property getter: - (id)embeds;	// 0x33f88ec5
// declared property getter: - (id)fgColor;	// 0x33f89aa1
- (BOOL)hasFocus;	// 0x33f8a685
// declared property getter: - (int)height;	// 0x33f89255
// declared property getter: - (id)linkColor;	// 0x33f89f39
- (void)open;	// 0x33f8a3d1
// declared property getter: - (id)plugins;	// 0x33f88fed
- (void)releaseEvents;	// 0x33f8a66d
// declared property getter: - (id)scripts;	// 0x33f89115
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x33f89e21
// declared property setter: - (void)setBgColor:(id)color;	// 0x33f89989
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x33f895ed
// declared property setter: - (void)setDir:(id)dir;	// 0x33f893a1
// declared property setter: - (void)setFgColor:(id)color;	// 0x33f89bd5
// declared property setter: - (void)setLinkColor:(id)color;	// 0x33f8a06d
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x33f8a2b9
// declared property getter: - (id)vlinkColor;	// 0x33f8a185
// declared property getter: - (int)width;	// 0x33f8923d
- (void)write:(id)write;	// 0x33f8a405
- (void)writeln:(id)writeln;	// 0x33f8a521
@end

