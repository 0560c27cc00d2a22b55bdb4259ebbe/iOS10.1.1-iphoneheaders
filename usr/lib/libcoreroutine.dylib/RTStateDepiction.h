/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateDepictionOneState, RTStateModelLocation, NSDate, NSString;

@interface RTStateDepiction : NSObject <NSSecureCoding> {

	long long _numOfDataPts;
	RTStateDepictionOneState* _clusterState;

}

@property (nonatomic,retain) RTStateDepictionOneState * clusterState;              //@synthesize clusterState=_clusterState - In the implementation block
@property (assign,nonatomic) long long numOfDataPts;                               //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
@property (nonatomic,retain) RTStateModelLocation * location; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long typeSource; 
@property (nonatomic,retain) id<GEOMapItem> mapItem; 
@property (assign,nonatomic) long long mapItemSource; 
@property (nonatomic,retain) NSDate * geocodeDate; 
@property (nonatomic,copy) NSString * customLabel; 
+(BOOL)supportsSecureCoding;
+(long long)maximumNumberOfDataPoints;
+(double)quantizeTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(RTStateModelLocation *)location;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id<GEOMapItem>)mapItem;
-(void)setMapItem:(id<GEOMapItem>)arg1 ;
-(void)_performIntegrityCheck;
-(long long)typeSource;
-(id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(long long)arg3 mapItem:(id)arg4 mapItemSource:(long long)arg5 customLabel:(id)arg6 ;
-(long long)mapItemSource;
-(NSDate *)geocodeDate;
-(void)setTypeSource:(long long)arg1 ;
-(void)setMapItemSource:(long long)arg1 ;
-(void)setGeocodeDate:(NSDate *)arg1 ;
-(void)_performErrorCorrection;
-(long long)numOfDataPts;
-(RTStateDepictionOneState *)clusterState;
-(void)setNumOfDataPts:(long long)arg1 ;
-(id)lastEntyExit;
-(BOOL)exemptFromPurge;
-(id)getAllOneVisits;
-(void)submitEntry:(double)arg1 exit:(double)arg2 ;
-(double)getAggTimeScaleFactor:(double)arg1 predictionWindow:(double)arg2 ;
-(void)removeEntry:(double)arg1 exit:(double)arg2 ;
-(void)incrementNumOfDataPtsByInteger:(long long)arg1 ;
-(double)getLastVisit;
-(BOOL)cleanState:(double)arg1 ;
-(id)getRecentVisits:(double)arg1 ;
-(void)addOneVisitsFromStateDepiction:(id)arg1 ;
-(unsigned long long)getNumOfVisitsOverall;
-(id)getAggStateStat;
-(void)showState;
-(id)getEarliestLatestEntry;
-(id)getGetWeeklyStats:(double)arg1 numOfWeeks:(int)arg2 uniqueID:(id)arg3 ;
-(id)getPredState:(double)arg1 predictionWindow:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4 ;
-(void)removeAllVisitsExceptMostRecent;
-(void)setClusterState:(RTStateDepictionOneState *)arg1 ;
-(id)_filterEntryExitData:(id)arg1 options:(id)arg2 ;
-(id)_referenceAdjustEntryExitDates:(id)arg1 options:(id)arg2 ;
-(id)_excludeEntryExitOutlierDates:(id)arg1 options:(id)arg2 ;
-(double)_calculateStandardDeviationForDates:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(double)calculateStandardDeviationWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)reverseGeocode;
@end

