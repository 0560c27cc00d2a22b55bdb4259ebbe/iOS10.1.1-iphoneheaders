/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * interpretations; 
@property (assign,nonatomic) BOOL lowConfidence; 
@property (assign,nonatomic) BOOL speechRepairApplied; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phrase;
+(id)phraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechInterpretations;
-(NSArray *)interpretations;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setInterpretations:(NSArray *)arg1 ;
-(BOOL)lowConfidence;
-(void)setLowConfidence:(BOOL)arg1 ;
-(BOOL)speechRepairApplied;
-(void)setSpeechRepairApplied:(BOOL)arg1 ;
@end

