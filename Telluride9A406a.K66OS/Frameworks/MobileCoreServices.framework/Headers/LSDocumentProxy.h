/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
@private
	NSString *_name;	// 40 = 0x28
	NSString *_typeIdentifier;	// 44 = 0x2c
	NSString *_MIMEType;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x33982d45; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x33982d65; @synthesize=_name
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x33982d55; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x33983e1d
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3;	// 0x33983d5d
// declared property getter: - (id)MIMEType;	// 0x33982d45
- (void)bind;	// 0x33983ee5
- (void)dealloc;	// 0x33983e71
- (id)iconStyleDomain;	// 0x33982d35
// declared property getter: - (id)name;	// 0x33982d65
// declared property getter: - (id)typeIdentifier;	// 0x33982d55
@end

