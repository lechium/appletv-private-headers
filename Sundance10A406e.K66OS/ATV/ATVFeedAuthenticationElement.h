/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedAuthenticationElement : ATVFeedRootElement {
	ATVFeedImageElement *_image;	// 8 = 0x8
	NSString *_accountNameTitle;	// 12 = 0xc
	NSString *_accountNameInstructions;	// 16 = 0x10
	NSString *_accountNameLabel;	// 20 = 0x14
	NSString *_accountNameFootnote;	// 24 = 0x18
	NSString *_accountPasswordTitle;	// 28 = 0x1c
	NSString *_accountPasswordInstructions;	// 32 = 0x20
	NSString *_accountPasswordLabel;	// 36 = 0x24
	NSString *_connectionString;	// 40 = 0x28
	NSString *_failureTitle;	// 44 = 0x2c
	NSString *_failureInstructions;	// 48 = 0x30
	NSString *_urlToLoadAfterAuth;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *accountNameFootnote;	// G=0x152219; S=0x15222d; @synthesize=_accountNameFootnote
@property(copy, nonatomic) NSString *accountNameInstructions;	// G=0x1521d1; S=0x1521e5; @synthesize=_accountNameInstructions
@property(copy, nonatomic) NSString *accountNameLabel;	// G=0x1521f5; S=0x152209; @synthesize=_accountNameLabel
@property(copy, nonatomic) NSString *accountNameTitle;	// G=0x1521ad; S=0x1521c1; @synthesize=_accountNameTitle
@property(copy, nonatomic) NSString *accountPasswordInstructions;	// G=0x152261; S=0x152275; @synthesize=_accountPasswordInstructions
@property(copy, nonatomic) NSString *accountPasswordLabel;	// G=0x152285; S=0x152299; @synthesize=_accountPasswordLabel
@property(copy, nonatomic) NSString *accountPasswordTitle;	// G=0x15223d; S=0x152251; @synthesize=_accountPasswordTitle
@property(copy, nonatomic) NSString *connectionString;	// G=0x1522a9; S=0x1522bd; @synthesize=_connectionString
@property(copy, nonatomic) NSString *failureInstructions;	// G=0x1522f1; S=0x152305; @synthesize=_failureInstructions
@property(copy, nonatomic) NSString *failureTitle;	// G=0x1522cd; S=0x1522e1; @synthesize=_failureTitle
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15218d; S=0x15219d; @synthesize=_image
@property(copy, nonatomic) NSString *urlToLoadAfterAuth;	// G=0x152315; S=0x152329; @synthesize=_urlToLoadAfterAuth
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x151da1
// declared property getter: - (id)accountNameFootnote;	// 0x152219
// declared property getter: - (id)accountNameInstructions;	// 0x1521d1
// declared property getter: - (id)accountNameLabel;	// 0x1521f5
// declared property getter: - (id)accountNameTitle;	// 0x1521ad
// declared property getter: - (id)accountPasswordInstructions;	// 0x152261
// declared property getter: - (id)accountPasswordLabel;	// 0x152285
// declared property getter: - (id)accountPasswordTitle;	// 0x15223d
// declared property getter: - (id)connectionString;	// 0x1522a9
- (void)dealloc;	// 0x152061
// declared property getter: - (id)failureInstructions;	// 0x1522f1
// declared property getter: - (id)failureTitle;	// 0x1522cd
// declared property getter: - (id)image;	// 0x15218d
// declared property setter: - (void)setAccountNameFootnote:(id)footnote;	// 0x15222d
// declared property setter: - (void)setAccountNameInstructions:(id)instructions;	// 0x1521e5
// declared property setter: - (void)setAccountNameLabel:(id)label;	// 0x152209
// declared property setter: - (void)setAccountNameTitle:(id)title;	// 0x1521c1
// declared property setter: - (void)setAccountPasswordInstructions:(id)instructions;	// 0x152275
// declared property setter: - (void)setAccountPasswordLabel:(id)label;	// 0x152299
// declared property setter: - (void)setAccountPasswordTitle:(id)title;	// 0x152251
// declared property setter: - (void)setConnectionString:(id)string;	// 0x1522bd
// declared property setter: - (void)setFailureInstructions:(id)instructions;	// 0x152305
// declared property setter: - (void)setFailureTitle:(id)title;	// 0x1522e1
// declared property setter: - (void)setImage:(id)image;	// 0x15219d
// declared property setter: - (void)setUrlToLoadAfterAuth:(id)loadAfterAuth;	// 0x152329
// declared property getter: - (id)urlToLoadAfterAuth;	// 0x152315
@end

