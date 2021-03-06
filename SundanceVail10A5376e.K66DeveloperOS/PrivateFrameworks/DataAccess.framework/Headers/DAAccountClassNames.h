/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAAccountClassNames : NSObject {
	NSString *_accountClassName;	// 4 = 0x4
	NSString *_clientAccountClassName;	// 8 = 0x8
	NSString *_daemonAccountClassName;	// 12 = 0xc
	NSString *_agentClassName;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *accountClassName;	// G=0x311cfd21; S=0x311cfd31; @synthesize=_accountClassName
@property(retain, nonatomic) NSString *agentClassName;	// G=0x311cfd81; S=0x311cfd91; @synthesize=_agentClassName
@property(retain, nonatomic) NSString *clientAccountClassName;	// G=0x311cfd41; S=0x311cfd51; @synthesize=_clientAccountClassName
@property(retain, nonatomic) NSString *daemonAccountClassName;	// G=0x311cfd61; S=0x311cfd71; @synthesize=_daemonAccountClassName
// declared property getter: - (id)accountClassName;	// 0x311cfd21
// declared property getter: - (id)agentClassName;	// 0x311cfd81
// declared property getter: - (id)clientAccountClassName;	// 0x311cfd41
// declared property getter: - (id)daemonAccountClassName;	// 0x311cfd61
- (void)dealloc;	// 0x311cfc95
- (id)description;	// 0x311cfbfd
// declared property setter: - (void)setAccountClassName:(id)name;	// 0x311cfd31
// declared property setter: - (void)setAgentClassName:(id)name;	// 0x311cfd91
// declared property setter: - (void)setClientAccountClassName:(id)name;	// 0x311cfd51
// declared property setter: - (void)setDaemonAccountClassName:(id)name;	// 0x311cfd71
@end

