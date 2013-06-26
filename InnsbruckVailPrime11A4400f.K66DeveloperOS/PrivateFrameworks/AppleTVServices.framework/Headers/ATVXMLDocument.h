/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVXMLNode.h"

@class ATVXMLElement, NSData;

@interface ATVXMLDocument : ATVXMLNode {
	ATVXMLElement *_rootElement;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSData *XMLData;	// G=0x300c5de9; 
@property(retain, nonatomic) ATVXMLElement *rootElement;	// G=0x300c5aad; S=0x300c5c2d; 
- (id)init;	// 0x300c5879
- (id)initWithData:(id)data error:(id *)error;	// 0x300c54b5
- (id)initWithRootElement:(id)rootElement;	// 0x300c58a5
// declared property getter: - (id)XMLData;	// 0x300c5de9
- (void)dealloc;	// 0x300c5a61
- (id)makeElementNamed:(id)named;	// 0x300c5f6d
// declared property getter: - (id)rootElement;	// 0x300c5aad
// declared property setter: - (void)setRootElement:(id)element;	// 0x300c5c2d
@end
