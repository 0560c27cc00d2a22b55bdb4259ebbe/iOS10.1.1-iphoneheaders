/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KonaClip.h>

@class NSMutableDictionary, NSString;

@interface ExtraClip : KonaClip

@property (nonatomic,retain,readonly) NSMutableDictionary * extraDefinition; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startRatio; 
@property (assign,nonatomic) double endRatio; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasVisualCharacteristic;
-(NSMutableDictionary *)extraDefinition;
-(double)startRatio;
-(void)setStartRatio:(double)arg1 ;
-(double)endRatio;
-(void)setEndRatio:(double)arg1 ;
@end

