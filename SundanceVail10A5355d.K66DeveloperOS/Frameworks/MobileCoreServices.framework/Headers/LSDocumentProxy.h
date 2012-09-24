/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
	NSString *_name;	// 40 = 0x28
	NSString *_typeIdentifier;	// 44 = 0x2c
	NSString *_MIMEType;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x31a21efd; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31a21edd; @synthesize=_name
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x31a21eed; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x31a21e01
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3;	// 0x31a21d4d
// declared property getter: - (id)MIMEType;	// 0x31a21efd
- (void)bind;	// 0x31a210e5
- (void)dealloc;	// 0x31a21e55
- (id)iconStyleDomain;	// 0x31a21ecd
// declared property getter: - (id)name;	// 0x31a21edd
// declared property getter: - (id)typeIdentifier;	// 0x31a21eed
@end
