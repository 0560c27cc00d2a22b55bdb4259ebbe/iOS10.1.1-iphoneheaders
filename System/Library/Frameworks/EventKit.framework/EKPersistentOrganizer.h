/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setCurrentUser:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(int)entityType;
-(BOOL)isCurrentUser;
@end

