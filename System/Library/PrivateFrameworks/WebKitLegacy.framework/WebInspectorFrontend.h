/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebInspectorFrontend : NSObject {

	WebInspectorFrontendClient* m_frontendClient;

}
-(void)showConsole;
-(BOOL)isDebuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(BOOL)arg1 ;
-(BOOL)isProfilingJavaScript;
-(id)initWithFrontendClient:(WebInspectorFrontendClient*)arg1 ;
-(void)startProfilingJavaScript;
-(void)stopProfilingJavaScript;
-(void)detach;
-(void)attach;
-(void)close;
@end

