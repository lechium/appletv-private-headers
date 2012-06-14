/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface AFAccount : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	NSString *_label;	// 8 = 0x8
	NSString *_assistantIdentifier;	// 12 = 0xc
	NSString *_speechIdentifier;	// 16 = 0x10
	NSString *_hostname;	// 20 = 0x14
	NSString *_predefinedServer;	// 24 = 0x18
	NSString *_aceHost;	// 28 = 0x1c
	NSDictionary *_lastSyncDates;	// 32 = 0x20
	NSString *_localeIdentifier;	// 36 = 0x24
	BOOL _isActive;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *aceHost;	// G=0x345abdfd; S=0x345abe11; @synthesize=_aceHost
@property(copy, nonatomic) NSString *assistantIdentifier;	// G=0x345abd6d; S=0x345abd81; @synthesize=_assistantIdentifier
@property(copy, nonatomic) NSString *hostname;	// G=0x345abdb5; S=0x345abdc9; @synthesize=_hostname
@property(copy, nonatomic) NSString *identifier;	// G=0x345abd25; S=0x345abd39; @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isActive;	// G=0x345abe45; @synthesize=_isActive
@property(copy, nonatomic) NSString *label;	// G=0x345abd49; S=0x345abd5d; @synthesize=_label
@property(copy, nonatomic) NSDictionary *lastSyncDates;	// G=0x345abe21; S=0x345abe35; @synthesize=_lastSyncDates
@property(copy, nonatomic) NSString *localeIdentifier;	// G=0x345abe55; S=0x345abe69; @synthesize=_localeIdentifier
@property(copy, nonatomic) NSString *predefinedServer;	// G=0x345abdd9; S=0x345abded; @synthesize=_predefinedServer
@property(copy, nonatomic) NSString *speechIdentifier;	// G=0x345abd91; S=0x345abda5; @synthesize=_speechIdentifier
- (id)initWithMessageDictionary:(id)messageDictionary;	// 0x345ab8e1
- (void).cxx_destruct;	// 0x345abe79
// declared property getter: - (id)aceHost;	// 0x345abdfd
// declared property getter: - (id)assistantIdentifier;	// 0x345abd6d
- (id)description;	// 0x345ab831
// declared property getter: - (id)hostname;	// 0x345abdb5
// declared property getter: - (id)identifier;	// 0x345abd25
// declared property getter: - (BOOL)isActive;	// 0x345abe45
// declared property getter: - (id)label;	// 0x345abd49
// declared property getter: - (id)lastSyncDates;	// 0x345abe21
// declared property getter: - (id)localeIdentifier;	// 0x345abe55
- (id)messageDictionary;	// 0x345abb6d
// declared property getter: - (id)predefinedServer;	// 0x345abdd9
// declared property setter: - (void)setAceHost:(id)host;	// 0x345abe11
// declared property setter: - (void)setAssistantIdentifier:(id)identifier;	// 0x345abd81
// declared property setter: - (void)setHostname:(id)hostname;	// 0x345abdc9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x345abd39
// declared property setter: - (void)setLabel:(id)label;	// 0x345abd5d
// declared property setter: - (void)setLastSyncDates:(id)dates;	// 0x345abe35
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0x345abe69
// declared property setter: - (void)setPredefinedServer:(id)server;	// 0x345abded
// declared property setter: - (void)setSpeechIdentifier:(id)identifier;	// 0x345abda5
// declared property getter: - (id)speechIdentifier;	// 0x345abd91
@end

