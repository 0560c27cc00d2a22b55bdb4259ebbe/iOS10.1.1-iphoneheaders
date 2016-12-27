/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, SSMetricsConfiguration, SSMetricsPageEvent;

@interface RadioGetStationsRequest : RadioRequest {

	long long _nodeType;
	SSURLConnectionRequest* _request;
	SSMetricsConfiguration* _metricsConfiguration;
	SSMetricsPageEvent* _metricsPageEvent;
	long long _numberOfResults;
	long long _parentNodeID;
	long long _resultsOffset;

}

@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SSMetricsPageEvent * metricsPageEvent;                 //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (assign,nonatomic) long long numberOfResults;                                    //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (nonatomic,readonly) long long parentNodeID;                                     //@synthesize parentNodeID=_parentNodeID - In the implementation block
@property (assign,nonatomic) long long resultsOffset;                                      //@synthesize resultsOffset=_resultsOffset - In the implementation block
-(void)cancel;
-(void)setNumberOfResults:(long long)arg1 ;
-(long long)numberOfResults;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)_rootTreeNodeByApplyingResponse:(id)arg1 returningError:(id*)arg2 ;
-(id)initForFeaturedStations;
-(id)initWithParentNodeID:(long long)arg1 ;
-(long long)parentNodeID;
-(long long)resultsOffset;
-(void)setResultsOffset:(long long)arg1 ;
@end

