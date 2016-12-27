/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHomeManager, NSObject, NSArray, NSString, NSUUID;

@interface HMDAssistantGather : NSObject <HMFLogging> {

	HMDHomeManager* _manager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSArray* _currentHomekitObjects;

}

@property (assign,nonatomic,__weak) HMDHomeManager * manager;                     //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSArray * currentHomekitObjects;                     //@synthesize currentHomekitObjects=_currentHomekitObjects - In the implementation block
@property (nonatomic,readonly) NSArray * homeKitObjects; 
@property (nonatomic,readonly) long long homeCount; 
@property (nonatomic,readonly) NSString * primaryHomeName; 
@property (nonatomic,readonly) NSUUID * primaryHomeUUID; 
@property (nonatomic,readonly) NSString * currentHomeName; 
@property (nonatomic,readonly) NSUUID * currentHomeUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)homeKitObjects;
-(NSString *)currentHomeName;
-(NSUUID *)currentHomeUUID;
-(NSString *)primaryHomeName;
-(NSUUID *)primaryHomeUUID;
-(long long)homeCount;
-(void)getSyncEntityObjectsWithValidity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDHomeManager *)manager;
-(id)_getPrimaryHome;
-(id)_getCurrentHome;
-(void)_gatherHomeKitObjects;
-(void)setCurrentHomekitObjects:(NSArray *)arg1 ;
-(NSArray *)currentHomekitObjects;
-(id)initWithHomeManager:(id)arg1 queue:(id)arg2 ;
-(void)gatherHomeKitObjects;
-(void)setManager:(HMDHomeManager *)arg1 ;
@end

