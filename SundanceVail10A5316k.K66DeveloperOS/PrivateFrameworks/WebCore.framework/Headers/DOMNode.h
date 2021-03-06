/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"
#import "DOMEventTarget.h"

@class DOMNodeList, DOMDocument, NSString, DOMElement, DOMNamedNodeMap;

@interface DOMNode : DOMObject <DOMEventTarget> {
}
@property(readonly, assign) DOMNamedNodeMap *attributes;	// G=0x35404755; 
@property(readonly, assign) NSString *baseURI;	// G=0x35404d7d; 
@property(readonly, assign) DOMNodeList *childNodes;	// G=0x352b171d; 
@property(readonly, assign) DOMNode *firstChild;	// G=0x35163611; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x354053d1; 
@property(readonly, assign) DOMNode *lastChild;	// G=0x352b1f0d; 
@property(readonly, assign) NSString *localName;	// G=0x35404c61; 
@property(readonly, assign) NSString *namespaceURI;	// G=0x3540486d; 
@property(readonly, assign) DOMNode *nextSibling;	// G=0x35183875; 
@property(readonly, assign) NSString *nodeName;	// G=0x352a64b1; 
@property(readonly, assign) unsigned short nodeType;	// G=0x351835c1; 
@property(copy) NSString *nodeValue;	// G=0x352ad6c5; S=0x35404599; 
@property(readonly, assign) DOMDocument *ownerDocument;	// G=0x352abbb5; 
@property(readonly, assign) DOMElement *parentElement;	// G=0x354052b5; 
@property(readonly, assign) DOMNode *parentNode;	// G=0x352a6671; 
@property(copy) NSString *prefix;	// G=0x35404989; S=0x35404aa5; 
@property(readonly, assign) DOMNode *previousSibling;	// G=0x352b5b09; 
@property(copy) NSString *textContent;	// G=0x35404f3d; S=0x354050fd; 
- (Element *)_linkElement;	// 0x35393435
- (RootObject *)_rootObject;	// 0x35392d6d
- (WKQuad)absoluteQuad;	// 0x35392df9
- (WKQuad)absoluteQuadAndInsideFixedPosition:(BOOL *)position;	// 0x35392e29
- (id)absoluteQuads;	// 0x3541912d
- (void)addEventListener:(id)listener :(id)arg2 :(BOOL)arg3;	// 0x35406f35
- (void)addEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;	// 0x352afac1
- (id)appendChild:(id)child;	// 0x352b0949
// declared property getter: - (id)attributes;	// 0x35404755
// declared property getter: - (id)baseURI;	// 0x35404d7d
- (id)borderRadii;	// 0x35419319
- (CGRect)boundingBox;	// 0x35392d91
- (CGRect)boundingBoxUsingTransforms;	// 0x35393129
- (id)boundingBoxes;	// 0x35418fb5
- (CGRect)boundingFrame;	// 0x35393a91
// declared property getter: - (id)childNodes;	// 0x352b171d
- (id)cloneNode:(BOOL)node;	// 0x35405c8d
- (unsigned short)compareDocumentPosition:(id)position;	// 0x35406c19
- (float)computedFontSize;	// 0x35393c75
- (BOOL)contains:(id)contains;	// 0x35406d29
- (BOOL)containsOnlyInlineObjects;	// 0x354195c5
- (void)dealloc;	// 0x35188209
- (id)description;	// 0x35392c65
- (BOOL)dispatchEvent:(id)event;	// 0x35407609
- (void)finalize;	// 0x35404541
- (id)findExplodedTextNodeAtPoint:(CGPoint)point;	// 0x35419c0d
// declared property getter: - (id)firstChild;	// 0x35163611
- (BOOL)hasAttributes;	// 0x35406359
- (BOOL)hasChildNodes;	// 0x3516359d
- (CGRect)hrefFrame;	// 0x353936b5
- (id)hrefLabel;	// 0x3539370d
- (id)hrefTarget;	// 0x35393669
- (id)hrefTitle;	// 0x3539387d
- (id)hrefURL;	// 0x3539345d
- (WKQuad)innerFrameQuad;	// 0x35393ab5
- (id)insertBefore:(id)before :(id)arg2;	// 0x35405675
- (id)insertBefore:(id)before refChild:(id)child;	// 0x354054d1
- (void)inspect;	// 0x35406e39
// declared property getter: - (BOOL)isContentEditable;	// 0x354053d1
- (BOOL)isDefaultNamespace:(id)aNamespace;	// 0x35406815
- (BOOL)isEqualNode:(id)node;	// 0x354064ad
- (BOOL)isSameNode:(id)node;	// 0x35406465
- (BOOL)isSelectableBlock;	// 0x35419611
- (BOOL)isSupported:(id)supported :(id)arg2;	// 0x35406129
- (BOOL)isSupported:(id)supported version:(id)version;	// 0x35405ef9
// declared property getter: - (id)lastChild;	// 0x352b1f0d
- (id)lineBoxQuads;	// 0x35393181
- (id)lineBoxRects;	// 0x35392de9
// declared property getter: - (id)localName;	// 0x35404c61
- (id)lookupNamespaceURI:(id)uri;	// 0x354069c1
- (id)lookupPrefix:(id)prefix;	// 0x354065bd
// declared property getter: - (id)namespaceURI;	// 0x3540486d
- (id)nextFocusNode;	// 0x35393ca1
// declared property getter: - (id)nextSibling;	// 0x35183875
// declared property getter: - (id)nodeName;	// 0x352a64b1
// declared property getter: - (unsigned short)nodeType;	// 0x351835c1
// declared property getter: - (id)nodeValue;	// 0x352ad6c5
- (void)normalize;	// 0x35405dfd
// declared property getter: - (id)ownerDocument;	// 0x352abbb5
// declared property getter: - (id)parentElement;	// 0x354052b5
// declared property getter: - (id)parentNode;	// 0x352a6671
// declared property getter: - (id)prefix;	// 0x35404989
- (id)previousFocusNode;	// 0x35393e0d
// declared property getter: - (id)previousSibling;	// 0x352b5b09
- (id)rangeOfContainingParagraph;	// 0x35419651
- (id)removeChild:(id)child;	// 0x35405b61
- (void)removeEventListener:(id)listener :(id)arg2 :(BOOL)arg3;	// 0x354073e5
- (void)removeEventListener:(id)listener listener:(id)listener2 useCapture:(BOOL)capture;	// 0x354071c1
- (id)replaceChild:(id)child :(id)arg2;	// 0x354059bd
- (id)replaceChild:(id)child oldChild:(id)child2;	// 0x35405819
// declared property setter: - (void)setNodeValue:(id)value;	// 0x35404599
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x35404aa5
// declared property setter: - (void)setTextContent:(id)content;	// 0x354050fd
// declared property getter: - (id)textContent;	// 0x35404f3d
- (float)textHeight;	// 0x35419bd1
- (id)textRects;	// 0x35393f79
@end

