/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface DAAction : NSObject <NSCoding> {

	int _changeId;
	long long _itemChangeType;
	id _serverId;
	id _instanceId;
	id _changedItem;
	id _changedAttendees;

}

@property (assign,nonatomic) long long itemChangeType;                            //@synthesize itemChangeType=_itemChangeType - In the implementation block
@property (nonatomic,retain) id serverId;                                         //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,retain) id instanceId;                                       //@synthesize instanceId=_instanceId - In the implementation block
@property (setter=_setChangedItem:,nonatomic,retain) id changedItem;              //@synthesize changedItem=_changedItem - In the implementation block
@property (assign,nonatomic) int changeId;                                        //@synthesize changeId=_changeId - In the implementation block
@property (nonatomic,retain) id changedAttendees;                                 //@synthesize changedAttendees=_changedAttendees - In the implementation block
-(id)asServerID;
-(id)asClientID;
-(id)asInstanceID;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ASEvent*)event;
-(id)message;
-(id)deletedEventID;
-(id)deletedContactID;
-(id)stringForItemChangeType:(long long)arg1 ;
-(int)changeId;
-(void)setItemChangeType:(long long)arg1 ;
-(void)_setChangedItem:(id)arg1 ;
-(void)setChangeId:(int)arg1 ;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4 ;
-(id)changedAttendees;
-(void)setChangedAttendees:(id)arg1 ;
-(id)deletedToDoID;
-(ASToDo*)toDo;
-(id)deletedNoteID;
-(id)serverId;
-(long long)itemChangeType;
-(id)changedItem;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 ;
-(id)instanceId;
-(void)setInstanceId:(id)arg1 ;
-(void)setServerId:(id)arg1 ;
-(ASContact*)contact;
-(ASNote*)note;
@end

