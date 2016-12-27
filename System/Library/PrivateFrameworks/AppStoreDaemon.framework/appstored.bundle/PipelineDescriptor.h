/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EventBus, DaemonDatabase;

@interface PipelineDescriptor : NSObject {

	EventBus* _bus;
	DaemonDatabase* _database;

}

@property (nonatomic,retain) EventBus * bus;                         //@synthesize bus=_bus - In the implementation block
@property (nonatomic,retain) DaemonDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)setBus:(EventBus *)arg1 ;
-(DaemonDatabase *)database;
-(EventBus *)bus;
-(void)setDatabase:(DaemonDatabase *)arg1 ;
@end

