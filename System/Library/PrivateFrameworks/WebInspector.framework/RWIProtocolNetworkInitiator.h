/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSArray * stackTrace; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) double lineNumber; 
-(double)lineNumber;
-(NSString *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setLineNumber:(double)arg1 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
@end

