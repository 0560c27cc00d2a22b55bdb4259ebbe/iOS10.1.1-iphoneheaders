/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, PLOperator, NSObject, NSMutableArray, NSString;

@interface PLNSNotificationOperatorComposition : NSObject {

	NSArray* _notificationNames;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _notificationObservers;

}

@property (__weak) PLOperator * operator;                               //@synthesize operator=_operator - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSMutableArray * notificationObservers;              //@synthesize notificationObservers=_notificationObservers - In the implementation block
@property (retain) NSArray * notificationNames;                         //@synthesize notificationNames=_notificationNames - In the implementation block
@property (readonly) NSString * notificationName; 
@property (nonatomic,copy) id operatorBlock;                            //@synthesize operatorBlock=_operatorBlock - In the implementation block
-(void)dealloc;
-(PLOperator *)operator;
-(NSArray *)notificationNames;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotifications:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithOperator:(id)arg1 forNotifications:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSMutableArray *)notificationObservers;
-(void)setNotificationNames:(NSArray *)arg1 ;
-(void)setNotificationObservers:(NSMutableArray *)arg1 ;
-(id)initWithWorkQueue:(id)arg1 forNotification:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)listenForNotifications:(BOOL)arg1 ;
-(id)initWithOperator:(id)arg1 forNotification:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)notificationName;
@end
