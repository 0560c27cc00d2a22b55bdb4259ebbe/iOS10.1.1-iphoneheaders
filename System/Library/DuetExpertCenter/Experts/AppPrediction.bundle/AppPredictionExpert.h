/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetExpertCenter/Experts/AppPrediction.bundle/AppPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECExpert.h>
#import <libobjc.A.dylib/_DECExpertDelegate.h>

@class _ATXAppPredictor, _ATXAppPredictorJSONScoreLogger, _ATXInspectionServer, NSCache, NSString;

@interface AppPredictionExpert : _DECExpert <_DECExpertDelegate> {

	_ATXAppPredictor* _predictor;
	_ATXAppPredictorJSONScoreLogger* _jsonScoreLogger;
	_ATXInspectionServer* _inspectionServer;
	NSCache* _ephemeralCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)demoPredictionWithLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 criteria:(id)arg3 consumer:(unsigned long long)arg4 limit:(unsigned long long)arg5 ;
-(void)trainExpert:(id)arg1 ;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned long long)arg2 ;
-(void)expert:(id)arg1 restoreModel:(id)arg2 ;
-(void)expert:(id)arg1 receiveAppWidgetFeedback:(id)arg2 consumerType:(unsigned long long)arg3 ;
-(void)expert:(id)arg1 receiveZkwSpotlightFeedback:(id)arg2 consumerType:(unsigned long long)arg3 ;
@end

