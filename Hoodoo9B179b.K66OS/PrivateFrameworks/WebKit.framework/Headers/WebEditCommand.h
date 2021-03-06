/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebEditCommand : NSObject {
@private
	RefPtr<WebCore::EditCommand> m_command;	// 4 = 0x4
}
+ (id)commandWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x3453a3c9
+ (void)initialize;	// 0x3453a3c5
- (id)initWithEditCommand:(PassRefPtr<WebCore::EditCommand>)editCommand;	// 0x3453a515
- (id).cxx_construct;	// 0x3453a501
- (void).cxx_destruct;	// 0x3453b021
- (EditCommand *)command;	// 0x3454b54d
- (void)dealloc;	// 0x3453ad7d
- (void)finalize;	// 0x3454b55d
@end

