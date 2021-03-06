/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVFeedDocument, NSString, NSDictionary, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedElement : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	ATVFeedMerchant *_merchant;	// 8 = 0x8
	NSString *_type;	// 12 = 0xc
	ATVFeedElement *_parent;	// 16 = 0x10
	NSDictionary *_eventHandlerScripts;	// 20 = 0x14
}
@property(retain, nonatomic) NSDictionary *eventHandlerScripts;	// G=0x16a831; S=0x16a841; @synthesize=_eventHandlerScripts
@property(copy, nonatomic) NSString *identifier;	// G=0x16a7b9; S=0x16a7cd; @synthesize=_identifier
@property(retain, nonatomic) ATVFeedMerchant *merchant;	// G=0x16a6cd; S=0x16a7dd; @synthesize=_merchant
@property(readonly, assign, nonatomic) ATVFeedDocument *ownerDocument;	// G=0x16a70d; 
@property(assign, nonatomic) ATVFeedElement *parent;	// G=0x16a811; S=0x16a821; @synthesize=_parent
@property(copy, nonatomic) NSString *type;	// G=0x16a7ed; S=0x16a801; @synthesize=_type
+ (id)elementWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x16a4b1
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x16a509
- (void)dealloc;	// 0x16a72d
// declared property getter: - (id)eventHandlerScripts;	// 0x16a831
// declared property getter: - (id)identifier;	// 0x16a7b9
// declared property getter: - (id)merchant;	// 0x16a6cd
// declared property getter: - (id)ownerDocument;	// 0x16a70d
// declared property getter: - (id)parent;	// 0x16a811
// declared property setter: - (void)setEventHandlerScripts:(id)scripts;	// 0x16a841
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x16a7cd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x16a7dd
// declared property setter: - (void)setParent:(id)parent;	// 0x16a821
// declared property setter: - (void)setType:(id)type;	// 0x16a801
// declared property getter: - (id)type;	// 0x16a7ed
@end

