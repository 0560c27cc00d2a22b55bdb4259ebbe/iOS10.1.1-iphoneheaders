/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface HFTemperatureUnitCoordinator : NSObject {

	BOOL _isCelsius;
	NSHashTable* _clients;
	NSObject*<OS_dispatch_queue> _coordinatorQueue;

}

@property (nonatomic,retain) NSHashTable * clients;                                      //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> coordinatorQueue;              //@synthesize coordinatorQueue=_coordinatorQueue - In the implementation block
@property (assign,nonatomic) BOOL isCelsius;                                             //@synthesize isCelsius=_isCelsius - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(NSHashTable *)clients;
-(BOOL)isCelsius;
-(void)setClients:(NSHashTable *)arg1 ;
-(void)setCoordinatorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)coordinatorQueue;
-(void)setIsCelsius:(BOOL)arg1 ;
@end

