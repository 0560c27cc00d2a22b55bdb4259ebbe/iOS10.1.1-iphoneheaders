/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonEAS/ASDataHandler.h>

@interface ASEventDataHandler : ASDataHandler
-(int)getIdFromLocalObject:(void*)arg1 ;
-(void*)copyLocalObjectFromId:(int)arg1 ;
-(BOOL)saveContainer;
-(id)copyOfAllLocalObjectsInContainer;
-(void)drainContainer;
-(BOOL)wipeServerIds;
-(void)drainSuperfluousChanges;
-(void)openDB;
-(BOOL)closeDBAndSave:(BOOL)arg1 ;
-(id)getDAObjectWithLocalItem:(void*)arg1 serverId:(id)arg2 account:(id)arg3 ;
-(id)getDAExceptionObjectWithLocalItem:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3 ;
-(long long)dataclass;
-(id)getTombstoneEndTimeForEvent:(id)arg1 ;
-(BOOL)_containerHasItems;
-(int)_newCalendarEntityType;
@end

