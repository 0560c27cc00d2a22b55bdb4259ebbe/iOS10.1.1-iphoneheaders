/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/INApplicationContextProviding.h>
#import <libobjc.A.dylib/INIntentHandlerProviding.h>

@class NSString;

@interface INExtension : NSObject <NSExtensionRequestHandling, INApplicationContextProviding, INIntentHandlerProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)handlerForIntent:(id)arg1 ;
-(id)currentApplicationContext;
@end

