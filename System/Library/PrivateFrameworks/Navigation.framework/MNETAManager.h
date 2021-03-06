/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOETAUpdaterDelegate.h>

@protocol MNETAManagerDelegate;
@class GEOETAUpdater, NSArray, NSMapTable, NSString;

@interface MNETAManager : NSObject <GEOETAUpdaterDelegate> {

	id<MNETAManagerDelegate> _delegate;
	GEOETAUpdater* _etaUpdater;
	NSArray* _routes;
	NSMapTable* _etaRoutesTable;
	double _requestInterval;
	double _debugInitialRequestDelay;

}

@property (assign,nonatomic,__weak) id<MNETAManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * routes;                                      //@synthesize routes=_routes - In the implementation block
@property (assign,nonatomic) double requestInterval;                                //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugInitialRequestDelay;                       //@synthesize debugInitialRequestDelay=_debugInitialRequestDelay - In the implementation block
@property (assign,nonatomic) double debugBackgroundTimeWindow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MNETAManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNETAManagerDelegate>)delegate;
-(void)reset;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(BOOL)etaUpdater:(id)arg1 updateRouteWithETATrafficUpdateResponse:(id)arg2 step:(id)arg3 percentOfCurrentStepRemaining:(double)arg4 ;
-(id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1 ;
-(void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2 ;
-(void)etaUpdater:(id)arg1 receivedError:(id)arg2 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4 ;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(double)requestInterval;
-(void)setRequestInterval:(double)arg1 ;
-(id)initWithDestination:(id)arg1 routeAttributes:(id)arg2 tracePlayer:(id)arg3 ;
-(double)debugBackgroundTimeWindow;
-(void)setDebugBackgroundTimeWindow:(double)arg1 ;
-(void)updateUserLocation:(id)arg1 routeMatch:(id)arg2 ;
-(id)etaRouteForRoute:(id)arg1 ;
-(BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(double)debugInitialRequestDelay;
-(void)setDebugInitialRequestDelay:(double)arg1 ;
@end

