/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSProgress;

@interface ODRTagsRequest : NSObject {

	NSMutableDictionary* _tagRequests;
	double _lastEnhancedProgressReport;
	double _startTime;
	NSProgress* _progress;

}

@property (readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
-(id)initWithProgress:(id)arg1 ;
-(void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned long long)arg3 ;
-(NSProgress *)progress;
@end

