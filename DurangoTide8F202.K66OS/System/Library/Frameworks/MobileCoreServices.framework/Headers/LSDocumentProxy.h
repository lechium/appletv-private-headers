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
	NSString *_name;	// 32 = 0x20
	NSString *_typeIdentifier;	// 36 = 0x24
	NSString *_MIMEType;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x347503c9; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x347503e9; @synthesize=_name
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x347503d9; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x34750521
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3;	// 0x3475056d
// declared property getter: - (id)MIMEType;	// 0x347503c9
- (void)bind;	// 0x3475199d
- (void)dealloc;	// 0x347504b5
// declared property getter: - (id)name;	// 0x347503e9
// declared property getter: - (id)typeIdentifier;	// 0x347503d9
@end

