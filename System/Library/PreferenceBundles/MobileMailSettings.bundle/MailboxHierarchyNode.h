/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MFMailboxUid, NSString;

@interface MailboxHierarchyNode : NSObject {

	NSMutableArray* _children;
	MFMailboxUid* _mailbox;
	MFMailboxUid* _parentMailbox;
	NSString* _displayName;
	int _level;

}

@property (retain) MFMailboxUid * parentMailbox;              //@synthesize parentMailbox=_parentMailbox - In the implementation block
@property (retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(id)children;
-(void)addChild:(id)arg1 ;
-(void)setParentMailbox:(MFMailboxUid *)arg1 ;
-(id)removeNodeForMailbox:(id)arg1 ;
-(MFMailboxUid *)parentMailbox;
-(id)_findNodeForMailbox:(id)arg1 removeNode:(BOOL)arg2 ;
-(id)findNodeForMailbox:(id)arg1 ;
@end

