/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKTimelineEntryModelCacheDataSource;
@class NSMutableArray, NSDate;

@interface NTKTimelineEntryModelCache : NSObject {

	NSMutableArray* _cachedEntryModels;
	NSDate* _cacheStartDate;
	NSDate* _cacheEndDate;
	id<NTKTimelineEntryModelCacheDataSource> _dataSource;

}

@property (nonatomic,readonly) NSDate * cacheStartDate;                                               //@synthesize cacheStartDate=_cacheStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * cacheEndDate;                                                 //@synthesize cacheEndDate=_cacheEndDate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKTimelineEntryModelCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)_startOfDayBeforeDate:(id)arg1 ;
+(id)_startOfDayAfterDate:(id)arg1 ;
+(id)_startOfDayForDate:(id)arg1 ;
+(id)_endOfDayForDate:(id)arg1 ;
-(id)init;
-(void)setDataSource:(id<NTKTimelineEntryModelCacheDataSource>)arg1 ;
-(id<NTKTimelineEntryModelCacheDataSource>)dataSource;
-(void)invalidate;
-(id)calendar;
-(id)_cachedEntryModelForDate:(id)arg1 ;
-(void)_extendCacheTowardDate:(id)arg1 ;
-(id)_cachedEntryModelBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)hasEntryModelForDate:(id)arg1 ;
-(id)entryModelForDate:(id)arg1 ;
-(id)entryModelsBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(NSDate *)cacheStartDate;
-(NSDate *)cacheEndDate;
@end

