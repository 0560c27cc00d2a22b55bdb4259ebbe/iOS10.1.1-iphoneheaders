/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKIntelligentSketchLogger : NSObject
+(id)sharedInstance;
+(void)initialize;
-(BOOL)_loggingIsEnabled;
-(id)_newLogPathWithShapeName:(id)arg1 ;
-(id)_logsPath;
-(id)_fileName:(id)arg1 ;
-(void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2 ;
-(void)openFinderWindowToLogs;
@end

