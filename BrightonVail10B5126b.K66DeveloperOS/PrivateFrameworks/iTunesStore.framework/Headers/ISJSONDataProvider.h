/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDataProvider.h"


@interface ISJSONDataProvider : ISDataProvider {
	unsigned _options;	// 44 = 0x2c
}
@property(assign) unsigned parserOptions;	// G=0x36899ed1; S=0x36899ee5; @synthesize=_options
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x36899e29
// declared property getter: - (unsigned)parserOptions;	// 0x36899ed1
// declared property setter: - (void)setParserOptions:(unsigned)options;	// 0x36899ee5
@end
