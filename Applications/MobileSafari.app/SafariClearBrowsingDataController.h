/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SafariClearBrowsingDataController : NSObject {

	NSArray* _availableIntervals;

}

@property (readonly) NSArray * availableIntervals;              //@synthesize availableIntervals=_availableIntervals - In the implementation block
-(void)clearAllBrowsingData;
-(NSArray *)availableIntervals;
-(void)clearDataFromInterval:(id)arg1 ;
-(void)_clearBrowsingDataAddedAfterDate:(id)arg1 ;
-(id)init;
@end

