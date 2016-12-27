/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMHome, NSSet, NSArray;

@interface HFItemProvider : NSObject {

	HMHome* _home;

}

@property (nonatomic,readonly) NSSet * items; 
@property (nonatomic,readonly) NSArray * invalidationReasons; 
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(NSSet *)items;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(/*^block*/id)arg2 itemMap:(/*^block*/id)arg3 ;
-(id)reloadItems;
-(NSArray *)invalidationReasons;
@end

