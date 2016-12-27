/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface GEOEventRecorderInstrumentation : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSString* _filepath;
	NSString* _geoFilepath;
	NSString* _movieFilepath;
	NSDate* _startDate;

}
+(id)defaultInstrumentation;
+(id)initializeDefaultInstrumentation;
+(void)endInstrumentation;
-(id)init;
-(void)dealloc;
-(id)getRecordedFilePaths;
-(void)_setupLogging;
-(void)captureUIEvent:(id)arg1 ;
-(void)captureUserActionLogMessageEvent:(id)arg1 ;
-(void)writeString:(id)arg1 ToFilepath:(id)arg2 ;
-(void)captureEventRecorderScreenVideo;
-(void)_captureScreenVideo:(id)arg1 ;
-(void)initializeFilepaths;
@end

