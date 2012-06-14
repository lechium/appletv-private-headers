/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSArray, NSString, NSMutableDictionary;
@protocol MZKeyValueStoreTransactionProcessing;

@interface MZKeyValueStoreTransaction : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
	NSString *_sinceDomainVersion;	// 8 = 0x8
	NSURL *_URL;	// 12 = 0xc
	id<MZKeyValueStoreTransactionProcessing> _processor;	// 16 = 0x10
	NSMutableDictionary *_userInfo;	// 20 = 0x14
	int _type;	// 24 = 0x18
	NSArray *_keys;	// 28 = 0x1c
}
@property(retain) NSURL *URL;	// G=0x30857e71; S=0x30857e85; @synthesize=_URL
@property(copy) NSString *domain;	// G=0x30857e29; S=0x30857e3d; @synthesize=_domain
@property(readonly, assign, nonatomic) NSArray *keys;	// G=0x30857efd; @synthesize=_keys
@property(retain) id<MZKeyValueStoreTransactionProcessing> processor;	// G=0x30857e95; S=0x30857ea9; @synthesize=_processor
@property(copy) NSString *sinceDomainVersion;	// G=0x30857e4d; S=0x30857e61; @synthesize=_sinceDomainVersion
@property(assign, nonatomic) int type;	// G=0x30857edd; S=0x30857eed; @synthesize=_type
@property(retain) NSMutableDictionary *userInfo;	// G=0x30857eb9; S=0x30857ecd; @synthesize=_userInfo
- (id)initWithType:(int)type domain:(id)domain URL:(id)url keys:(id)keys;	// 0x30857901
// declared property getter: - (id)URL;	// 0x30857e71
- (void)dealloc;	// 0x308579bd
- (id)description;	// 0x30857c85
// declared property getter: - (id)domain;	// 0x30857e29
// declared property getter: - (id)keys;	// 0x30857efd
// declared property getter: - (id)processor;	// 0x30857e95
// declared property setter: - (void)setDomain:(id)domain;	// 0x30857e3d
// declared property setter: - (void)setProcessor:(id)processor;	// 0x30857ea9
// declared property setter: - (void)setSinceDomainVersion:(id)version;	// 0x30857e61
// declared property setter: - (void)setType:(int)type;	// 0x30857eed
// declared property setter: - (void)setURL:(id)url;	// 0x30857e85
// declared property setter: - (void)setUserInfo:(id)info;	// 0x30857ecd
- (void)setUserInfoValue:(id)value forKey:(id)key;	// 0x30857a95
// declared property getter: - (id)sinceDomainVersion;	// 0x30857e4d
// declared property getter: - (int)type;	// 0x30857edd
// declared property getter: - (id)userInfo;	// 0x30857eb9
- (id)userInfoValueForKey:(id)key;	// 0x30857bb1
@end

