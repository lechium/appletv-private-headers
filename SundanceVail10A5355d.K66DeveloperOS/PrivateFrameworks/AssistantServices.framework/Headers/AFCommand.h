/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface AFCommand : NSObject {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_commandInfo;	// 8 = 0x8
	id _context;	// 12 = 0xc
}
@property(readonly, retain) id context;	// G=0x33fa4071; converted property
@property(readonly, assign, nonatomic) NSString *domain;	// G=0x33fa3f49; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x33fa4159; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL needsReply;	// G=0x33fa3ff9; 
- (id)initWithMessage:(id)message;	// 0x33fa3d55
- (void).cxx_destruct;	// 0x33fa4169
- (id)aceDictionary;	// 0x33fa3fe5
- (id)commandValueForKey:(id)key;	// 0x33fa3f71
// converted property getter: - (id)context;	// 0x33fa4071
- (id)description;	// 0x33fa4085
// declared property getter: - (id)domain;	// 0x33fa3f49
// declared property getter: - (id)name;	// 0x33fa4159
// declared property getter: - (BOOL)needsReply;	// 0x33fa3ff9
@end

