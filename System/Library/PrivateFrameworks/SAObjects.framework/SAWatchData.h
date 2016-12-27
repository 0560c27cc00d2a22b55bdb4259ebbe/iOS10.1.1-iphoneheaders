/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL configuredForLeftWrist; 
@property (nonatomic,copy) NSString * interfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchData;
+(id)watchDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)interfaceOrientation;
-(void)setInterfaceOrientation:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)configuredForLeftWrist;
-(void)setConfiguredForLeftWrist:(BOOL)arg1 ;
@end

