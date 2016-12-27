/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMapTable, NSTimer, NSDate;

@interface MKTransitItemController : NSObject {

	NSMutableDictionary* _mapItemLookups;
	NSMutableDictionary* _lineItemLookups;
	NSMapTable* _containers;
	NSTimer* _updateTimer;
	NSDate* _referenceDate;

}

@property (nonatomic,readonly) NSDate * referenceDate;              //@synthesize referenceDate=_referenceDate - In the implementation block
+(id)sharedController;
-(void)_timerFired;
-(NSDate *)referenceDate;
-(BOOL)_needsUpdateReferenceDate;
-(void)_updateReferenceDate;
-(void)_scheduleReferenceDateUpdate;
-(void)addDynamicTransitUIContainer:(id)arg1 ;
-(void)removeDynamicTransitUIContainer:(id)arg1 ;
-(BOOL)updateTransitMapItemIfNeeded:(id)arg1 updateForIncidents:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)updateTransitLineItemIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

