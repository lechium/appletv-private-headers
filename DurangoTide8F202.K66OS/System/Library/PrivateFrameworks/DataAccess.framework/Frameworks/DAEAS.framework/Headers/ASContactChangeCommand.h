/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSyncTaskCommand.h"

@class ASContact;

@interface ASContactChangeCommand : ASSyncTaskCommand {
	ASContact *_contact;	// 12 = 0xc
}
- (id)initWithContact:(id)contact;	// 0x32eecb9d
- (void)appendApplicationDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x32eec995
- (void)dealloc;	// 0x32eecb55
- (id)serverID;	// 0x32eec975
@end

