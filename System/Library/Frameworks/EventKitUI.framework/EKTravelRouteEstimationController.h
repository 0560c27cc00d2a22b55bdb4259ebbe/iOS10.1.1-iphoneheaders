/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKStyleProvider, EKTravelRouteEstimationControllerDelegate;
@class EKEventStore, EKStructuredLocation, NSMutableArray, NSDate, NSDictionary;

@interface EKTravelRouteEstimationController : NSObject {

	EKEventStore* _eventStore;
	id<EKStyleProvider> _styleProvider;
	EKStructuredLocation* _originStructuredLocation;
	NSMutableArray* _rows;
	BOOL _isEstimating;
	id<EKTravelRouteEstimationControllerDelegate> _delegate;
	NSDate* _arrivalDate;
	EKStructuredLocation* _destinationStructuredLocation;
	EKStructuredLocation* _evaluatedOriginLocation;
	NSDictionary* _travelTimeEstimatedValues;
	NSDictionary* _travelTimeLookupErrors;

}

@property (retain) EKStructuredLocation * evaluatedOriginLocation;                                       //@synthesize evaluatedOriginLocation=_evaluatedOriginLocation - In the implementation block
@property (retain) NSDictionary * travelTimeEstimatedValues;                                             //@synthesize travelTimeEstimatedValues=_travelTimeEstimatedValues - In the implementation block
@property (retain) NSDictionary * travelTimeLookupErrors;                                                //@synthesize travelTimeLookupErrors=_travelTimeLookupErrors - In the implementation block
@property (assign) BOOL isEstimating;                                                                    //@synthesize isEstimating=_isEstimating - In the implementation block
@property (assign,nonatomic,__weak) id<EKTravelRouteEstimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDate * arrivalDate;                                                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * originStructuredLocation; 
@property (retain) EKStructuredLocation * destinationStructuredLocation;                                 //@synthesize destinationStructuredLocation=_destinationStructuredLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOutputRows; 
+(id)_basedOnLocationLocalizedString;
-(void)setDelegate:(id<EKTravelRouteEstimationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<EKTravelRouteEstimationControllerDelegate>)delegate;
-(NSDate *)arrivalDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(void)setOriginStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)setDestinationStructuredLocation:(EKStructuredLocation *)arg1 ;
-(EKStructuredLocation *)originStructuredLocation;
-(void)_beginOriginLocationEstimationEventKitLookup;
-(void)_originLocationEstimationCompletedCoreRoutineLookup;
-(EKStructuredLocation *)destinationStructuredLocation;
-(EKStructuredLocation *)evaluatedOriginLocation;
-(void)setEvaluatedOriginLocation:(EKStructuredLocation *)arg1 ;
-(void)_originLocationEstimationCompletedEventKitLookup;
-(void)_beginOriginLocationEstimationCoreRoutineLookup;
-(void)_lookupTimedOut;
-(id)_routingModeTypesAsEnum;
-(void)setTravelTimeEstimatedValues:(NSDictionary *)arg1 ;
-(void)setTravelTimeLookupErrors:(NSDictionary *)arg1 ;
-(double)_estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1 ;
-(NSDictionary *)travelTimeEstimatedValues;
-(long long)_estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1 ;
-(NSDictionary *)travelTimeLookupErrors;
-(id)_estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1 ;
-(BOOL)_estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfOutputRows;
-(id)_imageForCellAtIndex:(unsigned long long)arg1 ;
-(id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3 ;
-(void)beginOriginLocationEstimationLookup;
-(void)beginTravelTimeEstimationLookup;
-(double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1 ;
-(id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1 ;
-(BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1 ;
-(long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1 ;
-(id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)arg1 ;
-(BOOL)isEstimating;
-(void)setIsEstimating:(BOOL)arg1 ;
@end

