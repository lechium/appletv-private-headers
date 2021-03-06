/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem {
	CoreDAVLeafItem *_apsBundleID;	// 24 = 0x18
	CoreDAVLeafItem *_courierServer;	// 28 = 0x1c
	CoreDAVItemWithHrefChildItem *_subscriptionURL;	// 32 = 0x20
	CoreDAVItemWithHrefChildItem *_tokenURL;	// 36 = 0x24
	CoreDAVLeafItem *_apsEnv;	// 40 = 0x28
	CoreDAVLeafItem *_refreshInterval;	// 44 = 0x2c
	CoreDAVLeafItem *_xmppServer;	// 48 = 0x30
	CoreDAVLeafItem *_xmppURI;	// 52 = 0x34
}
@property(retain) CoreDAVLeafItem *apsBundleID;	// G=0x31c560d9; S=0x31c560ed; @synthesize=_apsBundleID
@property(retain) CoreDAVLeafItem *apsEnv;	// G=0x31c561b9; S=0x31c561cd; @synthesize=_apsEnv
@property(retain) CoreDAVLeafItem *courierServer;	// G=0x31c56111; S=0x31c56125; @synthesize=_courierServer
@property(retain) CoreDAVLeafItem *refreshInterval;	// G=0x31c561f1; S=0x31c56205; @synthesize=_refreshInterval
@property(retain) CoreDAVItemWithHrefChildItem *subscriptionURL;	// G=0x31c56149; S=0x31c5615d; @synthesize=_subscriptionURL
@property(retain) CoreDAVItemWithHrefChildItem *tokenURL;	// G=0x31c56181; S=0x31c56195; @synthesize=_tokenURL
@property(retain) CoreDAVLeafItem *xmppServer;	// G=0x31c56229; S=0x31c5623d; @synthesize=_xmppServer
@property(retain) CoreDAVLeafItem *xmppURI;	// G=0x31c56261; S=0x31c56275; @synthesize=_xmppURI
- (id)init;	// 0x31c55751
// declared property getter: - (id)apsBundleID;	// 0x31c560d9
// declared property getter: - (id)apsEnv;	// 0x31c561b9
- (id)copyParseRules;	// 0x31c55a8d
// declared property getter: - (id)courierServer;	// 0x31c56111
- (void)dealloc;	// 0x31c5577d
- (id)description;	// 0x31c55855
// declared property getter: - (id)refreshInterval;	// 0x31c561f1
// declared property setter: - (void)setApsBundleID:(id)anId;	// 0x31c560ed
// declared property setter: - (void)setApsEnv:(id)env;	// 0x31c561cd
// declared property setter: - (void)setCourierServer:(id)server;	// 0x31c56125
// declared property setter: - (void)setRefreshInterval:(id)interval;	// 0x31c56205
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x31c5615d
// declared property setter: - (void)setTokenURL:(id)url;	// 0x31c56195
// declared property setter: - (void)setXmppServer:(id)server;	// 0x31c5623d
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x31c56275
// declared property getter: - (id)subscriptionURL;	// 0x31c56149
// declared property getter: - (id)tokenURL;	// 0x31c56181
// declared property getter: - (id)xmppServer;	// 0x31c56229
// declared property getter: - (id)xmppURI;	// 0x31c56261
@end

