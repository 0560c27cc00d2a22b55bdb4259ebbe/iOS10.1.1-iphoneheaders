/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISURLRequestPerformance, NSString;

@interface SUScriptRequestPerformance : SUScriptObject {

	ISURLRequestPerformance* _performance;

}

@property (readonly) double finishInterval; 
@property (readonly) NSString * JSONHeaders; 
@property (readonly) double receivedResponseInterval; 
@property (readonly) double renderBeginInterval; 
@property (readonly) double renderEndInterval; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)initWithRequestPerformance:(id)arg1 ;
-(double)renderEndInterval;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(NSString *)JSONHeaders;
-(id)scriptAttributeKeys;
-(id)_className;
@end

