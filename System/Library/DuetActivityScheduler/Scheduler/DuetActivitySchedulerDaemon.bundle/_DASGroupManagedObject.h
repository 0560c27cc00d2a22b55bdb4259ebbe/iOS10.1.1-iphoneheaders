/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface _DASGroupManagedObject : NSManagedObject

@property (assign,nonatomic) unsigned long long maxConcurrent; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * activities; 
-(void)willSave;
@end

