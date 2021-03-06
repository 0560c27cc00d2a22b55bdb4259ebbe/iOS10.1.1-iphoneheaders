/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface PLSyncAssetGroup : NSObject {

	NSString* _uuid;
	NSDate* _date;
	NSMutableArray* _assetPairs;

}

@property (setter=setUUID:,getter=UUID,retain) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (retain) NSMutableArray * assetPairs;                              //@synthesize assetPairs=_assetPairs - In the implementation block
-(void)setAssetPairs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetPairs;
-(void)dealloc;
-(NSDate *)date;
-(id)UUID;
-(void)setDate:(NSDate *)arg1 ;
-(void)setUUID:(id)arg1 ;
@end

