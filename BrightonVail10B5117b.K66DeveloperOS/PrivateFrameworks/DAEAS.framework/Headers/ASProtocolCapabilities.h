/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ASProtocolCapabilities : NSObject {
	NSString *_calConstraintsPlistPath;	// 4 = 0x4
	NSString *_abConstraintsPlistPath;	// 8 = 0x8
}
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x33bc73d1
- (id)_abConstraintsPlistPath;	// 0x33bc7641
- (id)_calConstraintsPlistPath;	// 0x33bc75a1
- (id)addressBookConstraintsPath;	// 0x33bc769d
- (id)calendarConstraintsPath;	// 0x33bc75fd
- (void)dealloc;	// 0x33bc7501
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x33bc759d
- (BOOL)supportsEmailFlagging;	// 0x33bc7591
- (BOOL)supportsItemOperationsCommand;	// 0x33bc7599
- (BOOL)supportsMailboxSearch;	// 0x33bc758d
- (BOOL)supportsNoteSyncing;	// 0x33bc76e1
- (BOOL)supportsProtocolVersion:(id)version;	// 0x33bc7565
- (BOOL)supportsSettingsCommand;	// 0x33bc7595
@end
