/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerInfoTaskGroup.h> // Unknown library


@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup {
	BOOL _fetchSharees;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL fetchSharees;	// G=0x337f2e7d; S=0x337f2e8d; @synthesize=_fetchSharees
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x337f29c1
- (id)_copyContainerParserMappings;	// 0x337f2a49
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x337f2c89
- (id)containerForURL:(id)url;	// 0x337f2cc5
// declared property getter: - (BOOL)fetchSharees;	// 0x337f2e7d
// declared property setter: - (void)setFetchSharees:(BOOL)sharees;	// 0x337f2e8d
@end
