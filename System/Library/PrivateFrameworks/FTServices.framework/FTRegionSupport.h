/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * _delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * _regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) NSArray * regions; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(NSArray *)regions;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(NSArray *)_regions;
-(void)set_regions:(NSArray *)arg1 ;
-(FTMessageDelivery *)_delivery;
-(void)set_delivery:(FTMessageDelivery *)arg1 ;
-(void)startLoading;
-(id)regionForID:(id)arg1 ;
@end
